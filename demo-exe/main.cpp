#include<iostream>
#include<iomanip>
#include"Mico.h"

int main(int argc,char *argv[])
{

  //Define vectors to be passed back to mico functions to hold various torque values/matrices
  double gravityTorque[6];
  double massMatrix[36];
  double coriolisMatrix[36];
  double ddtJacobian[36];
  double J[36];
  double transform[16];
  std::cout<<"This executable is used to demonstrate the C++ library created for the Kinova Mico manipulator"<<std::endl;
  std::cout<<argc<<std::endl;
  Mico micoRobot=Mico();

  std::cout<<"\n\n";
  //Create a vector of joint angles and velocities
  double jointAngles[6]={1,2,3,4,5,6};
  double jointVels[6]={1,2,3,4,5,6};
  if(argc>1&&argc==13){
    for(int i=0;i<6;i++){
      jointAngles[i]=atof(argv[i+1]);
      jointVels[i]=atof(argv[i+7]);
    }
  }
  else if(argc>1){
    std::cout<<"Invalid number of inputs. Please enter desired joint angles & vels as command line arguments with the following notation: \n q1 q2 q3 q4 q5 q6 dq1 dq2 dq3 dq4 dq5 dq6\n\n";



  }



  //Output the current state of the robot
  std::cout<<"The current state of the manipulator is: "<<std::endl;
  for(int i=1;i<7;i++){
    //std::cout<<std::setw(15)<<std::cout<<"Joint["<<i<<"] Position: "<<std::right<<std::setw(5)<<jointAngles[i-1]<<std::cout<<" Rad"<<std::setw(5)<<""<<std::setw(15)<<std::cout"Joint["<<i<<std::cout<<"] Velocity: "<<jointVels[i-1]<<std::cout<<" Rad/s\n";
    std::cout<<"Joint["<<i<<"] Position: "<<std::right<<std::setw(5)<<jointAngles[i-1]<<std::setw(5)<<""<<std::setw(15)<<"Joint["<<i<<"] Velocity: "<<jointVels[i-1]<<" Rad/s\n";
  }

  std::cout<<"\n";

  //Calculate the mass matrix for the current configuration
  micoRobot.M(jointAngles,massMatrix);
  std::cout<<"The mass matrix for the current configuration is: "<<std::endl;
  std::cout<<"M=\n[";
  for(int i=1;i<7;i++){
    for(int j=1;j<7;j++){
      std::cout<<std::setw(i==1&&j==1?14:15)<<massMatrix[i-1+(j-1)*6];
      if(j<6){
        std::cout<<", ";
      }
      else if(i<6)
      std::cout<<"\n";
    }
    if(i==6)
    std::cout<<"]\n";
  }

std::cout<<"\n";
//Calculate the coriolisMatrix
micoRobot.C(jointAngles,jointVels,coriolisMatrix);
std::cout<<"The coriolis matrix for the current configuration is: "<<std::endl;
std::cout<<"C=\n[";
for(int i=1;i<7;i++){
  for(int j=1;j<7;j++){
    std::cout<<std::setw(i==1&&j==1?14:15)<<coriolisMatrix[i-1+(j-1)*6];
    if(j<6){
      std::cout<<", ";
    }
    else if(i<6)
    std::cout<<"\n";
  }
  if(i==6)
  std::cout<<"]\n";
}

std::cout<<"\n";
//Generate the gravity compensation vector for the MICO
micoRobot.G(jointAngles,gravityTorque);
std::cout<<"The required gravity compensation for the current configuration is: "<<std::endl;
for(int i=1;i<7;i++){
  std::cout<<"Joint["<<i<<"]: "<<std::right<<std::setw(14)<<gravityTorque[i-1]<<" N/m\n";
}

std::cout<<"\n";
//Calculate the Jacobian
micoRobot.jacobian(jointAngles,J);
std::cout<<"The Jacobian for the current configuration is: "<<std::endl;
std::cout<<"J=\n[";
for(int i=1;i<7;i++){
  for(int j=1;j<7;j++){
    std::cout<<std::setw(i==1&&j==1?14:15)<<J[i-1+(j-1)*6];
    if(j<6){
      std::cout<<", ";
    }
    else if(i<6)
    std::cout<<"\n";
  }
  if(i==6)
  std::cout<<"]\n";
}

std::cout<<"\n";
//Calculate the Derivative of the Jacobian wrt time
micoRobot.dJdt(jointAngles,jointVels,ddtJacobian);
std::cout<<"The dJdt for the current configuration is: "<<std::endl;
std::cout<<"dJdt=\n[";
for(int i=1;i<7;i++){
  for(int j=1;j<7;j++){
    std::cout<<std::setw(i==1&&j==1?14:15)<<ddtJacobian[i-1+(j-1)*6];
    if(j<6){
      std::cout<<", ";
    }
    else if(i<6)
    std::cout<<"\n";
  }
  if(i==6)
  std::cout<<"]\n";
}

std::cout<<"\n";
//Calculate the transform of the EE wrt the base frame
micoRobot.transform(jointAngles,transform);
std::cout<<"The transform of the EE wrt the base frame is: "<<std::endl;
std::cout<<"dJdt=\n[";
for(int i=1;i<5;i++){
  for(int j=1;j<5;j++){
    std::cout<<std::setw(i==1&&j==1?14:15)<<transform[i-1+(j-1)*4];
    if(j<4){
      std::cout<<", ";
    }
    else if(i<4)
    std::cout<<"\n";
  }
  if(i==4)
  std::cout<<"]\n";
}

}
