//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Mico.h
//
// Code generation for function 'Mico'
//

#ifndef MICO_H
#define MICO_H

// Include files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
class Mico {
public:
  Mico();
  ~Mico();
  void C(const double q[6], const double dq[6], double coriolisMatrix[36]);
  void dJdt(const double q[6], const double dq[6], double b_dJdt[36]);
  void G(const double q[6], double b_G[6]);
  void jacobian(const double q[6], double Jac[36]);
  void M(const double q[6], double b_M[36]);
  void transform(const double q[6], double T[16]);
};

#endif
// End of code generation (Mico.h)
