# kinova-mico-dynamics-library

This is a C++ library that provides functions to calculate vectors/matrices which describe the dynamics of the Kinova Mico. The outputs of these functions can be used to implement more advanced non-linear control laws. 

The manipulator can be described by:

T=M(q)*ddq+C(q,dq)*dq+G(q)

Where: 

T:= Joint torque vector
q:= joint position vector
dq:= joint velocity vector
M(q):= Joint inertia matrix
C(q,dq):= Coriolis & centrifugal force matix
G(q):= gravity vector 

The library contains a class with 6 functions. The functions are described below as well as in demo-exe/main.cpp.

M := This function calculates the joint mass matrix. The matrix is returned as a vector of lenth 36. This can then be reshaped to [6x6]
C := This function calculates the the Coriolis & centrifugal force matix. The matrix is returned as a vector of lenth 36. This can then be reshaped to [6x6]
G: = This function calculates the gravity vector for the provided configuration. Returned as a 6x1 vector in units of N/m

jacobian := This function calculates the jacobian 
dJdt := This function calculates the derivative of the jacobian with respect to time. This can be helpful when implementing task space control. 

transform := This function returns the transform of the EE wrt the base frame. Units of the cartesian position are in meters. 

All functions are dependant on the current manipulator configuration (q in rad) and C * dJdt are also dependant on the joint velocities (dq in rad/s)
