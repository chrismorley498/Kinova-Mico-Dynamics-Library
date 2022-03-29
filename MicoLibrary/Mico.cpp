//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Mico.cpp
//
// Code generation for function 'Mico'
//

// Include files
#include "Mico.h"
#include <cmath>
#include<iostream>

// Function Definitions
void Mico::C(const double q[6], const double dq[6], double coriolisMatrix[36])
{
  double C1_1_tmp;
  double C1_1_tmp_tmp;
  double C1_1_tmp_tmp_tmp;
  double C1_2_tmp;
  double C1_2_tmp_tmp;
  double C1_2_tmp_tmp_tmp;
  double C1_6_tmp;
  double C1_6_tmp_tmp;
  double C2_6_tmp;
  double C3_1_tmp;
  double ab_C1_1_tmp;
  double ab_coriolisMatrix_tmp;
  double b_C1_1_tmp;
  double b_C1_1_tmp_tmp;
  double b_C1_1_tmp_tmp_tmp;
  double b_C1_2_tmp_tmp;
  double b_C1_2_tmp_tmp_tmp;
  double b_C1_6_tmp;
  double b_C1_6_tmp_tmp;
  double b_C3_1_tmp;
  double b_coriolisMatrix_tmp;
  double b_coriolisMatrix_tmp_tmp;
  double bb_C1_1_tmp;
  double bb_coriolisMatrix_tmp;
  double c_C1_1_tmp;
  double c_C1_1_tmp_tmp;
  double c_C1_1_tmp_tmp_tmp;
  double c_C1_2_tmp_tmp;
  double c_C1_2_tmp_tmp_tmp;
  double c_C1_6_tmp;
  double c_C3_1_tmp;
  double c_coriolisMatrix_tmp;
  double c_coriolisMatrix_tmp_tmp;
  double cb_C1_1_tmp;
  double cb_coriolisMatrix_tmp;
  double coriolisMatrix_tmp;
  double coriolisMatrix_tmp_tmp;
  double d;
  double d1;
  double d10;
  double d11;
  double d12;
  double d2;
  double d3;
  double d4;
  double d5;
  double d6;
  double d7;
  double d8;
  double d9;
  double d_C1_1_tmp;
  double d_C1_1_tmp_tmp;
  double d_C1_2_tmp_tmp;
  double d_C1_2_tmp_tmp_tmp;
  double d_C1_6_tmp;
  double d_C3_1_tmp;
  double d_coriolisMatrix_tmp;
  double d_coriolisMatrix_tmp_tmp;
  double db_C1_1_tmp;
  double db_coriolisMatrix_tmp;
  double e_C1_1_tmp;
  double e_C1_1_tmp_tmp;
  double e_C1_2_tmp_tmp;
  double e_C1_6_tmp;
  double e_C3_1_tmp;
  double e_coriolisMatrix_tmp;
  double e_coriolisMatrix_tmp_tmp;
  double eb_C1_1_tmp;
  double eb_coriolisMatrix_tmp;
  double f_C1_1_tmp;
  double f_C1_1_tmp_tmp;
  double f_C1_6_tmp;
  double f_C3_1_tmp;
  double f_coriolisMatrix_tmp;
  double fb_C1_1_tmp;
  double fb_coriolisMatrix_tmp;
  double g_C1_1_tmp;
  double g_C1_1_tmp_tmp;
  double g_C1_6_tmp;
  double g_C3_1_tmp;
  double g_coriolisMatrix_tmp;
  double gb_C1_1_tmp;
  double gb_coriolisMatrix_tmp;
  double h_C1_1_tmp;
  double h_C1_1_tmp_tmp;
  double h_C1_6_tmp;
  double h_C3_1_tmp;
  double h_coriolisMatrix_tmp;
  double hb_C1_1_tmp;
  double hb_coriolisMatrix_tmp;
  double i_C1_1_tmp;
  double i_C1_1_tmp_tmp;
  double i_C1_6_tmp;
  double i_C3_1_tmp;
  double i_coriolisMatrix_tmp;
  double ib_C1_1_tmp;
  double ib_coriolisMatrix_tmp;
  double j_C1_1_tmp;
  double j_C1_1_tmp_tmp;
  double j_C3_1_tmp;
  double j_coriolisMatrix_tmp;
  double jb_C1_1_tmp;
  double jb_coriolisMatrix_tmp;
  double k_C1_1_tmp;
  double k_C1_1_tmp_tmp;
  double k_C3_1_tmp;
  double k_coriolisMatrix_tmp;
  double kb_C1_1_tmp;
  double kb_coriolisMatrix_tmp;
  double l_C1_1_tmp;
  double l_C1_1_tmp_tmp;
  double l_C3_1_tmp;
  double l_coriolisMatrix_tmp;
  double lb_C1_1_tmp;
  double lb_coriolisMatrix_tmp;
  double m_C1_1_tmp;
  double m_C1_1_tmp_tmp;
  double m_C3_1_tmp;
  double m_coriolisMatrix_tmp;
  double mb_C1_1_tmp;
  double mb_coriolisMatrix_tmp;
  double n_C1_1_tmp;
  double n_C1_1_tmp_tmp;
  double n_coriolisMatrix_tmp;
  double nb_C1_1_tmp;
  double nb_coriolisMatrix_tmp;
  double o_C1_1_tmp;
  double o_C1_1_tmp_tmp;
  double o_coriolisMatrix_tmp;
  double ob_C1_1_tmp;
  double ob_coriolisMatrix_tmp;
  double p_C1_1_tmp;
  double p_C1_1_tmp_tmp;
  double p_coriolisMatrix_tmp;
  double pb_C1_1_tmp;
  double pb_coriolisMatrix_tmp;
  double q_C1_1_tmp;
  double q_C1_1_tmp_tmp;
  double q_coriolisMatrix_tmp;
  double qb_C1_1_tmp;
  double qb_coriolisMatrix_tmp;
  double r_C1_1_tmp;
  double r_coriolisMatrix_tmp;
  double rb_coriolisMatrix_tmp;
  double s_C1_1_tmp;
  double s_coriolisMatrix_tmp;
  double sb_coriolisMatrix_tmp;
  double t_C1_1_tmp;
  double t_coriolisMatrix_tmp;
  double tb_coriolisMatrix_tmp;
  double u_C1_1_tmp;
  double u_coriolisMatrix_tmp;
  double ub_coriolisMatrix_tmp;
  double v_C1_1_tmp;
  double v_coriolisMatrix_tmp;
  double vb_coriolisMatrix_tmp;
  double w_C1_1_tmp;
  double w_coriolisMatrix_tmp;
  double x_C1_1_tmp;
  double x_coriolisMatrix_tmp;
  double y_C1_1_tmp;
  double y_coriolisMatrix_tmp;
  C1_1_tmp_tmp = std::sin(2.0 * q[1]);
  b_C1_1_tmp_tmp = std::sin(q[2]);
  C1_1_tmp_tmp_tmp = std::sin(q[3]);
  c_C1_1_tmp_tmp = std::sin(2.0 * q[3]);
  b_C1_1_tmp_tmp_tmp = std::sin(q[4]);
  c_C1_1_tmp_tmp_tmp = std::sin(2.0 * q[4]);
  d_C1_1_tmp_tmp = q[2] - q[3];
  C1_1_tmp = std::sin(d_C1_1_tmp_tmp);
  b_C1_1_tmp = std::sin(q[2] - q[4]);
  e_C1_1_tmp_tmp = 2.0 * q[1] - q[2];
  f_C1_1_tmp_tmp = e_C1_1_tmp_tmp + q[3];
  c_C1_1_tmp = std::sin(f_C1_1_tmp_tmp);
  g_C1_1_tmp_tmp = 2.0 * q[2] - 2.0 * q[1];
  h_C1_1_tmp_tmp = g_C1_1_tmp_tmp + q[3];
  d_C1_1_tmp = std::sin(h_C1_1_tmp_tmp);
  e_C1_1_tmp = std::sin(e_C1_1_tmp_tmp + q[4]);
  i_C1_1_tmp_tmp = 2.0 * q[1] - 2.0 * q[2];
  j_C1_1_tmp_tmp = i_C1_1_tmp_tmp + q[3];
  f_C1_1_tmp = std::sin(j_C1_1_tmp_tmp);
  g_C1_1_tmp = std::sin(g_C1_1_tmp_tmp + q[4]);
  h_C1_1_tmp = std::sin(i_C1_1_tmp_tmp + q[4]);
  i_C1_1_tmp = std::sin(f_C1_1_tmp_tmp - q[4]);
  j_C1_1_tmp = std::sin((e_C1_1_tmp_tmp - q[3]) + q[4]);
  k_C1_1_tmp = std::sin(j_C1_1_tmp_tmp - q[4]);
  k_C1_1_tmp_tmp = i_C1_1_tmp_tmp - q[3];
  l_C1_1_tmp = std::sin(k_C1_1_tmp_tmp + q[4]);
  m_C1_1_tmp = std::sin(h_C1_1_tmp_tmp + 2.0 * q[4]);
  l_C1_1_tmp_tmp = g_C1_1_tmp_tmp + 2.0 * q[3];
  n_C1_1_tmp = std::sin(l_C1_1_tmp_tmp + q[4]);
  o_C1_1_tmp = std::sin(j_C1_1_tmp_tmp - 2.0 * q[4]);
  p_C1_1_tmp = std::sin(j_C1_1_tmp_tmp + 2.0 * q[4]);
  m_C1_1_tmp_tmp = i_C1_1_tmp_tmp - 2.0 * q[3];
  q_C1_1_tmp = std::sin(m_C1_1_tmp_tmp + q[4]);
  n_C1_1_tmp_tmp = i_C1_1_tmp_tmp + 2.0 * q[3];
  r_C1_1_tmp = std::sin(n_C1_1_tmp_tmp + q[4]);
  o_C1_1_tmp_tmp = q[2] + q[3];
  s_C1_1_tmp = std::sin(o_C1_1_tmp_tmp);
  t_C1_1_tmp = std::sin(q[2] + q[4]);
  p_C1_1_tmp_tmp = q[2] - 2.0 * q[1];
  q_C1_1_tmp_tmp = p_C1_1_tmp_tmp + q[3];
  u_C1_1_tmp = std::sin(q_C1_1_tmp_tmp);
  v_C1_1_tmp = std::sin(p_C1_1_tmp_tmp + q[4]);
  w_C1_1_tmp = std::sin(o_C1_1_tmp_tmp - q[4]);
  x_C1_1_tmp = std::sin(d_C1_1_tmp_tmp + q[4]);
  y_C1_1_tmp = std::sin((q[3] - q[2]) + q[4]);
  ab_C1_1_tmp = std::sin(f_C1_1_tmp_tmp + q[4]);
  bb_C1_1_tmp = std::sin(h_C1_1_tmp_tmp + q[4]);
  cb_C1_1_tmp = std::sin(j_C1_1_tmp_tmp + q[4]);
  db_C1_1_tmp = std::sin(e_C1_1_tmp_tmp);
  eb_C1_1_tmp = std::sin(i_C1_1_tmp_tmp);
  fb_C1_1_tmp = std::sin(l_C1_1_tmp_tmp);
  gb_C1_1_tmp = std::sin(n_C1_1_tmp_tmp);
  hb_C1_1_tmp = std::sin(g_C1_1_tmp_tmp + 2.0 * q[4]);
  ib_C1_1_tmp = std::sin(i_C1_1_tmp_tmp + 2.0 * q[4]);
  jb_C1_1_tmp = std::sin(k_C1_1_tmp_tmp + 2.0 * q[4]);
  kb_C1_1_tmp = std::sin(n_C1_1_tmp_tmp - q[4]);
  lb_C1_1_tmp = std::sin(l_C1_1_tmp_tmp + 2.0 * q[4]);
  mb_C1_1_tmp = std::sin(m_C1_1_tmp_tmp + 2.0 * q[4]);
  nb_C1_1_tmp = std::sin(n_C1_1_tmp_tmp - 2.0 * q[4]);
  ob_C1_1_tmp = std::sin(n_C1_1_tmp_tmp + 2.0 * q[4]);
  pb_C1_1_tmp = std::sin(o_C1_1_tmp_tmp + q[4]);
  qb_C1_1_tmp = std::sin(q_C1_1_tmp_tmp + q[4]);
  C1_2_tmp_tmp = std::cos(q[2]);
  b_C1_2_tmp_tmp = std::sin(q[1]);
  c_C1_2_tmp_tmp = std::cos(q[1]);
  C1_2_tmp = std::cos(2.0 * q[1]);
  d_C1_2_tmp_tmp = std::sin(2.0 * q[2]);
  e_C1_2_tmp_tmp = std::cos(2.0 * q[2]);
  C1_2_tmp_tmp_tmp = std::cos(2.0 * q[3]);
  b_C1_2_tmp_tmp_tmp = std::cos(2.0 * q[4]);
  c_C1_2_tmp_tmp_tmp = std::cos(q[3]);
  d_C1_2_tmp_tmp_tmp = std::cos(q[4]);
  C1_6_tmp_tmp = q[1] - q[2];
  C1_6_tmp = std::sin(C1_6_tmp_tmp);
  d_C1_1_tmp_tmp = C1_6_tmp_tmp + q[3];
  b_C1_6_tmp = std::sin(d_C1_1_tmp_tmp);
  b_C1_6_tmp_tmp = q[2] - q[1];
  h_C1_1_tmp_tmp = b_C1_6_tmp_tmp + q[3];
  c_C1_6_tmp = std::sin(h_C1_1_tmp_tmp);
  d_C1_6_tmp = std::sin(C1_6_tmp_tmp + q[4]);
  e_C1_6_tmp = std::sin(b_C1_6_tmp_tmp + q[4]);
  f_C1_6_tmp = std::sin(d_C1_1_tmp_tmp - q[4]);
  p_C1_1_tmp_tmp = C1_6_tmp_tmp - q[3];
  g_C1_6_tmp = std::sin(p_C1_1_tmp_tmp + q[4]);
  h_C1_6_tmp = std::sin(d_C1_1_tmp_tmp + q[4]);
  i_C1_6_tmp = std::sin(h_C1_1_tmp_tmp + q[4]);
  C2_6_tmp = std::cos(C1_6_tmp_tmp);
  f_C1_1_tmp_tmp = C1_6_tmp_tmp + 2.0 * q[3];
  C3_1_tmp = std::sin(f_C1_1_tmp_tmp);
  j_C1_1_tmp_tmp = b_C1_6_tmp_tmp + 2.0 * q[3];
  b_C3_1_tmp = std::sin(j_C1_1_tmp_tmp);
  c_C3_1_tmp = std::sin(p_C1_1_tmp_tmp + 2.0 * q[4]);
  p_C1_1_tmp_tmp = C1_6_tmp_tmp - 2.0 * q[3];
  d_C3_1_tmp = std::sin(p_C1_1_tmp_tmp + 2.0 * q[4]);
  e_C3_1_tmp = std::sin(f_C1_1_tmp_tmp - 2.0 * q[4]);
  f_C3_1_tmp = std::sin(f_C1_1_tmp_tmp + 2.0 * q[4]);
  g_C3_1_tmp = std::sin(j_C1_1_tmp_tmp + 2.0 * q[4]);
  h_C3_1_tmp = std::sin(f_C1_1_tmp_tmp - q[4]);
  i_C3_1_tmp = std::sin(d_C1_1_tmp_tmp - 2.0 * q[4]);
  j_C3_1_tmp = std::sin(d_C1_1_tmp_tmp + 2.0 * q[4]);
  k_C3_1_tmp = std::sin(f_C1_1_tmp_tmp + q[4]);
  l_C3_1_tmp = std::sin(h_C1_1_tmp_tmp + 2.0 * q[4]);
  m_C3_1_tmp = std::sin(j_C1_1_tmp_tmp + q[4]);
  h_C1_1_tmp_tmp = std::sin(p_C1_1_tmp_tmp + q[4]);
  d = dq[2] + dq[3];
  d1 = dq[2] - 2.0 * dq[1];
  coriolisMatrix_tmp = dq[2] - dq[3];
  coriolisMatrix_tmp_tmp = 2.0 * dq[1] - dq[2];
  b_coriolisMatrix_tmp = coriolisMatrix_tmp_tmp + dq[3];
  j_C1_1_tmp_tmp = 2.0 * dq[2] - 2.0 * dq[1];
  c_coriolisMatrix_tmp = j_C1_1_tmp_tmp + dq[3];
  b_coriolisMatrix_tmp_tmp = 2.0 * dq[1] - 2.0 * dq[2];
  d_coriolisMatrix_tmp = b_coriolisMatrix_tmp_tmp + dq[3];
  e_coriolisMatrix_tmp = j_C1_1_tmp_tmp + 2.0 * dq[3];
  f_coriolisMatrix_tmp = b_coriolisMatrix_tmp_tmp + 2.0 * dq[3];
  g_coriolisMatrix_tmp = b_coriolisMatrix_tmp_tmp - dq[3];
  h_coriolisMatrix_tmp = b_coriolisMatrix_tmp_tmp - 2.0 * dq[3];
  i_coriolisMatrix_tmp = d1 + dq[3];
    coriolisMatrix[0] = ((((((((((((((((((((((((((((((((((((((((((((((((((((0.0009968 * qb_C1_1_tmp * (i_coriolisMatrix_tmp + dq[4]) - 0.0009968 * pb_C1_1_tmp * (d + dq[4])) + 0.0042912 * s_C1_1_tmp * d) + 0.001151 * t_C1_1_tmp * (dq[2] + dq[4])) - 9.6245E-5 * std::sin(q[3] + q[4]) * (dq[3] + dq[4])) + 0.074028 * dq[1] * C1_1_tmp_tmp) - 0.0010525 * dq[3] * c_C1_1_tmp_tmp) + 0.00016499 * dq[4] * c_C1_1_tmp_tmp_tmp) - 0.0042912 * u_C1_1_tmp * i_coriolisMatrix_tmp) - 0.001151 * v_C1_1_tmp * (d1 + dq[4])) + 0.00033227 * w_C1_1_tmp * (d - dq[4])) - 0.00033227 * x_C1_1_tmp * (coriolisMatrix_tmp + dq[4])) + 0.0009968 * y_C1_1_tmp * ((dq[3] - dq[2]) + dq[4])) - 0.0009968 * ab_C1_1_tmp * (b_coriolisMatrix_tmp + dq[4])) - 0.00057005 * bb_C1_1_tmp * (c_coriolisMatrix_tmp + dq[4])) + 0.00057005 * cb_C1_1_tmp * (d_coriolisMatrix_tmp + dq[4])) - 0.0042912 * C1_1_tmp * coriolisMatrix_tmp) + 0.001151 * b_C1_1_tmp * (dq[2] - dq[4])) + 3.2082E-5 * std::sin(q[3] - q[4]) * (dq[3] - dq[4])) + 9.067E-5 * std::sin(2.0 * q[3] + q[4]) * (2.0 * dq[3] + dq[4])) + 0.0042912 * c_C1_1_tmp * b_coriolisMatrix_tmp) + 0.0025555 * d_C1_1_tmp * c_coriolisMatrix_tmp) - 0.001151 * e_C1_1_tmp * (coriolisMatrix_tmp_tmp + dq[4])) - 0.0025555 * f_C1_1_tmp * d_coriolisMatrix_tmp) + 0.0007489 * g_C1_1_tmp * (j_C1_1_tmp_tmp + dq[4])) + 0.0007489 * h_C1_1_tmp * (b_coriolisMatrix_tmp_tmp + dq[4])) + 0.00033227 * i_C1_1_tmp * (b_coriolisMatrix_tmp - dq[4])) - 0.00033227 * j_C1_1_tmp * ((coriolisMatrix_tmp_tmp - dq[3]) + dq[4])) - 0.00025981 * k_C1_1_tmp * (d_coriolisMatrix_tmp - dq[4])) + 0.00025981 * l_C1_1_tmp * (g_coriolisMatrix_tmp + dq[4])) - 0.00014289 * m_C1_1_tmp * (c_coriolisMatrix_tmp + 2.0 * dq[4])) - 4.5334E-5 * n_C1_1_tmp * (e_coriolisMatrix_tmp + dq[4])) - 4.7629E-5 * o_C1_1_tmp * (d_coriolisMatrix_tmp - 2.0 * dq[4])) + 0.00014289 * p_C1_1_tmp * (d_coriolisMatrix_tmp + 2.0 * dq[4])) + 1.5111E-5 * q_C1_1_tmp * (h_coriolisMatrix_tmp + dq[4])) - 4.5334E-5 * r_C1_1_tmp * (f_coriolisMatrix_tmp + dq[4])) + 0.030397 * dq[2] * b_C1_1_tmp_tmp) + 0.00041432 * dq[3] * C1_1_tmp_tmp_tmp) - 0.001256 * dq[4] * b_C1_1_tmp_tmp_tmp) - 0.030397 * db_C1_1_tmp * coriolisMatrix_tmp_tmp) + 0.009146 * eb_C1_1_tmp * b_coriolisMatrix_tmp_tmp) - 3.0222E-5 * std::sin(2.0 * q[3] - q[4]) * (2.0 * dq[3] - dq[4])) - 1.3749E-5 * std::sin(2.0 * q[3] - 2.0 * q[4]) * (2.0 * dq[3] - 2.0 * dq[4])) - 0.00012375 * std::sin(2.0 * q[3] + 2.0 * q[4]) * (2.0 * dq[3] + 2.0 * dq[4])) + 0.00026314 * fb_C1_1_tmp * e_coriolisMatrix_tmp) + 0.00026314 * gb_C1_1_tmp * f_coriolisMatrix_tmp) + 0.00012375 * hb_C1_1_tmp * (j_C1_1_tmp_tmp + 2.0 * dq[4])) + 0.00012375 * ib_C1_1_tmp * (b_coriolisMatrix_tmp_tmp + 2.0 * dq[4])) + 4.7629E-5 * jb_C1_1_tmp * (g_coriolisMatrix_tmp + 2.0 * dq[4])) + 1.5111E-5 * kb_C1_1_tmp * (f_coriolisMatrix_tmp - dq[4])) + 6.187E-5 * lb_C1_1_tmp * (e_coriolisMatrix_tmp + 2.0 * dq[4])) + 6.8745E-6 * mb_C1_1_tmp * (h_coriolisMatrix_tmp + 2.0 * dq[4])) + 6.8745E-6 * nb_C1_1_tmp * (f_coriolisMatrix_tmp - 2.0 * dq[4])) + 6.187E-5 * ob_C1_1_tmp * (f_coriolisMatrix_tmp + 2.0 * dq[4]);
    d = 0.002105 * dq[2];
    d1 = 0.00043998 * dq[1] * C1_2_tmp_tmp_tmp;
    d2 = 0.00054998 * dq[1] * b_C1_2_tmp_tmp_tmp;
    coriolisMatrix_tmp_tmp = 0.00076206 * dq[4] * b_C1_2_tmp_tmp_tmp;
    j_C1_1_tmp_tmp = 0.00038102 * dq[4] * c_C1_1_tmp_tmp_tmp;
    b_coriolisMatrix_tmp_tmp = 0.00076206 * dq[1] * c_C1_1_tmp_tmp_tmp;
    c_coriolisMatrix_tmp_tmp = 0.00076206 * dq[2] * c_C1_1_tmp_tmp_tmp;
    coriolisMatrix_tmp =
        0.002105 * dq[1] * c_C1_1_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp;
    b_coriolisMatrix_tmp =
        d1 * c_C1_1_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp;
    c_coriolisMatrix_tmp =
        d2 * std::sin(2.0 * q[3]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp;
    d_coriolisMatrix_tmp = 0.00043998 * dq[2] * C1_2_tmp_tmp_tmp *
                           std::sin(2.0 * q[4]) * b_C1_2_tmp_tmp *
                           b_C1_1_tmp_tmp;
    e_coriolisMatrix_tmp = 0.00054998 * dq[2] * std::cos(2.0 * q[4]) *
                           c_C1_1_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp;
    f_coriolisMatrix_tmp = 0.0001351 * dq[5] * c_C1_2_tmp_tmp;
    g_coriolisMatrix_tmp = 0.018292 * dq[0] * e_C1_2_tmp_tmp * C1_1_tmp_tmp;
    coriolisMatrix[6] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0.074028 * dq[0] * C1_1_tmp_tmp + 0.0034131 * dq[1] * b_C1_2_tmp_tmp) + 0.060795 * dq[0] * C1_2_tmp * b_C1_1_tmp_tmp) - 0.060795 * dq[0] * C1_1_tmp_tmp * C1_2_tmp_tmp) + 0.0010437 * dq[1] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.0010437 * dq[1] * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - 0.017165 * dq[1] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0010437 * dq[2] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.0010437 * dq[2] * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.0034398 * dq[3] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.0034398 * dq[3] * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.0006317 * dq[4] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.0006317 * dq[4] * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 7.8E-5 * dq[5] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 7.8E-5 * dq[5] * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - 0.018292 * dq[0] * C1_2_tmp * d_C1_2_tmp_tmp) + g_coriolisMatrix_tmp) + 0.017165 * dq[0] * C1_1_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - coriolisMatrix_tmp) + d * c_C1_1_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.0010525 * dq[0] * C1_2_tmp * C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp) + 0.0010525 * dq[0] * e_C1_2_tmp_tmp * C1_2_tmp_tmp_tmp * C1_1_tmp_tmp) - 0.00049498 * dq[0] * C1_2_tmp * b_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp) + 0.00049498 * dq[0] * e_C1_2_tmp_tmp * b_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp) + 0.0004144 * dq[1] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.010222 * dq[1] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.010222 * dq[1] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.00011113 * dq[1] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.00011113 * dq[1] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0004144 * dq[2] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.010222 * dq[2] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.010222 * dq[2] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.0026581 * dq[1] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00011113 * dq[2] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00011113 * dq[2] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0004144 * dq[3] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0004144 * dq[3] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00024178 * dq[3] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00024178 * dq[3] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.0010941 * dq[4] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00011114 * dq[4] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00024178 * dq[4] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00024178 * dq[4] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + f_coriolisMatrix_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.000234 * dq[5] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.000234 * dq[5] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.0004144 * dq[1] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0004144 * dq[2] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0053163 * dq[1] * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0010941 * dq[4] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00011114 * dq[4] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0001351 * dq[5] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.010222 * dq[0] * C1_2_tmp * e_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0029956 * dq[0] * C1_2_tmp * d_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp) + 0.0029956 * dq[0] * e_C1_2_tmp_tmp * C1_1_tmp_tmp * d_C1_2_tmp_tmp_tmp) - 0.010222 * dq[0] * C1_1_tmp_tmp * d_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.017165 * dq[0] * C1_2_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.004604 * dq[0] * C1_2_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.004604 * dq[0] * C1_1_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp) - 0.002105 * dq[1] * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp) + 0.002105 * dq[2] * std::sin(2.0 * q[3]) * c_C1_2_tmp_tmp * C1_2_tmp_tmp) + 0.002105 * dq[3] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.002105 * dq[3] * std::cos(2.0 * q[3]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - 0.00032998 * dq[3] * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.00032998 * dq[3] * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.00038102 * dq[0] * C1_2_tmp * e_C1_2_tmp_tmp * b_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00076206 * dq[0] * C1_2_tmp * e_C1_2_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp_tmp) + 0.00012089 * dq[0] * C1_2_tmp * C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp) - 0.00012089 * dq[0] * e_C1_2_tmp_tmp * C1_2_tmp_tmp_tmp * C1_1_tmp_tmp * d_C1_2_tmp_tmp_tmp) - 0.00024178 * dq[0] * C1_2_tmp * d_C1_2_tmp_tmp * c_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00024178 * dq[0] * e_C1_2_tmp_tmp * C1_1_tmp_tmp * c_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00038102 * dq[0] * b_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp * d_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00076206 * dq[0] * C1_1_tmp_tmp * d_C1_2_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp_tmp) - 0.00012839 * dq[1] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 6.421E-5 * dq[1] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0012409 * dq[1] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.0012409 * dq[1] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.00012839 * dq[2] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 6.421E-5 * dq[2] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0012409 * dq[2] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0012409 * dq[2] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 6.421E-5 * dq[3] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 6.421E-5 * dq[3] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.00041878 * dq[4] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 1.5E-8 * dq[4] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00012839 * dq[4] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.00012839 * dq[4] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0002702 * dq[5] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0001351 * dq[5] * std::cos(q[1]) * std::cos(q[2]) * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0033193 * dq[1] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0033193 * dq[1] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00012839 * dq[1] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 6.421E-5 * dq[1] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0033193 * dq[2] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0033193 * dq[2] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00012839 * dq[2] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 6.421E-5 * dq[2] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00012839 * dq[3] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00012839 * dq[3] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 6.4215E-5 * dq[4] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 6.4215E-5 * dq[4] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00041878 * dq[4] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 1.5E-8 * dq[4] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0002702 * dq[5] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0001351 * dq[5] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0033194 * dq[0] * C1_2_tmp * e_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.001241 * dq[0] * C1_2_tmp * e_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - d1 * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp) - d2 * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp) + 0.00043998 * dq[2] * C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp) + 0.00054998 * dq[2] * b_C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp) + 0.00054998 * dq[3] * C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.00054998 * dq[3] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.00043998 * dq[4] * C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.00043998 * dq[4] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.0033194 * dq[0] * C1_1_tmp_tmp * d_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.001241 * dq[0] * C1_1_tmp_tmp * d_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - b_coriolisMatrix_tmp) - c_coriolisMatrix_tmp) + d_coriolisMatrix_tmp) + e_coriolisMatrix_tmp) - 0.00043998 * dq[3] * c_C1_1_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.00043998 * dq[3] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - 0.00054998 * dq[4] * c_C1_1_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.00054998 * dq[4] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - 0.00027498 * dq[0] * C1_2_tmp * C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp) + 0.00027498 * dq[0] * e_C1_2_tmp_tmp * C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp) + 0.00021998 * dq[0] * C1_2_tmp * d_C1_2_tmp_tmp * c_C1_1_tmp_tmp * c_C1_1_tmp_tmp_tmp) - 0.00021998 * dq[0] * e_C1_2_tmp_tmp * C1_1_tmp_tmp * c_C1_1_tmp_tmp * c_C1_1_tmp_tmp_tmp) - 0.0053163 * dq[0] * C1_2_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0026581 * dq[0] * C1_2_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00048357 * dq[1] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00038102 * dq[1] * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.00038102 * dq[1] * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.00024179 * dq[1] * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp) - 0.00048357 * dq[2] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00038102 * dq[2] * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00038102 * dq[2] * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00024179 * dq[2] * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp) - 0.00024179 * dq[3] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00024179 * dq[3] * std::cos(2.0 * q[3]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00024178 * dq[4] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00024178 * dq[4] * std::cos(2.0 * q[3]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - coriolisMatrix_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - j_C1_1_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp) - 0.0053163 * dq[0] * C1_1_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0026581 * dq[0] * C1_1_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00048357 * dq[1] * std::cos(2.0 * q[3]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00024179 * dq[1] * std::sin(2.0 * q[3]) * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - b_coriolisMatrix_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + b_coriolisMatrix_tmp_tmp * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00048357 * dq[2] * std::cos(2.0 * q[3]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00024179 * dq[2] * std::sin(2.0 * q[3]) * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + c_coriolisMatrix_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - c_coriolisMatrix_tmp_tmp * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00048357 * dq[3] * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00048357 * dq[3] * std::sin(2.0 * q[3]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - coriolisMatrix_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00012089 * dq[4] * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00012089 * dq[4] * std::sin(2.0 * q[3]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - j_C1_1_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp;
    d2 = 0.0034398 * dq[3] * std::cos(q[1]) * std::sin(q[2]);
    d3 = 0.0034398 * dq[3] * std::cos(q[2]) * std::sin(q[1]);
    d4 = 0.0006317 * dq[4] * std::cos(q[1]) * std::sin(q[2]);
    e_C1_1_tmp_tmp = 0.0006317 * dq[4] * std::cos(q[2]) * std::sin(q[1]);
    g_C1_1_tmp_tmp = 0.0010525 * dq[0] * std::cos(2.0 * q[2]) *
                     std::cos(2.0 * q[3]) * std::sin(2.0 * q[1]);
    i_C1_1_tmp_tmp = 0.00049498 * dq[0] * std::cos(2.0 * q[1]) *
                     std::cos(2.0 * q[4]) * std::sin(2.0 * q[2]);
    k_C1_1_tmp_tmp = 0.00049498 * dq[0] * std::cos(2.0 * q[2]) *
                     std::cos(2.0 * q[4]) * std::sin(2.0 * q[1]);
    l_C1_1_tmp_tmp =
        0.00024178 * dq[3] * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2]);
    m_C1_1_tmp_tmp =
        0.00024178 * dq[3] * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1]);
    n_C1_1_tmp_tmp =
        0.0010941 * dq[4] * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[3]);
    o_C1_1_tmp_tmp =
        0.00024178 * dq[4] * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2]);
    q_C1_1_tmp_tmp =
        0.00024178 * dq[4] * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1]);
    j_coriolisMatrix_tmp =
        0.0001351 * dq[5] * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[3]);
    k_coriolisMatrix_tmp =
        0.000234 * dq[5] * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2]);
    l_coriolisMatrix_tmp =
        0.000234 * dq[5] * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1]);
    m_coriolisMatrix_tmp =
        0.0010941 * dq[4] * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3]);
    n_coriolisMatrix_tmp =
        0.0001351 * dq[5] * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3]);
    o_coriolisMatrix_tmp = 0.010222 * dq[0] * std::cos(2.0 * q[1]) *
                           std::cos(2.0 * q[2]) * std::sin(q[3]);
    p_coriolisMatrix_tmp = 0.0029956 * dq[0] * std::cos(2.0 * q[1]) *
                           std::sin(2.0 * q[2]) * std::cos(q[4]);
    q_coriolisMatrix_tmp = 0.0029956 * dq[0] * std::cos(2.0 * q[2]) *
                           std::sin(2.0 * q[1]) * std::cos(q[4]);
    r_coriolisMatrix_tmp = 0.010222 * dq[0] * std::sin(2.0 * q[1]) *
                           std::sin(2.0 * q[2]) * std::sin(q[3]);
    s_coriolisMatrix_tmp = 0.0002702 * dq[5] * std::cos(q[1]) * std::cos(q[2]) *
                           std::cos(q[3]) * std::sin(q[4]);
    t_coriolisMatrix_tmp = 0.0001351 * dq[5] * std::cos(q[1]) * std::cos(q[2]) *
                           std::cos(q[4]) * std::sin(q[3]);
    u_coriolisMatrix_tmp = 0.0002702 * dq[5] * std::cos(q[3]) * std::sin(q[1]) *
                           std::sin(q[2]) * std::sin(q[4]);
    v_coriolisMatrix_tmp = 0.0001351 * dq[5] * std::cos(q[4]) * std::sin(q[1]) *
                           std::sin(q[2]) * std::sin(q[3]);
    w_coriolisMatrix_tmp = 0.0033194 * dq[0] * std::cos(2.0 * q[1]) *
                           std::cos(2.0 * q[2]) * std::cos(q[3]) *
                           std::sin(q[4]);
    x_coriolisMatrix_tmp = 0.001241 * dq[0] * std::cos(2.0 * q[1]) *
                           std::cos(2.0 * q[2]) * std::cos(q[4]) *
                           std::sin(q[3]);
    h_coriolisMatrix_tmp = 0.0026581 * dq[0] * std::sin(2.0 * q[1]);
    i_coriolisMatrix_tmp = 0.00027498 * dq[0] * std::cos(2.0 * q[2]) *
                           std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) *
                           std::sin(2.0 * q[1]);
    y_coriolisMatrix_tmp = 0.00021998 * dq[0] * std::cos(2.0 * q[1]) *
                           std::sin(2.0 * q[2]) * std::sin(2.0 * q[3]) *
                           std::sin(2.0 * q[4]);
    ab_coriolisMatrix_tmp = 0.00021998 * dq[0] * std::cos(2.0 * q[2]) *
                            std::sin(2.0 * q[1]) * std::sin(2.0 * q[3]) *
                            std::sin(2.0 * q[4]);
    bb_coriolisMatrix_tmp = 0.00024178 * dq[4] * std::cos(2.0 * q[3]) *
                            std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2]);
    cb_coriolisMatrix_tmp = 0.00024178 * dq[4] * std::cos(2.0 * q[3]) *
                            std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1]);
    db_coriolisMatrix_tmp = 0.00076206 * dq[4] * std::cos(2.0 * q[4]) *
                            std::cos(q[1]) * std::cos(q[2]) * std::sin(q[3]);
    eb_coriolisMatrix_tmp = 0.00076206 * dq[4] * std::cos(2.0 * q[4]) *
                            std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3]);
    fb_coriolisMatrix_tmp = 0.00012089 * dq[4] * std::sin(2.0 * q[3]) *
                            std::cos(q[1]) * std::sin(q[2]) * std::sin(q[4]);
    gb_coriolisMatrix_tmp = 0.00012089 * dq[4] * std::sin(2.0 * q[3]) *
                            std::cos(q[2]) * std::sin(q[1]) * std::sin(q[4]);
    hb_coriolisMatrix_tmp = 7.8E-5 * dq[5] * std::cos(q[1]) * std::sin(q[2]);
    ib_coriolisMatrix_tmp = 7.8E-5 * dq[5] * std::cos(q[2]) * b_C1_2_tmp_tmp;
    jb_coriolisMatrix_tmp =
        0.018292 * dq[0] * std::cos(2.0 * q[1]) * std::sin(2.0 * q[2]);
    kb_coriolisMatrix_tmp = 0.00032998 * dq[3] * std::cos(2.0 * q[4]) *
                            std::cos(q[1]) * std::sin(q[2]);
    lb_coriolisMatrix_tmp = 0.00043998 * dq[4] * std::cos(2.0 * q[3]) *
                            std::cos(2.0 * q[4]) * std::cos(q[1]) *
                            b_C1_1_tmp_tmp;
    mb_coriolisMatrix_tmp = 0.0033194 * dq[0] * std::sin(2.0 * q[1]) *
                            std::sin(2.0 * q[2]) * c_C1_2_tmp_tmp_tmp *
                            b_C1_1_tmp_tmp_tmp;
    nb_coriolisMatrix_tmp = 0.00027498 * dq[0] * std::cos(2.0 * q[1]) *
                            std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) *
                            std::sin(2.0 * q[2]);
    coriolisMatrix[12] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0.030397 * dq[0] * b_C1_1_tmp_tmp - 0.030397 * dq[0] * C1_2_tmp * b_C1_1_tmp_tmp) + 0.030397 * dq[0] * C1_1_tmp_tmp * C1_2_tmp_tmp) - 0.0010437 * dq[1] * std::cos(q[1]) * std::sin(q[2])) + 0.0010437 * dq[1] * std::cos(q[2]) * std::sin(q[1])) + 0.0085823 * dq[0] * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0010437 * dq[2] * std::cos(q[1]) * std::sin(q[2])) - 0.0010437 * dq[2] * std::cos(q[2]) * std::sin(q[1])) + 0.002302 * dq[0] * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - d2) + d3) - d4) + e_C1_1_tmp_tmp) - hb_coriolisMatrix_tmp) + ib_coriolisMatrix_tmp) + jb_coriolisMatrix_tmp) - 0.018292 * dq[0] * e_C1_2_tmp_tmp * std::sin(2.0 * q[1])) - 0.0085823 * dq[0] * C1_1_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + coriolisMatrix_tmp) - d * std::sin(2.0 * q[3]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.0010525 * dq[0] * std::cos(2.0 * q[1]) * C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp) - g_C1_1_tmp_tmp) + i_C1_1_tmp_tmp) - k_C1_1_tmp_tmp) - 0.0004144 * dq[1] * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[3])) + 0.010222 * dq[1] * std::cos(q[1]) * std::cos(q[3]) * std::sin(q[2])) - 0.010222 * dq[1] * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[1])) - 0.00011113 * dq[1] * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2])) + 0.00011113 * dq[1] * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1])) + 0.0004144 * dq[2] * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[3])) - 0.010222 * dq[2] * std::cos(q[1]) * std::cos(q[3]) * std::sin(q[2])) + 0.010222 * dq[2] * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[1])) - 0.0026581 * dq[0] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0013291 * dq[0] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00011113 * dq[2] * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2])) - 0.00011113 * dq[2] * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1])) + 0.0004144 * dq[3] * std::cos(q[1]) * std::cos(q[3]) * std::sin(q[2])) - 0.0004144 * dq[3] * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[1])) + l_C1_1_tmp_tmp) - m_C1_1_tmp_tmp) - n_C1_1_tmp_tmp) + 0.00011114 * dq[4] * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[4])) + o_C1_1_tmp_tmp) - q_C1_1_tmp_tmp) - j_coriolisMatrix_tmp) - k_coriolisMatrix_tmp) + l_coriolisMatrix_tmp) - 0.0004144 * dq[1] * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3])) + 0.0004144 * dq[2] * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3])) - m_coriolisMatrix_tmp) + 0.00011114 * dq[4] * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[4])) - n_coriolisMatrix_tmp) + o_coriolisMatrix_tmp) + p_coriolisMatrix_tmp) - q_coriolisMatrix_tmp) + r_coriolisMatrix_tmp) - 0.0085823 * dq[0] * C1_2_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.002302 * dq[0] * C1_2_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.002302 * dq[0] * C1_1_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp) + 0.002105 * dq[1] * std::sin(2.0 * q[3]) * std::cos(q[1]) * std::cos(q[2])) - 0.002105 * dq[2] * std::sin(2.0 * q[3]) * std::cos(q[1]) * std::cos(q[2])) - 0.002105 * dq[3] * std::cos(2.0 * q[3]) * std::cos(q[1]) * std::sin(q[2])) + 0.002105 * dq[3] * std::cos(2.0 * q[3]) * std::cos(q[2]) * std::sin(q[1])) + kb_coriolisMatrix_tmp) - 0.00032998 * dq[3] * std::cos(2.0 * q[4]) * std::cos(q[2]) * b_C1_2_tmp_tmp) - 0.00038102 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * std::cos(2.0 * q[4]) * C1_1_tmp_tmp_tmp) - 0.00076206 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * std::sin(2.0 * q[4]) * c_C1_2_tmp_tmp_tmp) - 0.00012089 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[3]) * std::sin(2.0 * q[2]) * d_C1_2_tmp_tmp_tmp) + 0.00012089 * dq[0] * std::cos(2.0 * q[2]) * std::cos(2.0 * q[3]) * std::sin(2.0 * q[1]) * d_C1_2_tmp_tmp_tmp) + 0.00024178 * dq[0] * std::cos(2.0 * q[1]) * std::sin(2.0 * q[2]) * c_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00024178 * dq[0] * std::cos(2.0 * q[2]) * std::sin(2.0 * q[1]) * c_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00038102 * dq[0] * std::cos(2.0 * q[4]) * C1_1_tmp_tmp * d_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00076206 * dq[0] * std::sin(2.0 * q[1]) * d_C1_2_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp_tmp) + 0.00012839 * dq[1] * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[4])) + 6.421E-5 * dq[1] * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[3])) - 0.0012409 * dq[1] * std::cos(q[1]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[2])) + 0.0012409 * dq[1] * std::cos(q[2]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[1])) - 0.00012839 * dq[2] * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[4])) - 6.421E-5 * dq[2] * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[3])) + 0.0012409 * dq[2] * std::cos(q[1]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[2])) - 0.0012409 * dq[2] * std::cos(q[2]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[1])) - 6.421E-5 * dq[3] * std::cos(q[1]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[2])) + 6.421E-5 * dq[3] * std::cos(q[2]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[1])) - 0.00041878 * dq[4] * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[4])) - 1.5E-8 * dq[4] * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[3])) - 0.00012839 * dq[4] * std::cos(q[1]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[2])) + 0.00012839 * dq[4] * std::cos(q[2]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[1])) + s_coriolisMatrix_tmp) + t_coriolisMatrix_tmp) + 0.0033193 * dq[1] * std::cos(q[1]) * std::sin(q[2]) * std::sin(q[3]) * std::sin(q[4])) - 0.0033193 * dq[1] * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[3]) * std::sin(q[4])) + 0.00012839 * dq[1] * std::cos(q[3]) * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[4])) + 6.421E-5 * dq[1] * std::cos(q[4]) * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3])) - 0.0033193 * dq[2] * std::cos(q[1]) * std::sin(q[2]) * std::sin(q[3]) * std::sin(q[4])) + 0.0033193 * dq[2] * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[3]) * std::sin(q[4])) - 0.00012839 * dq[2] * std::cos(q[3]) * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[4])) - 6.421E-5 * dq[2] * std::cos(q[4]) * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3])) + 0.00012839 * dq[3] * std::cos(q[1]) * std::sin(q[2]) * std::sin(q[3]) * std::sin(q[4])) - 0.00012839 * dq[3] * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[3]) * std::sin(q[4])) + 6.4215E-5 * dq[4] * std::cos(q[1]) * std::sin(q[2]) * std::sin(q[3]) * std::sin(q[4])) - 6.4215E-5 * dq[4] * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[3]) * std::sin(q[4])) - 0.00041878 * dq[4] * std::cos(q[3]) * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[4])) - 1.5E-8 * dq[4] * std::cos(q[4]) * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3])) + u_coriolisMatrix_tmp) + v_coriolisMatrix_tmp) - w_coriolisMatrix_tmp) - x_coriolisMatrix_tmp) + 0.00043998 * dq[1] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::cos(q[2])) + 0.00054998 * dq[1] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3]) * std::cos(q[1]) * std::cos(q[2])) - 0.00043998 * dq[2] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::cos(q[2])) - 0.00054998 * dq[2] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3]) * std::cos(q[1]) * std::cos(q[2])) - 0.00054998 * dq[3] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2])) + 0.00054998 * dq[3] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1])) - lb_coriolisMatrix_tmp) + 0.00043998 * dq[4] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * std::cos(q[2]) * b_C1_2_tmp_tmp) - mb_coriolisMatrix_tmp) - 0.001241 * dq[0] * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + b_coriolisMatrix_tmp) + c_coriolisMatrix_tmp) - d_coriolisMatrix_tmp) - e_coriolisMatrix_tmp) + 0.00043998 * dq[3] * std::sin(2.0 * q[3]) * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.00043998 * dq[3] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1])) + 0.00054998 * dq[4] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2])) - 0.00054998 * dq[4] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1])) + nb_coriolisMatrix_tmp) - i_coriolisMatrix_tmp) - y_coriolisMatrix_tmp) + ab_coriolisMatrix_tmp) + 0.0026581 * dq[0] * std::cos(2.0 * q[1]) * std::cos(q[2]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0013291 * dq[0] * C1_2_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00048357 * dq[1] * std::cos(2.0 * q[3]) * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[4])) - 0.00038102 * dq[1] * std::cos(2.0 * q[4]) * std::cos(q[1]) * std::cos(q[3]) * std::sin(q[2])) + 0.00038102 * dq[1] * std::cos(2.0 * q[4]) * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[1])) - 0.00024179 * dq[1] * std::sin(2.0 * q[3]) * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[4])) + 0.00048357 * dq[2] * std::cos(2.0 * q[3]) * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[4])) + 0.00038102 * dq[2] * std::cos(2.0 * q[4]) * std::cos(q[1]) * std::cos(q[3]) * std::sin(q[2])) - 0.00038102 * dq[2] * std::cos(2.0 * q[4]) * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[1])) + 0.00024179 * dq[2] * std::sin(2.0 * q[3]) * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[4])) + 0.00024179 * dq[3] * std::cos(2.0 * q[3]) * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2])) - 0.00024179 * dq[3] * std::cos(2.0 * q[3]) * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1])) + bb_coriolisMatrix_tmp) - cb_coriolisMatrix_tmp) + db_coriolisMatrix_tmp) + 0.00038102 * dq[4] * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[3])) + h_coriolisMatrix_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0013291 * dq[0] * C1_1_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00048357 * dq[1] * std::cos(2.0 * q[3]) * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[4])) - 0.00024179 * dq[1] * std::sin(2.0 * q[3]) * std::cos(q[4]) * std::sin(q[1]) * std::sin(q[2])) + 0.00076206 * dq[1] * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2]) * std::sin(q[3])) - 0.00076206 * dq[1] * std::sin(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[3])) + 0.00048357 * dq[2] * std::cos(2.0 * q[3]) * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[4])) + 0.00024179 * dq[2] * std::sin(2.0 * q[3]) * std::cos(q[4]) * std::sin(q[1]) * std::sin(q[2])) - 0.00076206 * dq[2] * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2]) * std::sin(q[3])) + 0.00076206 * dq[2] * std::sin(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[3])) - 0.00048357 * dq[3] * std::sin(2.0 * q[3]) * std::cos(q[1]) * std::sin(q[2]) * std::sin(q[4])) + 0.00048357 * dq[3] * std::sin(2.0 * q[3]) * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[4])) + eb_coriolisMatrix_tmp) - fb_coriolisMatrix_tmp) + gb_coriolisMatrix_tmp) + 0.00038102 * dq[4] * std::sin(2.0 * q[4]) * std::cos(q[3]) * std::sin(q[1]) * std::sin(q[2]);
    ob_coriolisMatrix_tmp = 0.00012839 * dq[1] * std::cos(q[1]);
    pb_coriolisMatrix_tmp = 0.00024178 * dq[0] * C1_2_tmp_tmp_tmp;
    p_C1_1_tmp_tmp = 0.0001351 * dq[5] * C1_2_tmp_tmp;
    d5 = p_C1_1_tmp_tmp * c_C1_2_tmp_tmp_tmp;
    d6 = 0.00032998 * dq[1] * b_C1_2_tmp_tmp_tmp;
    d_C1_1_tmp_tmp = 0.00012839 * dq[2] * std::cos(q[1]);
    d7 = 0.0016597 * dq[4];
    coriolisMatrix_tmp = 0.0002702 * dq[5] * std::cos(q[1]);
    b_coriolisMatrix_tmp = 0.0026581 * dq[0] * std::cos(2.0 * q[1]);
    c_coriolisMatrix_tmp = 0.0013291 * dq[0] * std::cos(2.0 * q[1]);
    d_coriolisMatrix_tmp_tmp = 0.00076206 * dq[3] * c_C1_1_tmp_tmp_tmp;
    d_coriolisMatrix_tmp = pb_coriolisMatrix_tmp * b_C1_1_tmp_tmp_tmp;
    e_coriolisMatrix_tmp = 0.0034398 * dq[1] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp;
    qb_coriolisMatrix_tmp = d5 * b_C1_2_tmp_tmp;
    rb_coriolisMatrix_tmp = d6 * C1_2_tmp_tmp * b_C1_2_tmp_tmp;
    sb_coriolisMatrix_tmp =
        0.002105 * dq[2] * std::cos(2.0 * q[3]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp;
    tb_coriolisMatrix_tmp = 0.00054998 * dq[1] * std::cos(2.0 * q[3]) *
                            std::cos(2.0 * q[4]) * C1_2_tmp_tmp *
                            b_C1_2_tmp_tmp;
    coriolisMatrix[18] = ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0.00041432 * dq[0] * C1_1_tmp_tmp_tmp - 0.0010525 * dq[0] * c_C1_1_tmp_tmp) + d_coriolisMatrix_tmp) + 0.00012089 * dq[0] * c_C1_1_tmp_tmp * d_C1_2_tmp_tmp_tmp) + e_coriolisMatrix_tmp) - 0.0034398 * dq[1] * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.0085823 * dq[0] * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.0034398 * dq[2] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.0034398 * dq[2] * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - 0.00012833 * dq[0] * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 6.4164E-5 * dq[0] * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.017165 * dq[3] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00021999 * dq[0] * C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp_tmp) - 0.00027499 * dq[0] * b_C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp) + 0.00065996 * dq[4] * c_C1_1_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.0010525 * dq[0] * std::cos(2.0 * q[1]) * e_C1_2_tmp_tmp * c_C1_1_tmp_tmp) + 0.0010525 * dq[0] * C1_1_tmp_tmp * d_C1_2_tmp_tmp * c_C1_1_tmp_tmp) - 0.0004144 * dq[1] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0004144 * dq[1] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00024178 * dq[1] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00024178 * dq[1] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.0004144 * dq[2] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.0004144 * dq[2] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0013291 * dq[0] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00024178 * dq[2] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.00024178 * dq[2] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.0004144 * dq[3] * std::cos(q[1]) * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.010222 * dq[3] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.010222 * dq[3] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0010941 * dq[4] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0010941 * dq[4] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0026581 * dq[3] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.00024178 * dq[4] * std::cos(q[1]) * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0001351 * dq[5] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + qb_coriolisMatrix_tmp) - 0.0053163 * dq[4] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.0026581 * dq[0] * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0004144 * dq[3] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0053163 * dq[3] * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00024178 * dq[4] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0026581 * dq[4] * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.005111 * dq[0] * C1_2_tmp * d_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp) - 0.005111 * dq[0] * e_C1_2_tmp_tmp * C1_1_tmp_tmp * c_C1_2_tmp_tmp_tmp) - 0.0085823 * dq[0] * std::cos(2.0 * q[1]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0085823 * dq[0] * std::sin(2.0 * q[1]) * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp) + 0.002105 * dq[1] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.002105 * dq[1] * std::cos(2.0 * q[3]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - d6 * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + rb_coriolisMatrix_tmp) - 0.002105 * dq[2] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + sb_coriolisMatrix_tmp) + 0.00032998 * dq[2] * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.00032998 * dq[2] * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.00065996 * dq[4] * std::sin(2.0 * q[4]) * c_C1_2_tmp_tmp * C1_2_tmp_tmp) - 0.00024178 * dq[0] * std::cos(2.0 * q[1]) * e_C1_2_tmp_tmp * C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00012089 * dq[0] * std::cos(2.0 * q[1]) * e_C1_2_tmp_tmp * c_C1_1_tmp_tmp * d_C1_2_tmp_tmp_tmp) - 0.00019051 * dq[0] * C1_2_tmp * b_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp) + 0.00019051 * dq[0] * e_C1_2_tmp_tmp * b_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp * c_C1_2_tmp_tmp_tmp) + 0.00038103 * dq[0] * C1_2_tmp * d_C1_2_tmp_tmp * c_C1_1_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00038103 * dq[0] * e_C1_2_tmp_tmp * C1_1_tmp_tmp * c_C1_1_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - pb_coriolisMatrix_tmp * C1_1_tmp_tmp * d_C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00012089 * dq[0] * C1_1_tmp_tmp * d_C1_2_tmp_tmp * c_C1_1_tmp_tmp * d_C1_2_tmp_tmp_tmp) + 6.421E-5 * dq[1] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 6.421E-5 * dq[1] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 6.421E-5 * dq[2] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 6.421E-5 * dq[2] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00012839 * dq[3] * std::cos(q[1]) * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 6.421E-5 * dq[3] * std::cos(q[1]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0012409 * dq[3] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0012409 * dq[3] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 6.4215E-5 * dq[4] * std::cos(q[1]) * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00012839 * dq[4] * std::cos(q[1]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0033193 * dq[4] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0033193 * dq[4] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.0001351 * dq[5] * std::cos(q[1]) * std::cos(q[3]) * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - d5 * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - ob_coriolisMatrix_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00012839 * dq[1] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + d_C1_1_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00012839 * dq[2] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0033193 * dq[3] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0033193 * dq[3] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00012839 * dq[3] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 6.421E-5 * dq[3] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + d7 * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - d7 * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 6.4215E-5 * dq[4] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00012839 * dq[4] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - coriolisMatrix_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0002702 * dq[5] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00062049 * dq[0] * C1_2_tmp * d_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp) + 0.00062049 * dq[0] * e_C1_2_tmp_tmp * C1_1_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp) + 0.00054998 * dq[1] * C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - tb_coriolisMatrix_tmp) - 0.00054998 * dq[2] * C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.00054998 * dq[2] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.0016597 * dq[0] * C1_2_tmp * d_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0016597 * dq[0] * e_C1_2_tmp_tmp * C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00043998 * dq[1] * c_C1_1_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.00043998 * dq[1] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.00043998 * dq[2] * c_C1_1_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.00043998 * dq[2] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.00021998 * dq[0] * std::cos(2.0 * q[1]) * e_C1_2_tmp_tmp * C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp_tmp) + 0.00027498 * dq[0] * std::cos(2.0 * q[1]) * e_C1_2_tmp_tmp * b_C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp) + 0.00021998 * dq[0] * C1_2_tmp_tmp_tmp * C1_1_tmp_tmp * d_C1_2_tmp_tmp * c_C1_1_tmp_tmp_tmp) + 0.00027498 * dq[0] * b_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp * d_C1_2_tmp_tmp * c_C1_1_tmp_tmp) + c_coriolisMatrix_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.0013291 * dq[0] * std::sin(2.0 * q[1]) * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp) - 0.00024179 * dq[1] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00024179 * dq[1] * std::cos(2.0 * q[3]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.00024179 * dq[2] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.00024179 * dq[2] * std::cos(2.0 * q[3]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00038102 * dq[3] * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00038102 * dq[3] * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00076206 * dq[4] * std::cos(2.0 * q[4]) * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + coriolisMatrix_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - b_coriolisMatrix_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + h_coriolisMatrix_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00048357 * dq[1] * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00048357 * dq[1] * std::sin(2.0 * q[3]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00048357 * dq[2] * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00048357 * dq[2] * std::sin(2.0 * q[3]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) + d_coriolisMatrix_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - d_coriolisMatrix_tmp_tmp * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00038102 * dq[4] * std::sin(2.0 * q[4]) * std::cos(q[1]) * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - j_C1_1_tmp_tmp * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp;
    d5 = 0.00024178 * dq[1] * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2]);
    d7 = 0.00024178 * dq[1] * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1]);
    d8 = 0.00024178 * dq[2] * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2]);
    d9 = 0.00024178 * dq[2] * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1]);
    d10 = 0.00012089 * dq[0] * std::sin(2.0 * q[3]) * std::cos(q[4]);
    d11 = 0.00012089 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) *
          std::sin(2.0 * q[3]) * std::cos(q[4]);
    d12 = 0.00012089 * dq[0] * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) *
          std::sin(2.0 * q[3]) * std::cos(q[4]);
    j_C1_1_tmp_tmp = 0.00076206 * dq[3] * b_C1_2_tmp_tmp_tmp;
    h_coriolisMatrix_tmp = 0.00024178 * dq[3] * b_C1_2_tmp_tmp *
                           b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp;
    f_coriolisMatrix_tmp = f_coriolisMatrix_tmp * b_C1_1_tmp_tmp *
                           C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp;
    ub_coriolisMatrix_tmp =
        p_C1_1_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp;
    vb_coriolisMatrix_tmp = 0.0016597 * dq[0] * std::cos(2.0 * q[1]) *
                            d_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp *
                            d_C1_2_tmp_tmp_tmp;
    coriolisMatrix[24] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0.00016499 * dq[0] * c_C1_1_tmp_tmp_tmp - 0.001256 * dq[0] * b_C1_1_tmp_tmp_tmp) + 6.0447E-5 * dq[0] * C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + d10) + 0.0006317 * dq[1] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.0006317 * dq[1] * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - 0.0006317 * dq[2] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.0006317 * dq[2] * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.002302 * dq[0] * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 6.4164E-5 * dq[0] * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00012833 * dq[0] * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00027499 * dq[0] * C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp_tmp) - 0.00021999 * dq[0] * b_C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp) - 0.002302 * dq[0] * std::sin(2.0 * q[1]) * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00065996 * dq[3] * c_C1_1_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.00049498 * dq[0] * std::cos(2.0 * q[1]) * e_C1_2_tmp_tmp * c_C1_1_tmp_tmp_tmp) + 0.00049498 * dq[0] * C1_1_tmp_tmp * d_C1_2_tmp_tmp * c_C1_1_tmp_tmp_tmp) + 0.0010941 * dq[1] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00011114 * dq[1] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - d5) + d7) - 0.0010941 * dq[2] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0026581 * dq[0] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00011114 * dq[2] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) + d8) - d9) - 0.0010941 * dq[3] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0010941 * dq[3] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.00024178 * dq[3] * std::cos(q[1]) * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0053163 * dq[3] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.00048356 * dq[4] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00011114 * dq[4] * std::cos(q[1]) * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.00011114 * dq[4] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0026581 * dq[4] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.000234 * dq[5] * std::cos(q[1]) * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0010941 * dq[1] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00011114 * dq[1] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0010941 * dq[2] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0013291 * dq[0] * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00011114 * dq[2] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + h_coriolisMatrix_tmp) + 0.0026581 * dq[3] * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00048356 * dq[4] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0053163 * dq[4] * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.000234 * dq[5] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0014978 * dq[0] * C1_2_tmp * e_C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0014978 * dq[0] * C1_1_tmp_tmp * d_C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.002302 * dq[0] * std::cos(2.0 * q[1]) * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00065996 * dq[3] * std::sin(2.0 * q[4]) * c_C1_2_tmp_tmp * C1_2_tmp_tmp) - 6.0445E-5 * dq[0] * C1_2_tmp * e_C1_2_tmp_tmp * C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - d11) - 0.00076206 * dq[0] * std::cos(2.0 * q[1]) * b_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp) + 0.00076206 * dq[0] * e_C1_2_tmp_tmp * b_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp * c_C1_2_tmp_tmp_tmp) + 0.00038102 * dq[0] * std::cos(2.0 * q[1]) * d_C1_2_tmp_tmp * c_C1_1_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00038102 * dq[0] * e_C1_2_tmp_tmp * C1_1_tmp_tmp * c_C1_1_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 6.0445E-5 * dq[0] * C1_2_tmp_tmp_tmp * C1_1_tmp_tmp * d_C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - d12) + 0.00041878 * dq[1] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 1.5E-8 * dq[1] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + ob_coriolisMatrix_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.00012839 * dq[1] * std::cos(q[2]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00041878 * dq[2] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 1.5E-8 * dq[2] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - d_C1_1_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00012839 * dq[2] * std::cos(q[2]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 6.4215E-5 * dq[3] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00012839 * dq[3] * std::cos(q[1]) * std::cos(q[2]) * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0033193 * dq[3] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0033193 * dq[3] * std::cos(q[2]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00012838 * dq[4] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 6.422E-5 * dq[4] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0020784 * dq[4] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0020784 * dq[4] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + coriolisMatrix_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.0002702 * dq[5] * std::cos(q[2]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 6.4215E-5 * dq[1] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 6.4215E-5 * dq[1] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00041878 * dq[1] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 1.5E-8 * dq[1] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 6.4215E-5 * dq[2] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 6.4215E-5 * dq[2] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00041878 * dq[2] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 1.5E-8 * dq[2] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0016597 * dq[3] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0016597 * dq[3] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 6.4215E-5 * dq[3] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00012839 * dq[3] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0033194 * dq[4] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0033194 * dq[4] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00012838 * dq[4] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 6.422E-5 * dq[4] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - f_coriolisMatrix_tmp) + ub_coriolisMatrix_tmp) - vb_coriolisMatrix_tmp) + 0.0016597 * dq[0] * std::cos(2.0 * q[2]) * std::sin(2.0 * q[1]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp) + d1 * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.00043998 * dq[1] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - 0.00043998 * dq[2] * std::cos(2.0 * q[3]) * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.00043998 * dq[2] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.00062049 * dq[0] * std::cos(2.0 * q[1]) * std::sin(2.0 * q[2]) * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00062049 * dq[0] * std::cos(2.0 * q[2]) * std::sin(2.0 * q[1]) * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00054998 * dq[1] * c_C1_1_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.00054998 * dq[1] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.00054998 * dq[2] * c_C1_1_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.00054998 * dq[2] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.00027498 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp_tmp) + 0.00021998 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * b_C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp) + 0.00027498 * dq[0] * C1_2_tmp_tmp_tmp * C1_1_tmp_tmp * d_C1_2_tmp_tmp * c_C1_1_tmp_tmp_tmp) + 0.00021998 * dq[0] * b_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp * d_C1_2_tmp_tmp * c_C1_1_tmp_tmp) + b_coriolisMatrix_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.0026581 * dq[0] * std::sin(2.0 * q[1]) * std::cos(q[2]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp) - 0.00024178 * dq[1] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00024178 * dq[1] * std::cos(2.0 * q[3]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00076206 * dq[1] * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00038102 * dq[1] * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp) + 0.00024178 * dq[2] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.00024178 * dq[2] * std::cos(2.0 * q[3]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.00076206 * dq[2] * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00038102 * dq[2] * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp) - j_C1_1_tmp_tmp * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + j_C1_1_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - c_coriolisMatrix_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0013291 * dq[0] * std::sin(2.0 * q[1]) * std::cos(q[2]) * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00076206 * dq[1] * std::cos(2.0 * q[4]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00012089 * dq[1] * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00012089 * dq[1] * std::sin(2.0 * q[3]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00038102 * dq[1] * std::sin(2.0 * q[4]) * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.00076206 * dq[2] * std::cos(2.0 * q[4]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00012089 * dq[2] * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00012089 * dq[2] * std::sin(2.0 * q[3]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00038102 * dq[2] * std::sin(2.0 * q[4]) * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.00038102 * dq[3] * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00038102 * dq[3] * std::sin(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp;
    C1_1_tmp_tmp = dq[1] - dq[2];
    coriolisMatrix_tmp = C1_1_tmp_tmp + dq[3];
    d_C1_1_tmp_tmp = dq[2] - dq[1];
    b_coriolisMatrix_tmp = d_C1_1_tmp_tmp + dq[3];
    coriolisMatrix[30] =
        (((((((0.00010132 * i_C1_6_tmp * (b_coriolisMatrix_tmp + dq[4]) -
               0.00010132 * h_C1_6_tmp * (coriolisMatrix_tmp + dq[4])) +
              6.755E-5 * b_C1_6_tmp * coriolisMatrix_tmp) -
             6.755E-5 * c_C1_6_tmp * b_coriolisMatrix_tmp) -
            0.000117 * d_C1_6_tmp * (C1_1_tmp_tmp + dq[4])) -
           0.000117 * e_C1_6_tmp * (d_C1_1_tmp_tmp + dq[4])) +
          3.3775E-5 * f_C1_6_tmp * (coriolisMatrix_tmp - dq[4])) -
         3.3775E-5 * g_C1_6_tmp * ((C1_1_tmp_tmp - dq[3]) + dq[4])) -
        7.8E-5 * C1_6_tmp * C1_1_tmp_tmp;
    d1 = 0.00043998 * dq[3] * std::sin(2.0 * q[3]);
    ob_coriolisMatrix_tmp = 0.00054997 * dq[4];
    d_C1_1_tmp_tmp = 3.0E-9 * dq[1] * b_C1_2_tmp_tmp_tmp;
    p_C1_1_tmp_tmp = 3.0E-9 * dq[2] * b_C1_2_tmp_tmp_tmp;
    f_C1_1_tmp_tmp = 0.00038103 * dq[3] * b_C1_2_tmp_tmp_tmp;
    e_coriolisMatrix_tmp_tmp = 0.00038103 * dq[4] * c_C1_1_tmp_tmp_tmp;
    coriolisMatrix_tmp = 0.0033194 * dq[3] * c_C1_2_tmp_tmp_tmp;
    coriolisMatrix[1] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0.060795 * dq[0] * std::sin(2.0 * q[1]) * std::cos(q[2]) - 0.060795 * dq[0] * std::cos(2.0 * q[1]) * std::sin(q[2])) - 0.074028 * dq[0] * std::sin(2.0 * q[1])) - 2.0E-7 * dq[1] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - d2) + d3) - 0.017165 * dq[3] * c_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - d4) + e_C1_1_tmp_tmp) - hb_coriolisMatrix_tmp) + ib_coriolisMatrix_tmp) + jb_coriolisMatrix_tmp) - g_coriolisMatrix_tmp) - 0.017165 * dq[0] * std::sin(2.0 * q[1]) * std::sin(q[2]) * std::sin(q[3])) - 5.0E-8 * dq[1] * c_C1_1_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 5.0E-8 * dq[2] * c_C1_1_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.0010525 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[3]) * std::sin(2.0 * q[2])) - g_C1_1_tmp_tmp) + i_C1_1_tmp_tmp) - k_C1_1_tmp_tmp) - 4.0E-8 * dq[1] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 2.0E-9 * dq[1] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 2.0E-9 * dq[1] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 4.0E-8 * dq[2] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 4.0E-8 * dq[1] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 2.0E-9 * dq[2] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 2.0E-9 * dq[2] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.010222 * dq[3] * std::cos(q[1]) * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 4.0E-8 * dq[3] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 4.0E-8 * dq[3] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + l_C1_1_tmp_tmp) - m_C1_1_tmp_tmp) - n_C1_1_tmp_tmp) + 0.0053163 * dq[3] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0026582 * dq[3] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + 5.0E-9 * dq[4] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) + o_C1_1_tmp_tmp) - q_C1_1_tmp_tmp) - j_coriolisMatrix_tmp) + 0.0026582 * dq[4] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0053163 * dq[4] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - k_coriolisMatrix_tmp) + l_coriolisMatrix_tmp) - 4.0E-8 * dq[1] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 4.0E-8 * dq[2] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 6.0E-8 * dq[1] * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.010222 * dq[3] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - m_coriolisMatrix_tmp) + 5.0E-9 * dq[4] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - n_coriolisMatrix_tmp) + o_coriolisMatrix_tmp) + p_coriolisMatrix_tmp) - q_coriolisMatrix_tmp) + r_coriolisMatrix_tmp) - 0.017165 * dq[0] * std::cos(2.0 * q[1]) * std::cos(q[2]) * std::sin(q[3])) - 0.004604 * dq[0] * std::cos(2.0 * q[1]) * std::cos(q[4]) * std::sin(q[2])) + 0.004604 * dq[0] * std::sin(2.0 * q[1]) * std::cos(q[2]) * std::cos(q[4])) - 5.0E-8 * dq[1] * std::sin(2.0 * q[3]) * c_C1_2_tmp_tmp * C1_2_tmp_tmp) + 5.0E-8 * dq[2] * std::sin(2.0 * q[3]) * c_C1_2_tmp_tmp * C1_2_tmp_tmp) + 0.0021051 * dq[3] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.0021051 * dq[3] * std::cos(2.0 * q[3]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + kb_coriolisMatrix_tmp) - 0.00032998 * dq[3] * std::cos(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1])) - 0.00038102 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * std::cos(2.0 * q[4]) * std::sin(q[3])) - 0.00076206 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * std::sin(2.0 * q[4]) * std::cos(q[3])) - 0.00012089 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[3]) * std::sin(2.0 * q[2]) * std::cos(q[4])) + 0.00012089 * dq[0] * std::cos(2.0 * q[2]) * std::cos(2.0 * q[3]) * std::sin(2.0 * q[1]) * std::cos(q[4])) + 0.00024178 * dq[0] * std::cos(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(2.0 * q[3]) * std::sin(q[4])) - 0.00024178 * dq[0] * std::cos(2.0 * q[2]) * std::sin(2.0 * q[1]) * std::sin(2.0 * q[3]) * std::sin(q[4])) - 0.00038102 * dq[0] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(q[3])) - 0.00076206 * dq[0] * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(2.0 * q[4]) * std::cos(q[3])) + 3.0E-8 * dq[1] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 2.35E-8 * dq[1] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + 1.5E-8 * dq[1] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 1.5E-8 * dq[1] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 3.0E-8 * dq[2] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 2.35E-8 * dq[2] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 1.5E-8 * dq[2] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 1.5E-8 * dq[2] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0033194 * dq[3] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0012409 * dq[3] * std::cos(q[1]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 2.35E-8 * dq[3] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 2.35E-8 * dq[3] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0016597 * dq[4] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0033194 * dq[4] * std::cos(q[1]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 2.5E-8 * dq[4] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 2.5E-8 * dq[4] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + s_coriolisMatrix_tmp) + t_coriolisMatrix_tmp) - 3.5E-8 * dq[1] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 3.5E-8 * dq[1] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 3.0E-8 * dq[1] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 2.35E-8 * dq[1] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 3.5E-8 * dq[2] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 3.5E-8 * dq[2] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 3.0E-8 * dq[2] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 2.35E-8 * dq[2] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 3.0E-8 * dq[3] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 3.0E-8 * dq[3] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - coriolisMatrix_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0012409 * dq[3] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 2.85E-8 * dq[4] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 2.85E-8 * dq[4] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0016597 * dq[4] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0033194 * dq[4] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + u_coriolisMatrix_tmp) + v_coriolisMatrix_tmp) - w_coriolisMatrix_tmp) - x_coriolisMatrix_tmp) + 2.0E-9 * dq[1] * C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp) + d_C1_1_tmp_tmp * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp) - 2.0E-9 * dq[2] * C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp) - p_C1_1_tmp_tmp * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp) + 0.00054997 * dq[3] * C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.00054997 * dq[3] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + lb_coriolisMatrix_tmp) - 0.00043998 * dq[4] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1])) - mb_coriolisMatrix_tmp) - 0.001241 * dq[0] * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::cos(q[4]) * std::sin(q[3])) + 2.0E-9 * dq[1] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 3.0E-9 * dq[1] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 2.0E-9 * dq[2] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 3.0E-9 * dq[2] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - d1 * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + d1 * std::sin(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - ob_coriolisMatrix_tmp * c_C1_1_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + ob_coriolisMatrix_tmp * std::sin(2.0 * q[3]) * c_C1_1_tmp_tmp_tmp * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + nb_coriolisMatrix_tmp) - i_coriolisMatrix_tmp) - y_coriolisMatrix_tmp) + ab_coriolisMatrix_tmp) + 0.0053163 * dq[0] * std::cos(2.0 * q[1]) * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[4])) + 0.0026581 * dq[0] * std::cos(2.0 * q[1]) * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[3])) - 5.0E-9 * dq[1] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) + d_C1_1_tmp_tmp * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - d_C1_1_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 5.0E-9 * dq[1] * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp) + 5.0E-9 * dq[2] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - p_C1_1_tmp_tmp * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + p_C1_1_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 5.0E-9 * dq[2] * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp) - 0.00024178 * dq[3] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.00024178 * dq[3] * std::cos(2.0 * q[3]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - f_C1_1_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00076206 * dq[3] * std::sin(2.0 * q[4]) * std::cos(q[1]) * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp) - bb_coriolisMatrix_tmp) + cb_coriolisMatrix_tmp) - db_coriolisMatrix_tmp) - e_coriolisMatrix_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp) + 0.0053163 * dq[0] * std::sin(2.0 * q[1]) * std::cos(q[3]) * std::sin(q[2]) * std::sin(q[4])) + 0.0026581 * dq[0] * std::sin(2.0 * q[1]) * std::cos(q[4]) * std::sin(q[2]) * std::sin(q[3])) - 5.0E-9 * dq[1] * std::cos(2.0 * q[3]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 5.0E-9 * dq[1] * std::sin(2.0 * q[3]) * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 2.0E-9 * dq[1] * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 2.0E-9 * dq[1] * std::sin(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 5.0E-9 * dq[2] * std::cos(2.0 * q[3]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 5.0E-9 * dq[2] * std::sin(2.0 * q[3]) * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 2.0E-9 * dq[2] * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 2.0E-9 * dq[2] * std::sin(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - f_C1_1_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00048356 * dq[3] * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00048356 * dq[3] * std::sin(2.0 * q[3]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - d_coriolisMatrix_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - eb_coriolisMatrix_tmp) + fb_coriolisMatrix_tmp) - gb_coriolisMatrix_tmp) - e_coriolisMatrix_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp;
    coriolisMatrix[7] =
        ((((((((((((((((((((0.0021051 * dq[3] * c_C1_1_tmp_tmp -
                            0.00032998 * dq[4] * c_C1_1_tmp_tmp_tmp) +
                           0.060795 * dq[2] * b_C1_1_tmp_tmp) -
                          0.0027538 * dq[4] * b_C1_1_tmp_tmp_tmp) -
                         0.00048356 * dq[3] * C1_2_tmp_tmp_tmp *
                             b_C1_1_tmp_tmp_tmp) -
                        0.00024178 * dq[3] * c_C1_1_tmp_tmp *
                            d_C1_2_tmp_tmp_tmp) -
                       0.00012089 * dq[4] * C1_2_tmp_tmp_tmp *
                           b_C1_1_tmp_tmp_tmp) -
                      0.00024178 * dq[4] * c_C1_1_tmp_tmp *
                          d_C1_2_tmp_tmp_tmp) +
                     0.017164 * dq[2] * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) +
                    0.0046041 * dq[2] * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) +
                   0.017164 * dq[3] * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) +
                  0.0046041 * dq[4] * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) +
                 0.00043998 * dq[3] * C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp_tmp) +
                0.00054997 * dq[3] * b_C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp) +
               0.00054997 * dq[4] * C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp_tmp) +
              0.00043998 * dq[4] * b_C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp) -
             0.0053165 * dq[2] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp *
                 b_C1_1_tmp_tmp_tmp) -
            0.0026582 * dq[2] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp *
                C1_1_tmp_tmp_tmp) -
           0.0026582 * dq[3] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp *
               b_C1_1_tmp_tmp) -
          0.0053165 * dq[4] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp *
              b_C1_1_tmp_tmp) +
         0.0053165 * dq[3] * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp *
             b_C1_1_tmp_tmp_tmp) +
        0.0026582 * dq[4] * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp *
            b_C1_1_tmp_tmp_tmp;
    b_coriolisMatrix_tmp = c_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp_tmp;
    c_coriolisMatrix_tmp = d_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp;
    g_coriolisMatrix_tmp =
        0.00096712 * dq[3] * b_coriolisMatrix_tmp * b_C1_1_tmp_tmp_tmp;
    i_coriolisMatrix_tmp =
        0.00024178 * dq[4] * b_coriolisMatrix_tmp * b_C1_1_tmp_tmp_tmp;
    y_coriolisMatrix_tmp = 0.0017599 * dq[3] * b_coriolisMatrix_tmp *
                           d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp;
    b_coriolisMatrix_tmp = 0.0021999 * dq[4] * b_coriolisMatrix_tmp *
                           d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp;
    coriolisMatrix[13] =
        ((((((((((((((((((((((((((((0.00043998 * dq[3] * c_C1_1_tmp_tmp_tmp -
                                    0.0015551 * dq[3] * c_C1_1_tmp_tmp) +
                                   0.00043998 * dq[4] * c_C1_1_tmp_tmp) +
                                  0.00087995 * dq[4] * c_C1_1_tmp_tmp_tmp) +
                                 0.060795 * dq[1] * b_C1_1_tmp_tmp) -
                                0.060795 * dq[2] * std::sin(q[2])) -
                               0.00048356 * dq[3] * b_C1_1_tmp_tmp_tmp) +
                              0.0026329 * dq[4] * b_C1_1_tmp_tmp_tmp) +
                             0.017164 * dq[1] * C1_2_tmp_tmp *
                                 C1_1_tmp_tmp_tmp) +
                            0.0046041 * dq[1] * d_C1_2_tmp_tmp_tmp *
                                b_C1_1_tmp_tmp) -
                           0.017165 * dq[2] * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) -
                          0.0046041 * dq[2] * std::cos(q[4]) * std::sin(q[2])) -
                         0.017165 * dq[3] * std::cos(q[3]) * b_C1_1_tmp_tmp) -
                        0.0046041 * dq[4] * std::cos(q[2]) * std::sin(q[4])) +
                       g_coriolisMatrix_tmp) +
                      i_coriolisMatrix_tmp) -
                     0.0053165 * dq[1] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp *
                         b_C1_1_tmp_tmp_tmp) -
                    0.0026582 * dq[1] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp *
                        C1_1_tmp_tmp_tmp) +
                   0.0053164 * dq[2] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp *
                       b_C1_1_tmp_tmp_tmp) +
                  0.0026582 * dq[2] * std::cos(q[2]) * std::cos(q[4]) *
                      std::sin(q[3])) +
                 0.0026582 * dq[3] * std::cos(q[3]) * std::cos(q[4]) *
                     std::sin(q[2])) +
                0.00048356 * dq[3] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp *
                    C1_1_tmp_tmp_tmp) +
               0.0053164 * dq[4] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp *
                   b_C1_1_tmp_tmp) +
              0.00048356 * dq[4] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp *
                  C1_1_tmp_tmp_tmp) -
             0.0053164 * dq[3] * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp *
                 b_C1_1_tmp_tmp_tmp) -
            0.0026582 * dq[4] * std::sin(q[2]) * std::sin(q[3]) *
                std::sin(q[4])) -
           0.0021999 * dq[3] * c_C1_2_tmp_tmp_tmp * c_coriolisMatrix_tmp *
               C1_1_tmp_tmp_tmp) -
          y_coriolisMatrix_tmp) -
         0.0017599 * dq[4] * c_C1_2_tmp_tmp_tmp * c_coriolisMatrix_tmp *
             C1_1_tmp_tmp_tmp) -
        b_coriolisMatrix_tmp;
    d1 = 0.00076206 * dq[3] * std::sin(2.0 * q[4]) * std::cos(q[3]);
    d2 = 0.00038103 * dq[4] * std::sin(2.0 * q[4]) * std::cos(q[3]);
    ab_coriolisMatrix_tmp =
        0.00043998 * dq[1] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4]);
    bb_coriolisMatrix_tmp =
        0.00043998 * dq[2] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4]);
    cb_coriolisMatrix_tmp =
        0.00024178 * dq[2] * c_C1_1_tmp_tmp * d_C1_2_tmp_tmp_tmp;
    db_coriolisMatrix_tmp = 0.0021051 * dq[2] * c_C1_1_tmp_tmp;
    eb_coriolisMatrix_tmp = 0.0021051 * dq[1] * c_C1_1_tmp_tmp;
    fb_coriolisMatrix_tmp = 0.0010941 * dq[4] * C1_1_tmp_tmp_tmp;
    coriolisMatrix[19] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((eb_coriolisMatrix_tmp - db_coriolisMatrix_tmp) + 0.010222 * dq[3] * C1_1_tmp_tmp_tmp) - fb_coriolisMatrix_tmp) - 0.0001351 * dq[5] * C1_1_tmp_tmp_tmp) - 0.00048356 * dq[1] * C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00024178 * dq[1] * c_C1_1_tmp_tmp * d_C1_2_tmp_tmp_tmp) + 0.00048356 * dq[2] * C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + cb_coriolisMatrix_tmp) - f_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - d1) - coriolisMatrix_tmp_tmp * C1_1_tmp_tmp_tmp) - d2) - 0.0034398 * dq[0] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.0034398 * dq[0] * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - 0.017165 * dq[0] * c_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.017164 * dq[1] * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.017165 * dq[2] * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.017165 * dq[3] * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - coriolisMatrix_tmp * b_C1_1_tmp_tmp_tmp) - 0.0012409 * dq[3] * std::cos(q[4]) * C1_1_tmp_tmp_tmp) - 0.0016597 * dq[4] * std::cos(q[3]) * b_C1_1_tmp_tmp_tmp) - 0.0033194 * dq[4] * std::cos(q[4]) * C1_1_tmp_tmp_tmp) + 0.0002702 * dq[5] * std::cos(q[3]) * b_C1_1_tmp_tmp_tmp) + 0.0001351 * dq[5] * std::cos(q[4]) * C1_1_tmp_tmp_tmp) + ab_coriolisMatrix_tmp) + 0.00054997 * dq[1] * b_C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp) - bb_coriolisMatrix_tmp) - 0.00054997 * dq[2] * b_C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp) + 0.010222 * dq[0] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00024178 * dq[0] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.00024178 * dq[0] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.0053164 * dq[0] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0026582 * dq[0] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0026582 * dq[1] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0026582 * dq[2] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0053164 * dq[3] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0026582 * dq[3] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0026582 * dq[4] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0053164 * dq[4] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.010222 * dq[0] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0053165 * dq[1] * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0053164 * dq[2] * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0021051 * dq[0] * C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.0021051 * dq[0] * std::cos(2.0 * q[3]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.00032998 * dq[0] * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.00032998 * dq[0] * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - 0.0033194 * dq[0] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0012409 * dq[0] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0033194 * dq[0] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0012409 * dq[0] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00054997 * dq[0] * C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.00054997 * dq[0] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - 0.00043998 * dq[0] * c_C1_1_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.00043998 * dq[0] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - pb_coriolisMatrix_tmp * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + pb_coriolisMatrix_tmp * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00038103 * dq[0] * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00076206 * dq[0] * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp) - 0.00038103 * dq[0] * std::cos(2.0 * q[4]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00048356 * dq[0] * c_C1_1_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00048356 * dq[0] * std::sin(2.0 * q[3]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00076206 * dq[0] * std::sin(2.0 * q[4]) * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp;
    coriolisMatrix_tmp = 0.00012089 * dq[0] * std::sin(2.0 * q[3]);
    gb_coriolisMatrix_tmp =
        0.00024178 * dq[0] * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2]);
    hb_coriolisMatrix_tmp =
        0.00024178 * dq[0] * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1]);
    ib_coriolisMatrix_tmp = 0.00024178 * dq[0] * std::cos(2.0 * q[3]) *
                            std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2]);
    jb_coriolisMatrix_tmp = 0.00024178 * dq[0] * std::cos(2.0 * q[3]) *
                            std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1]);
    kb_coriolisMatrix_tmp = j_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp;
    lb_coriolisMatrix_tmp =
        0.00038103 * dq[3] * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp_tmp;
    mb_coriolisMatrix_tmp =
        0.00024178 * dq[1] * std::sin(2.0 * q[3]) * d_C1_2_tmp_tmp_tmp;
    coriolisMatrix[25] = (((((((((((((((((((((((((((((((((((((((((((((((((((((0.00032998 * dq[2] * c_C1_1_tmp_tmp_tmp - 0.00032998 * dq[1] * c_C1_1_tmp_tmp_tmp) - 0.0027538 * dq[1] * b_C1_1_tmp_tmp_tmp) + 0.0027538 * dq[2] * b_C1_1_tmp_tmp_tmp) - 0.0010941 * dq[3] * C1_1_tmp_tmp_tmp) + 0.5 * dq[5] * (0.0002702 * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp + 0.0005404 * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp)) - 0.00012089 * dq[1] * C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - mb_coriolisMatrix_tmp) + 0.00012089 * dq[2] * C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + cb_coriolisMatrix_tmp) - kb_coriolisMatrix_tmp) - lb_coriolisMatrix_tmp) - 0.0006317 * dq[0] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.0006317 * dq[0] * C1_2_tmp_tmp * b_C1_2_tmp_tmp) + 0.0046041 * dq[1] * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0046041 * dq[2] * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0016597 * dq[3] * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0033194 * dq[3] * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0046041 * dq[4] * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 0.0033194 * dq[4] * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0020785 * dq[4] * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00054997 * dq[1] * C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp_tmp) + 0.00043998 * dq[1] * b_C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp) - 0.00054997 * dq[2] * C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp_tmp) - 0.00043998 * dq[2] * b_C1_2_tmp_tmp_tmp * c_C1_1_tmp_tmp) - 0.0010941 * dq[0] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + gb_coriolisMatrix_tmp) - hb_coriolisMatrix_tmp) + 0.0026582 * dq[0] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0053164 * dq[0] * std::cos(q[1]) * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0053165 * dq[1] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0053164 * dq[2] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 0.0026582 * dq[3] * std::cos(q[2]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0053164 * dq[3] * std::cos(q[2]) * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0053164 * dq[4] * std::cos(q[2]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0026582 * dq[4] * std::cos(q[2]) * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0010941 * dq[0] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0026582 * dq[1] * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0026582 * dq[2] * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0016597 * dq[0] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0033194 * dq[0] * std::cos(q[1]) * std::cos(q[2]) * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0016597 * dq[0] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0033194 * dq[0] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00043998 * dq[0] * C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.00043998 * dq[0] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - 0.00054997 * dq[0] * c_C1_1_tmp_tmp * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 0.00054997 * dq[0] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp) - ib_coriolisMatrix_tmp) + jb_coriolisMatrix_tmp) - 0.00076206 * dq[0] * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00038103 * dq[0] * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp) - 0.00076206 * dq[0] * std::cos(2.0 * q[4]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + coriolisMatrix_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - coriolisMatrix_tmp * C1_2_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00038103 * dq[0] * std::sin(2.0 * q[4]) * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp;
    coriolisMatrix[31] =
        ((((((((7.8E-5 * dq[0] * C1_6_tmp -
                0.0001351 * dq[3] * C1_1_tmp_tmp_tmp) +
               0.0002702 * dq[3] * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) +
              0.0001351 * dq[3] * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) +
             0.0001351 * dq[4] * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) +
            0.0002702 * dq[4] * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) -
           0.0001351 * dq[0] * C2_6_tmp * C1_1_tmp_tmp_tmp) +
          0.000234 * dq[0] * C1_6_tmp * d_C1_2_tmp_tmp_tmp) +
         0.0002702 * dq[0] * C2_6_tmp * c_C1_2_tmp_tmp_tmp *
             b_C1_1_tmp_tmp_tmp) +
        0.0001351 * dq[0] * std::cos(q[1] - q[2]) * d_C1_2_tmp_tmp_tmp *
            C1_1_tmp_tmp_tmp;
    d3 = 2.7498E-5 * dq[3];
    coriolisMatrix[2] = ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0.0042912 * dq[0] * C1_1_tmp - 0.001151 * dq[0] * b_C1_1_tmp) - 0.0034398 * dq[3] * C1_6_tmp) - 0.0006317 * dq[4] * C1_6_tmp) - 7.8E-5 * dq[5] * C1_6_tmp) + 0.0042912 * dq[0] * c_C1_1_tmp) - 0.005111 * dq[0] * d_C1_1_tmp) - 0.001151 * dq[0] * e_C1_1_tmp) - 0.005111 * dq[0] * f_C1_1_tmp) + 2.5E-8 * dq[1] * C3_1_tmp) + 2.5E-8 * dq[1] * b_C3_1_tmp) - 0.0014978 * dq[0] * g_C1_1_tmp) + 0.0014978 * dq[0] * h_C1_1_tmp) - 2.5E-8 * dq[2] * C3_1_tmp) - 2.5E-8 * dq[2] * b_C3_1_tmp) + 0.0010526 * dq[3] * C3_1_tmp) - 0.0010526 * dq[3] * b_C3_1_tmp) + 0.00016499 * dq[3] * std::sin(C1_6_tmp_tmp + 2.0 * q[4])) - 0.00016499 * dq[3] * std::sin(b_C1_6_tmp_tmp + 2.0 * q[4])) + 0.00033227 * dq[0] * i_C1_1_tmp) - 0.00033227 * dq[0] * j_C1_1_tmp) - 0.00051961 * dq[0] * k_C1_1_tmp) + 0.00051961 * dq[0] * l_C1_1_tmp) + 2.5E-10 * dq[1] * c_C3_1_tmp) + 0.00028577 * dq[0] * m_C1_1_tmp) + 9.0668E-5 * dq[0] * n_C1_1_tmp) - 9.5258E-5 * dq[0] * o_C1_1_tmp) + 0.00028577 * dq[0] * p_C1_1_tmp) + 3.0223E-5 * dq[0] * q_C1_1_tmp) - 9.0668E-5 * dq[0] * r_C1_1_tmp) + 2.5E-10 * dq[1] * d_C3_1_tmp) - 2.5E-10 * dq[1] * e_C3_1_tmp) - 1.25E-9 * dq[1] * f_C3_1_tmp) - 1.25E-9 * dq[1] * g_C3_1_tmp) - 2.5E-10 * dq[2] * c_C3_1_tmp) - 2.5E-10 * dq[2] * d_C3_1_tmp) + 2.5E-10 * dq[2] * e_C3_1_tmp) + 1.25E-9 * dq[2] * f_C3_1_tmp) + 1.25E-9 * dq[2] * g_C3_1_tmp) + 9.5258E-5 * dq[3] * c_C3_1_tmp) + 6.0445E-5 * dq[3] * h_C3_1_tmp) + d3 * d_C3_1_tmp) + d3 * e_C3_1_tmp) + 0.00024749 * dq[3] * f_C3_1_tmp) - 0.00024749 * dq[3] * g_C3_1_tmp) - 9.5258E-5 * dq[4] * c_C3_1_tmp) - 3.0222E-5 * dq[4] * h_C3_1_tmp) - 2.7498E-5 * dq[4] * d_C3_1_tmp) - 2.7498E-5 * dq[4] * e_C3_1_tmp) + 0.00024749 * dq[4] * f_C3_1_tmp) - 0.00024749 * dq[4] * g_C3_1_tmp) - 0.0042912 * dq[0] * s_C1_1_tmp) - 0.001151 * dq[0] * t_C1_1_tmp) + 0.0042912 * dq[0] * u_C1_1_tmp) + 2.0E-8 * dq[1] * b_C1_6_tmp) + 2.0E-8 * dq[1] * c_C1_6_tmp) + 0.001151 * dq[0] * v_C1_1_tmp) - 1.0E-9 * dq[1] * d_C1_6_tmp) + 1.0E-9 * dq[1] * e_C1_6_tmp) - 2.0E-8 * dq[2] * b_C1_6_tmp) - 2.0E-8 * dq[2] * c_C1_6_tmp) - 0.00033227 * dq[0] * w_C1_1_tmp) + 0.00033227 * dq[0] * x_C1_1_tmp) + 0.0009968 * dq[0] * y_C1_1_tmp) + 1.0E-9 * dq[2] * d_C1_6_tmp) - 1.0E-9 * dq[2] * e_C1_6_tmp) - 0.005111 * dq[3] * b_C1_6_tmp) - 0.005111 * dq[3] * c_C1_6_tmp) + 0.00012089 * dq[3] * d_C1_6_tmp) - 0.00012089 * dq[3] * e_C1_6_tmp) + 0.00054705 * dq[4] * b_C1_6_tmp) + 0.00054705 * dq[4] * c_C1_6_tmp) + 0.00012089 * dq[4] * d_C1_6_tmp) - 0.00012089 * dq[4] * e_C1_6_tmp) + 6.755E-5 * dq[5] * b_C1_6_tmp) + 6.755E-5 * dq[5] * c_C1_6_tmp) - 0.000117 * dq[5] * d_C1_6_tmp) + 0.000117 * dq[5] * e_C1_6_tmp) - 0.0009968 * dq[0] * ab_C1_1_tmp) - 3.375E-9 * dq[1] * f_C1_6_tmp) - 6.625E-9 * dq[1] * g_C1_6_tmp) + 0.0011401 * dq[0] * bb_C1_1_tmp) + 0.0011401 * dq[0] * cb_C1_1_tmp) + 2.5E-10 * dq[1] * i_C3_1_tmp) + 1.25E-9 * dq[1] * j_C3_1_tmp) + 2.5E-9 * dq[1] * k_C3_1_tmp) - 1.25E-9 * dq[1] * l_C3_1_tmp) + 2.5E-9 * dq[1] * m_C3_1_tmp) + 3.375E-9 * dq[2] * f_C1_6_tmp) + 6.625E-9 * dq[2] * g_C1_6_tmp) - 2.5E-10 * dq[2] * i_C3_1_tmp) - 1.25E-9 * dq[2] * j_C3_1_tmp) - 2.5E-9 * dq[2] * k_C3_1_tmp) + 1.25E-9 * dq[2] * l_C3_1_tmp) - 2.5E-9 * dq[2] * m_C3_1_tmp) - 0.00051962 * dq[3] * f_C1_6_tmp) + 0.00051962 * dq[3] * g_C1_6_tmp) - 9.5258E-5 * dq[3] * i_C3_1_tmp) + 0.00028577 * dq[3] * j_C3_1_tmp) + 6.0445E-5 * dq[3] * h_C1_1_tmp_tmp) - 0.00018134 * dq[3] * k_C3_1_tmp) + 0.00028577 * dq[3] * l_C3_1_tmp) + 0.00018134 * dq[3] * m_C3_1_tmp) + 0.00041493 * dq[4] * f_C1_6_tmp) - 0.00041493 * dq[4] * g_C1_6_tmp) + 9.5258E-5 * dq[4] * i_C3_1_tmp) + 0.00028577 * dq[4] * j_C3_1_tmp) - 3.0222E-5 * dq[4] * h_C1_1_tmp_tmp) - 9.0668E-5 * dq[4] * k_C3_1_tmp) + 0.00028577 * dq[4] * l_C3_1_tmp) + 9.0668E-5 * dq[4] * m_C3_1_tmp) + 3.3775E-5 * dq[5] * f_C1_6_tmp) - 3.3775E-5 * dq[5] * g_C1_6_tmp) - 0.030397 * dq[0] * std::sin(q[2])) - 0.030397 * dq[0] * db_C1_1_tmp) + 0.018292 * dq[0] * eb_C1_1_tmp) - 0.00052627 * dq[0] * fb_C1_1_tmp) + 0.00052627 * dq[0] * gb_C1_1_tmp) - 0.00024749 * dq[0] * hb_C1_1_tmp) + 0.00024749 * dq[0] * ib_C1_1_tmp) + 9.5258E-5 * dq[0] * jb_C1_1_tmp) + 3.0223E-5 * dq[0] * kb_C1_1_tmp) - 0.00012374 * dq[0] * lb_C1_1_tmp) + 1.3749E-5 * dq[0] * mb_C1_1_tmp) + 1.3749E-5 * dq[0] * nb_C1_1_tmp) + 0.00012374 * dq[0] * ob_C1_1_tmp) + 0.0009968 * dq[0] * pb_C1_1_tmp) - 0.0009968 * dq[0] * qb_C1_1_tmp) - 8.75E-10 * dq[1] * h_C1_6_tmp) - 2.5875E-8 * dq[1] * i_C1_6_tmp) + 8.75E-10 * dq[2] * h_C1_6_tmp) + 2.5875E-8 * dq[2] * i_C1_6_tmp) + 0.00114 * dq[3] * h_C1_6_tmp) + 0.0011401 * dq[3] * i_C1_6_tmp) + 0.0012447 * dq[4] * h_C1_6_tmp) + 0.0012448 * dq[4] * i_C1_6_tmp) - 0.00010132 * dq[5] * h_C1_6_tmp) - 0.00010132 * dq[5] * i_C1_6_tmp;
    coriolisMatrix[8] =
        (((((((((((((((((0.00043998 * dq[3] * std::sin(2.0 * q[4]) -
                         0.0015551 * dq[3] * std::sin(2.0 * q[3])) +
                        0.00043998 * dq[4] * std::sin(2.0 * q[3])) +
                       0.00087995 * dq[4] * std::sin(2.0 * q[4])) -
                      0.060795 * dq[1] * std::sin(q[2])) -
                     0.00048356 * dq[3] * std::sin(q[4])) +
                    0.0026329 * dq[4] * std::sin(q[4])) -
                   0.017164 * dq[1] * std::cos(q[2]) * std::sin(q[3])) -
                  0.0046041 * dq[1] * std::cos(q[4]) * std::sin(q[2])) +
                 g_coriolisMatrix_tmp) +
                i_coriolisMatrix_tmp) +
               0.0053165 * dq[1] * std::cos(q[2]) * std::cos(q[3]) *
                   std::sin(q[4])) +
              0.0026582 * dq[1] * std::cos(q[2]) * std::cos(q[4]) *
                  std::sin(q[3])) +
             0.00048356 * dq[3] * std::cos(q[3]) * std::cos(q[4]) *
                 std::sin(q[3])) +
            0.00048356 * dq[4] * std::cos(q[3]) * std::cos(q[4]) *
                std::sin(q[3])) -
           0.0021999 * dq[3] * std::cos(q[3]) *
               (d_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp) * C1_1_tmp_tmp_tmp) -
          y_coriolisMatrix_tmp) -
         0.0017599 * dq[4] * std::cos(q[3]) *
             (d_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp) * C1_1_tmp_tmp_tmp) -
        b_coriolisMatrix_tmp;
    coriolisMatrix[14] =
        (((((((((0.0021051 * dq[3] * std::sin(2.0 * q[3]) -
                 0.00032998 * dq[4] * std::sin(2.0 * q[4])) -
                0.0027538 * dq[4] * std::sin(q[4])) -
               0.00048356 * dq[3] * std::cos(2.0 * q[3]) * std::sin(q[4])) -
              0.00024178 * dq[3] * std::sin(2.0 * q[3]) * std::cos(q[4])) -
             0.00012089 * dq[4] * std::cos(2.0 * q[3]) * std::sin(q[4])) -
            0.00024178 * dq[4] * std::sin(2.0 * q[3]) * std::cos(q[4])) +
           0.00043998 * dq[3] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4])) +
          0.00054997 * dq[3] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3])) +
         0.00054997 * dq[4] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4])) +
        0.00043998 * dq[4] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3]);
    coriolisMatrix_tmp =
        0.00024178 * dq[1] * std::sin(2.0 * q[3]) * std::cos(q[4]);
    b_coriolisMatrix_tmp =
        0.00024178 * dq[2] * std::sin(2.0 * q[3]) * std::cos(q[4]);
    g_coriolisMatrix_tmp =
        0.00048356 * dq[2] * std::cos(2.0 * q[3]) * std::sin(q[4]);
    i_coriolisMatrix_tmp =
        0.00076206 * dq[4] * std::cos(2.0 * q[4]) * std::sin(q[3]);
    y_coriolisMatrix_tmp = 0.0034398 * dq[0] * std::cos(q[1]) * std::sin(q[2]);
    cb_coriolisMatrix_tmp = 0.0002702 * dq[5] * std::cos(q[3]) * std::sin(q[4]);
    nb_coriolisMatrix_tmp = 0.0001351 * dq[5] * std::cos(q[4]) * std::sin(q[3]);
    p_C1_1_tmp_tmp =
        0.00054997 * dq[1] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3]);
    d_C1_1_tmp_tmp =
        0.00054997 * dq[2] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3]);
    f_C1_1_tmp_tmp =
        0.010222 * dq[0] * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[3]);
    h_C1_1_tmp_tmp =
        0.010222 * dq[0] * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3]);
    j_C1_1_tmp_tmp = 0.0021051 * dq[0] * std::cos(2.0 * q[3]) * std::cos(q[1]) *
                     std::sin(q[2]);
    e_C1_1_tmp_tmp = 0.0021051 * dq[0] * std::cos(2.0 * q[3]) * std::cos(q[2]) *
                     std::sin(q[1]);
    g_C1_1_tmp_tmp = 0.00032998 * dq[0] * std::cos(2.0 * q[4]) *
                     std::cos(q[1]) * std::sin(q[2]);
    i_C1_1_tmp_tmp = 0.00032998 * dq[0] * std::cos(2.0 * q[4]) *
                     std::cos(q[2]) * std::sin(q[1]);
    k_C1_1_tmp_tmp = 0.0033194 * dq[0] * std::cos(q[1]) * std::cos(q[2]) *
                     std::cos(q[3]) * std::sin(q[4]);
    l_C1_1_tmp_tmp = 0.0012409 * dq[0] * std::cos(q[1]) * std::cos(q[2]) *
                     std::cos(q[4]) * std::sin(q[3]);
    m_C1_1_tmp_tmp = 0.0033194 * dq[0] * std::cos(q[3]) * std::sin(q[1]) *
                     std::sin(q[2]) * std::sin(q[4]);
    n_C1_1_tmp_tmp = 0.0012409 * dq[0] * std::cos(q[4]) * std::sin(q[1]) *
                     std::sin(q[2]) * std::sin(q[3]);
    o_C1_1_tmp_tmp = 0.00054997 * dq[0] * std::cos(2.0 * q[3]) *
                     std::cos(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2]);
    q_C1_1_tmp_tmp = 0.00054997 * dq[0] * std::cos(2.0 * q[3]) *
                     std::cos(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1]);
    j_coriolisMatrix_tmp = 0.00043998 * dq[0] * std::sin(2.0 * q[3]) *
                           std::sin(2.0 * q[4]) * std::cos(q[1]) *
                           std::sin(q[2]);
    k_coriolisMatrix_tmp = 0.00043998 * dq[0] * std::sin(2.0 * q[3]) *
                           std::sin(2.0 * q[4]) * std::cos(q[2]) *
                           std::sin(q[1]);
    l_coriolisMatrix_tmp = 0.00038103 * dq[0] * std::cos(2.0 * q[4]) *
                           std::cos(q[1]) * std::cos(q[2]) * std::sin(q[3]);
    m_coriolisMatrix_tmp = 0.00076206 * dq[0] * std::sin(2.0 * q[4]) *
                           std::cos(q[1]) * std::cos(q[2]) * std::cos(q[3]);
    n_coriolisMatrix_tmp = 0.00038103 * dq[0] * std::cos(2.0 * q[4]) *
                           std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3]);
    o_coriolisMatrix_tmp = 0.00048356 * dq[0] * std::sin(2.0 * q[3]) *
                           std::cos(q[1]) * std::sin(q[2]) * std::sin(q[4]);
    p_coriolisMatrix_tmp = 0.00048356 * dq[0] * std::sin(2.0 * q[3]) *
                           std::cos(q[2]) * std::sin(q[1]) * std::sin(q[4]);
    q_coriolisMatrix_tmp = 0.00076206 * dq[0] * std::sin(2.0 * q[4]) *
                           std::cos(q[3]) * std::sin(q[1]) * std::sin(q[2]);
    coriolisMatrix_tmp_tmp = 0.0001351 * dq[5] * std::sin(q[3]);
    db_coriolisMatrix_tmp -= eb_coriolisMatrix_tmp;
    eb_coriolisMatrix_tmp =
        0.00048356 * dq[1] * std::cos(2.0 * q[3]) * b_C1_1_tmp_tmp_tmp;
    r_coriolisMatrix_tmp = 0.0034398 * dq[0] * std::cos(q[2]) * std::sin(q[1]);
    coriolisMatrix[20] =
        ((((((((((((((((((((((((((((((((((((((((((((((db_coriolisMatrix_tmp -
                                                      0.010222 * dq[3] *
                                                          std::sin(q[3])) +
                                                     fb_coriolisMatrix_tmp) +
                                                    coriolisMatrix_tmp_tmp) +
                                                   eb_coriolisMatrix_tmp) +
                                                  coriolisMatrix_tmp) -
                                                 g_coriolisMatrix_tmp) -
                                                b_coriolisMatrix_tmp) +
                                               0.00038103 * dq[3] *
                                                   std::cos(2.0 * q[4]) *
                                                   std::sin(q[3])) +
                                              d1) +
                                             i_coriolisMatrix_tmp) +
                                            d2) +
                                           y_coriolisMatrix_tmp) -
                                          r_coriolisMatrix_tmp) +
                                         0.0033194 * dq[3] * std::cos(q[3]) *
                                             b_C1_1_tmp_tmp_tmp) +
                                        0.0012409 * dq[3] * std::cos(q[4]) *
                                            std::sin(q[3])) +
                                       0.0016597 * dq[4] * std::cos(q[3]) *
                                           std::sin(q[4])) +
                                      0.0033194 * dq[4] * std::cos(q[4]) *
                                          std::sin(q[3])) -
                                     cb_coriolisMatrix_tmp) -
                                    nb_coriolisMatrix_tmp) -
                                   ab_coriolisMatrix_tmp) -
                                  p_C1_1_tmp_tmp) +
                                 bb_coriolisMatrix_tmp) +
                                d_C1_1_tmp_tmp) -
                               f_C1_1_tmp_tmp) -
                              gb_coriolisMatrix_tmp) +
                             hb_coriolisMatrix_tmp) -
                            h_C1_1_tmp_tmp) -
                           j_C1_1_tmp_tmp) +
                          e_C1_1_tmp_tmp) -
                         g_C1_1_tmp_tmp) +
                        i_C1_1_tmp_tmp) +
                       k_C1_1_tmp_tmp) +
                      l_C1_1_tmp_tmp) +
                     m_C1_1_tmp_tmp) +
                    n_C1_1_tmp_tmp) -
                   o_C1_1_tmp_tmp) +
                  q_C1_1_tmp_tmp) +
                 j_coriolisMatrix_tmp) -
                k_coriolisMatrix_tmp) +
               ib_coriolisMatrix_tmp) -
              jb_coriolisMatrix_tmp) +
             l_coriolisMatrix_tmp) +
            m_coriolisMatrix_tmp) +
           n_coriolisMatrix_tmp) -
          o_coriolisMatrix_tmp) +
         p_coriolisMatrix_tmp) +
        q_coriolisMatrix_tmp;
    fb_coriolisMatrix_tmp = ((0.00032998 * dq[1] * std::sin(2.0 * q[4]) -
                              0.00032998 * dq[2] * std::sin(2.0 * q[4])) +
                             0.0027538 * dq[1] * std::sin(q[4])) -
                            0.0027538 * dq[2] * std::sin(q[4]);
    s_coriolisMatrix_tmp = 0.0010941 * dq[3] * std::sin(q[3]);
    t_coriolisMatrix_tmp =
        0.00012089 * dq[2] * std::cos(2.0 * q[3]) * std::sin(q[4]);
    u_coriolisMatrix_tmp = 0.0006317 * dq[0] * std::cos(q[1]) * std::sin(q[2]);
    v_coriolisMatrix_tmp = 0.0006317 * dq[0] * std::cos(q[2]) * std::sin(q[1]);
    w_coriolisMatrix_tmp =
        0.00054997 * dq[1] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4]);
    x_coriolisMatrix_tmp =
        0.00043998 * dq[1] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3]);
    ob_coriolisMatrix_tmp =
        0.00054997 * dq[2] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4]);
    pb_coriolisMatrix_tmp =
        0.00043998 * dq[2] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3]);
    d_coriolisMatrix_tmp_tmp =
        0.0010941 * dq[0] * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[3]);
    C1_2_tmp =
        0.0010941 * dq[0] * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3]);
    e_C1_2_tmp_tmp = 0.0016597 * dq[0] * std::cos(q[1]) * std::cos(q[2]) *
                     std::cos(q[3]) * std::sin(q[4]);
    m_C3_1_tmp = 0.0033194 * dq[0] * std::cos(q[1]) * std::cos(q[2]) *
                 std::cos(q[4]) * std::sin(q[3]);
    l_C3_1_tmp = 0.0016597 * dq[0] * std::cos(q[3]) * std::sin(q[1]) *
                 std::sin(q[2]) * std::sin(q[4]);
    k_C3_1_tmp = 0.0033194 * dq[0] * std::cos(q[4]) * std::sin(q[1]) *
                 std::sin(q[2]) * std::sin(q[3]);
    j_C3_1_tmp = 0.00043998 * dq[0] * std::cos(2.0 * q[3]) *
                 std::cos(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2]);
    c_C3_1_tmp = 0.00043998 * dq[0] * std::cos(2.0 * q[3]) *
                 std::cos(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1]);
    d_C3_1_tmp = 0.00054997 * dq[0] * std::sin(2.0 * q[3]) *
                 std::sin(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2]);
    e_C3_1_tmp = 0.00054997 * dq[0] * std::sin(2.0 * q[3]) *
                 std::sin(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1]);
    f_C3_1_tmp = 0.00076206 * dq[0] * std::cos(2.0 * q[4]) * std::cos(q[1]) *
                 std::cos(q[2]) * std::sin(q[3]);
    g_C3_1_tmp = 0.00038103 * dq[0] * std::sin(2.0 * q[4]) * std::cos(q[1]) *
                 std::cos(q[2]) * std::cos(q[3]);
    h_C3_1_tmp = 0.00076206 * dq[0] * std::cos(2.0 * q[4]) * std::sin(q[1]) *
                 std::sin(q[2]) * std::sin(q[3]);
    i_C3_1_tmp = 0.00012089 * dq[0] * std::sin(2.0 * q[3]) * std::cos(q[1]) *
                 std::sin(q[2]) * std::sin(q[4]);
    qb_C1_1_tmp = 0.00012089 * dq[0] * std::sin(2.0 * q[3]) * std::cos(q[2]) *
                  std::sin(q[1]) * std::sin(q[4]);
    C1_6_tmp_tmp = 0.00038103 * dq[0] * std::sin(2.0 * q[4]) * std::cos(q[3]) *
                   std::sin(q[1]) * std::sin(q[2]);
    b_C1_6_tmp = 0.00012089 * dq[1] * std::cos(2.0 * q[3]) * std::sin(q[4]);
    coriolisMatrix[26] =
        ((((((((((((((((((((((((((((((((((((((fb_coriolisMatrix_tmp +
                                              s_coriolisMatrix_tmp) +
                                             b_C1_6_tmp) +
                                            coriolisMatrix_tmp) -
                                           t_coriolisMatrix_tmp) -
                                          b_coriolisMatrix_tmp) +
                                         kb_coriolisMatrix_tmp) +
                                        lb_coriolisMatrix_tmp) +
                                       u_coriolisMatrix_tmp) -
                                      v_coriolisMatrix_tmp) +
                                     0.0016597 * dq[3] * std::cos(q[3]) *
                                         std::sin(q[4])) +
                                    0.0033194 * dq[3] * std::cos(q[4]) *
                                        std::sin(q[3])) +
                                   0.0033194 * dq[4] * std::cos(q[3]) *
                                       std::sin(q[4])) +
                                  0.0020785 * dq[4] * std::cos(q[4]) *
                                      std::sin(q[3])) -
                                 0.0001351 * dq[5] * c_C1_2_tmp_tmp_tmp *
                                     b_C1_1_tmp_tmp_tmp) -
                                0.0002702 * dq[5] * d_C1_2_tmp_tmp_tmp *
                                    C1_1_tmp_tmp_tmp) -
                               w_coriolisMatrix_tmp) -
                              x_coriolisMatrix_tmp) +
                             ob_coriolisMatrix_tmp) +
                            pb_coriolisMatrix_tmp) +
                           d_coriolisMatrix_tmp_tmp) -
                          gb_coriolisMatrix_tmp) +
                         hb_coriolisMatrix_tmp) +
                        C1_2_tmp) +
                       e_C1_2_tmp_tmp) +
                      m_C3_1_tmp) +
                     l_C3_1_tmp) +
                    k_C3_1_tmp) -
                   j_C3_1_tmp) +
                  c_C3_1_tmp) +
                 d_C3_1_tmp) -
                e_C3_1_tmp) +
               ib_coriolisMatrix_tmp) -
              jb_coriolisMatrix_tmp) +
             f_C3_1_tmp) +
            g_C3_1_tmp) +
           h_C3_1_tmp) -
          i_C3_1_tmp) +
         qb_C1_1_tmp) +
        C1_6_tmp_tmp;
    b_C1_6_tmp_tmp = 0.0002702 * dq[3] * std::cos(q[3]) * std::sin(q[4]);
    c_C1_6_tmp = 0.0001351 * dq[3] * std::sin(q[3]);
    d_C1_6_tmp = 7.8E-5 * dq[0] * std::sin(q[1] - q[2]);
    e_C1_6_tmp = 0.0001351 * dq[3] * std::cos(q[4]) * std::sin(q[3]);
    f_C1_6_tmp = 0.0001351 * dq[4] * std::cos(q[3]) * std::sin(q[4]);
    g_C1_6_tmp = 0.0002702 * dq[4] * std::cos(q[4]) * std::sin(q[3]);
    h_C1_6_tmp = 0.0001351 * dq[0] * std::cos(q[1] - q[2]) * std::sin(q[3]);
    i_C1_6_tmp = 0.000234 * dq[0] * std::sin(q[1] - q[2]) * std::cos(q[4]);
    C3_1_tmp = 0.0002702 * dq[0] * std::cos(q[1] - q[2]) * std::cos(q[3]) *
               std::sin(q[4]);
    b_C3_1_tmp = 0.0001351 * dq[0] * std::cos(q[1] - q[2]) * std::cos(q[4]) *
                 std::sin(q[3]);
    coriolisMatrix[32] =
        ((((((((c_C1_6_tmp - d_C1_6_tmp) - b_C1_6_tmp_tmp) - e_C1_6_tmp) -
             f_C1_6_tmp) -
            g_C1_6_tmp) +
           h_C1_6_tmp) -
          i_C1_6_tmp) -
         C3_1_tmp) -
        b_C3_1_tmp;
    d1 = 3.0E-8 * dq[1] * std::cos(q[1]);
    d3 = 2.35E-8 * dq[1] * std::cos(q[1]);
    d4 = 2.35E-8 * dq[2] * std::cos(q[1]);
    pb_C1_1_tmp = 3.0E-8 * dq[2] * std::cos(q[1]);
    coriolisMatrix[3] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0.0010525 * dq[0] * std::sin(2.0 * q[3]) - 0.00041432 * dq[0] * std::sin(q[3])) - d_coriolisMatrix_tmp) - d10) + e_coriolisMatrix_tmp) - 0.0034398 * dq[1] * std::cos(q[2]) * std::sin(q[1])) - 0.0085823 * dq[0] * std::cos(q[3]) * std::sin(q[2])) + 0.017165 * dq[1] * c_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0034398 * dq[2] * std::cos(q[1]) * std::sin(q[2])) + 0.0034398 * dq[2] * std::cos(q[2]) * std::sin(q[1])) + 0.00012833 * dq[0] * std::cos(q[3]) * std::sin(q[4])) + 6.4164E-5 * dq[0] * std::cos(q[4]) * std::sin(q[3])) + 2.0E-7 * dq[3] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.00021999 * dq[0] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4])) + 0.00027499 * dq[0] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3])) + 0.00065996 * dq[4] * std::sin(2.0 * q[4]) * std::sin(q[1]) * std::sin(q[2])) - 0.0010525 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * std::sin(2.0 * q[3])) - 0.0010525 * dq[0] * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(2.0 * q[3])) - 0.010222 * dq[1] * std::cos(q[1]) * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 4.0E-8 * dq[1] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 4.0E-8 * dq[1] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - d5) + d7) + 0.010222 * dq[2] * std::cos(q[1]) * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 4.0E-8 * dq[2] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 4.0E-8 * dq[2] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.0013291 * dq[0] * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[2])) - 0.0053163 * dq[1] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0026582 * dq[1] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + d8) - d9) - 4.0E-8 * dq[3] * std::cos(q[1]) * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0010941 * dq[4] * std::cos(q[1]) * std::cos(q[3]) * std::sin(q[2])) - 0.0010941 * dq[4] * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[1])) - 4.0E-8 * dq[3] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.00024178 * dq[4] * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[4])) + 0.0001351 * dq[5] * std::cos(q[1]) * std::cos(q[3]) * std::sin(q[2])) - qb_coriolisMatrix_tmp) - 6.0E-8 * dq[4] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.010222 * dq[1] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.010222 * dq[2] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.0026581 * dq[0] * std::sin(q[2]) * std::sin(q[3]) * std::sin(q[4])) - 4.0E-8 * dq[3] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 6.0E-8 * dq[3] * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00024178 * dq[4] * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[4])) + 4.0E-8 * dq[4] * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.005111 * dq[0] * std::cos(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::cos(q[3])) + 0.005111 * dq[0] * std::cos(2.0 * q[2]) * std::sin(2.0 * q[1]) * std::cos(q[3])) + 0.0085823 * dq[0] * std::cos(2.0 * q[1]) * std::cos(q[3]) * std::sin(q[2])) - 0.0085823 * dq[0] * std::sin(2.0 * q[1]) * std::cos(q[2]) * std::cos(q[3])) - 0.002105 * dq[1] * std::cos(2.0 * q[3]) * std::cos(q[1]) * std::sin(q[2])) + 0.002105 * dq[1] * std::cos(2.0 * q[3]) * std::cos(q[2]) * std::sin(q[1])) - d6 * std::cos(q[1]) * std::sin(q[2])) + rb_coriolisMatrix_tmp) + d * std::cos(2.0 * q[3]) * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - sb_coriolisMatrix_tmp) + 0.00032998 * dq[2] * std::cos(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2])) - 0.00032998 * dq[2] * std::cos(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1])) + 0.00065996 * dq[4] * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::cos(q[2])) + 0.00024178 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * std::cos(2.0 * q[3]) * std::sin(q[4])) + d11) + 0.00019051 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[4]) * std::sin(2.0 * q[2]) * std::cos(q[3])) - 0.00019051 * dq[0] * std::cos(2.0 * q[2]) * std::cos(2.0 * q[4]) * std::sin(2.0 * q[1]) * std::cos(q[3])) - 0.00038103 * dq[0] * std::cos(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(2.0 * q[4]) * std::sin(q[3])) + 0.00038103 * dq[0] * std::cos(2.0 * q[2]) * std::sin(2.0 * q[1]) * std::sin(2.0 * q[4]) * std::sin(q[3])) + 0.00024178 * dq[0] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(q[4])) + d12) + 0.0033194 * dq[1] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0012409 * dq[1] * std::cos(q[1]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - d3 * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 2.35E-8 * dq[1] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0033194 * dq[2] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0012409 * dq[2] * std::cos(q[1]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + d4 * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 2.35E-8 * dq[2] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 3.0E-8 * dq[3] * std::cos(q[1]) * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 2.35E-8 * dq[3] * std::cos(q[1]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 1.5E-8 * dq[3] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 1.5E-8 * dq[3] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 2.85E-8 * dq[4] * std::cos(q[1]) * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 2.5E-8 * dq[4] * std::cos(q[1]) * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 2.0E-8 * dq[4] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 2.0E-8 * dq[4] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0001351 * dq[5] * std::cos(q[1]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[2])) + 0.0001351 * dq[5] * std::cos(q[2]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[1])) + d1 * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 3.0E-8 * dq[1] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0033194 * dq[1] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0012409 * dq[1] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - pb_C1_1_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 3.0E-8 * dq[2] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0033194 * dq[2] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0012409 * dq[2] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 3.5E-8 * dq[3] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 3.5E-8 * dq[3] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 3.0E-8 * dq[3] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 2.35E-8 * dq[3] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00041877 * dq[4] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.00041877 * dq[4] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 2.85E-8 * dq[4] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 2.5E-8 * dq[4] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.0002702 * dq[5] * std::cos(q[1]) * std::sin(q[2]) * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0002702 * dq[5] * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[3]) * std::sin(q[4])) + 0.00062049 * dq[0] * std::cos(2.0 * q[1]) * d_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp) - 0.00062049 * dq[0] * std::cos(2.0 * q[2]) * std::sin(2.0 * q[1]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp) - 0.00054998 * dq[1] * C1_2_tmp_tmp_tmp * std::cos(2.0 * q[4]) * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + tb_coriolisMatrix_tmp) + 0.00054998 * dq[2] * std::cos(2.0 * q[3]) * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.00054998 * dq[2] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1])) - 0.0016597 * dq[0] * std::cos(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(q[3]) * std::sin(q[4])) + 0.0016597 * dq[0] * std::cos(2.0 * q[2]) * std::sin(2.0 * q[1]) * std::sin(q[3]) * std::sin(q[4])) + 0.00043998 * dq[1] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2])) - 0.00043998 * dq[1] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1])) - 0.00043998 * dq[2] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2])) + 0.00043998 * dq[2] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1])) - 0.00021998 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4])) - 0.00027498 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3])) - 0.00021998 * dq[0] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(2.0 * q[4])) - 0.00027498 * dq[0] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(2.0 * q[3])) - 0.0013291 * dq[0] * std::cos(2.0 * q[1]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[2])) + 0.0013291 * dq[0] * std::sin(2.0 * q[1]) * std::cos(q[2]) * std::cos(q[3]) * std::cos(q[4])) + 0.00024179 * dq[1] * std::cos(2.0 * q[3]) * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2])) - 0.00024179 * dq[1] * std::cos(2.0 * q[3]) * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1])) + 0.00038103 * dq[1] * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00076206 * dq[1] * std::sin(2.0 * q[4]) * std::cos(q[1]) * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp) - 0.00024179 * dq[2] * std::cos(2.0 * q[3]) * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2])) + 0.00024179 * dq[2] * std::cos(2.0 * q[3]) * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1])) - 0.00038103 * dq[2] * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00076206 * dq[2] * std::sin(2.0 * q[4]) * std::cos(q[1]) * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp) - 3.0E-9 * dq[3] * b_C1_2_tmp_tmp_tmp * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 3.0E-9 * dq[3] * std::cos(2.0 * q[4]) * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.00076206 * dq[4] * std::cos(2.0 * q[4]) * std::cos(q[1]) * std::cos(q[3]) * std::sin(q[2])) + 0.00076206 * dq[4] * std::cos(2.0 * q[4]) * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[1])) + 0.0026581 * dq[0] * std::cos(2.0 * q[1]) * std::sin(q[2]) * std::sin(q[3]) * std::sin(q[4])) - 0.0026581 * dq[0] * std::sin(2.0 * q[1]) * std::cos(q[2]) * std::sin(q[3]) * std::sin(q[4])) + 0.00038103 * dq[1] * std::cos(2.0 * q[4]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 0.00048357 * dq[1] * std::sin(2.0 * q[3]) * std::cos(q[1]) * std::sin(q[2]) * std::sin(q[4])) + 0.00048357 * dq[1] * std::sin(2.0 * q[3]) * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[4])) + b_coriolisMatrix_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) - 0.00038103 * dq[2] * std::cos(2.0 * q[4]) * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00048357 * dq[2] * std::sin(2.0 * q[3]) * std::cos(q[1]) * std::sin(q[2]) * std::sin(q[4])) - 0.00048357 * dq[2] * std::sin(2.0 * q[3]) * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[4])) - c_coriolisMatrix_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp) + 2.0E-9 * dq[3] * c_C1_1_tmp_tmp_tmp * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - 2.0E-9 * dq[3] * std::sin(2.0 * q[4]) * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00038103 * dq[4] * std::sin(2.0 * q[4]) * std::cos(q[1]) * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - e_coriolisMatrix_tmp_tmp * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp;
    d_coriolisMatrix_tmp = 0.0010941 * dq[4] * std::sin(q[3]);
    coriolisMatrix[9] =
        ((((((((((((((((((((((((((((((((((((((((((((((db_coriolisMatrix_tmp +
                                                      d_coriolisMatrix_tmp) +
                                                     coriolisMatrix_tmp_tmp) +
                                                    eb_coriolisMatrix_tmp) +
                                                   mb_coriolisMatrix_tmp) -
                                                  g_coriolisMatrix_tmp) -
                                                 b_coriolisMatrix_tmp) -
                                                i_coriolisMatrix_tmp) -
                                               d2) +
                                              y_coriolisMatrix_tmp) -
                                             r_coriolisMatrix_tmp) +
                                            0.017165 * dq[0] * std::cos(q[1]) *
                                                C1_1_tmp_tmp_tmp) -
                                           0.017164 * dq[1] * std::cos(q[3]) *
                                               std::sin(q[2])) +
                                          0.0004188 * dq[4] *
                                              c_C1_2_tmp_tmp_tmp *
                                              b_C1_1_tmp_tmp_tmp) -
                                         cb_coriolisMatrix_tmp) -
                                        nb_coriolisMatrix_tmp) -
                                       ab_coriolisMatrix_tmp) -
                                      p_C1_1_tmp_tmp) +
                                     bb_coriolisMatrix_tmp) +
                                    d_C1_1_tmp_tmp) -
                                   f_C1_1_tmp_tmp) -
                                  gb_coriolisMatrix_tmp) +
                                 hb_coriolisMatrix_tmp) -
                                0.0053164 * dq[0] * std::cos(q[1]) *
                                    std::cos(q[3]) * std::sin(q[4])) -
                               0.0026582 * dq[0] * std::cos(q[1]) *
                                   std::cos(q[4]) * std::sin(q[3])) +
                              0.0026582 * dq[1] * std::cos(q[3]) *
                                  std::cos(q[4]) * std::sin(q[2])) -
                             h_C1_1_tmp_tmp) -
                            0.0053165 * dq[1] * std::sin(q[2]) *
                                std::sin(q[3]) * std::sin(q[4])) -
                           j_C1_1_tmp_tmp) +
                          e_C1_1_tmp_tmp) -
                         g_C1_1_tmp_tmp) +
                        i_C1_1_tmp_tmp) +
                       k_C1_1_tmp_tmp) +
                      l_C1_1_tmp_tmp) +
                     m_C1_1_tmp_tmp) +
                    n_C1_1_tmp_tmp) -
                   o_C1_1_tmp_tmp) +
                  q_C1_1_tmp_tmp) +
                 j_coriolisMatrix_tmp) -
                k_coriolisMatrix_tmp) +
               ib_coriolisMatrix_tmp) -
              jb_coriolisMatrix_tmp) +
             l_coriolisMatrix_tmp) +
            m_coriolisMatrix_tmp) +
           n_coriolisMatrix_tmp) -
          o_coriolisMatrix_tmp) +
         p_coriolisMatrix_tmp) +
        q_coriolisMatrix_tmp;
    coriolisMatrix[15] =
        (((((((((((((((((((((((((((((((((((((((((0.0021051 * dq[1] *
                                                     std::sin(2.0 * q[3]) -
                                                 0.0021051 * dq[2] *
                                                     std::sin(2.0 * q[3])) -
                                                d_coriolisMatrix_tmp) -
                                               coriolisMatrix_tmp_tmp) -
                                              0.00048356 * dq[1] *
                                                  std::cos(2.0 * q[3]) *
                                                  std::sin(q[4])) -
                                             coriolisMatrix_tmp) +
                                            g_coriolisMatrix_tmp) +
                                           b_coriolisMatrix_tmp) +
                                          i_coriolisMatrix_tmp) +
                                         d2) -
                                        y_coriolisMatrix_tmp) +
                                       r_coriolisMatrix_tmp) -
                                      0.0004188 * dq[4] * std::cos(q[3]) *
                                          std::sin(q[4])) +
                                     cb_coriolisMatrix_tmp) +
                                    nb_coriolisMatrix_tmp) +
                                   ab_coriolisMatrix_tmp) +
                                  p_C1_1_tmp_tmp) -
                                 bb_coriolisMatrix_tmp) -
                                d_C1_1_tmp_tmp) +
                               f_C1_1_tmp_tmp) +
                              gb_coriolisMatrix_tmp) -
                             hb_coriolisMatrix_tmp) +
                            h_C1_1_tmp_tmp) +
                           j_C1_1_tmp_tmp) -
                          e_C1_1_tmp_tmp) +
                         g_C1_1_tmp_tmp) -
                        i_C1_1_tmp_tmp) -
                       k_C1_1_tmp_tmp) -
                      l_C1_1_tmp_tmp) -
                     m_C1_1_tmp_tmp) -
                    n_C1_1_tmp_tmp) +
                   o_C1_1_tmp_tmp) -
                  q_C1_1_tmp_tmp) -
                 j_coriolisMatrix_tmp) +
                k_coriolisMatrix_tmp) -
               ib_coriolisMatrix_tmp) +
              jb_coriolisMatrix_tmp) -
             l_coriolisMatrix_tmp) -
            m_coriolisMatrix_tmp) -
           n_coriolisMatrix_tmp) +
          o_coriolisMatrix_tmp) -
         p_coriolisMatrix_tmp) -
        q_coriolisMatrix_tmp;
    coriolisMatrix[21] =
        2.7105E-20 * dq[4] *
        (2.4348E+16 * c_C1_1_tmp_tmp_tmp + 8.9201E+15 * b_C1_1_tmp_tmp_tmp);
    d_coriolisMatrix_tmp =
        0.0015241 * dq[1] * c_coriolisMatrix_tmp * C1_1_tmp_tmp_tmp;
    e_coriolisMatrix_tmp =
        0.0015241 * dq[2] * c_coriolisMatrix_tmp * C1_1_tmp_tmp_tmp;
    coriolisMatrix[27] =
        (((((((((((((((((((((0.5 * dq[3] *
                                 (0.0013199 * c_C1_1_tmp_tmp_tmp +
                                  0.00048356 * b_C1_1_tmp_tmp_tmp) +
                             0.0018562 * dq[1] * C1_1_tmp_tmp_tmp) -
                            0.0018562 * dq[2] * C1_1_tmp_tmp_tmp) +
                           0.00048356 * dq[4] * b_C1_1_tmp_tmp_tmp) -
                          0.000234 * dq[5] * b_C1_1_tmp_tmp_tmp) +
                         0.0004188 * dq[1] * c_C1_2_tmp_tmp_tmp *
                             b_C1_1_tmp_tmp_tmp) -
                        0.0004188 * dq[2] * c_C1_2_tmp_tmp_tmp *
                            b_C1_1_tmp_tmp_tmp) -
                       d_coriolisMatrix_tmp) +
                      e_coriolisMatrix_tmp) +
                     0.0018562 * dq[0] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp *
                         b_C1_1_tmp_tmp) -
                    0.0018562 * dq[0] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp *
                        b_C1_2_tmp_tmp) +
                   0.00024178 * dq[0] * std::cos(q[1]) * C1_2_tmp_tmp *
                       b_C1_1_tmp_tmp_tmp) -
                  0.00076206 * dq[1] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp *
                      b_C1_1_tmp_tmp_tmp) +
                 0.00076206 * dq[2] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp *
                     b_C1_1_tmp_tmp_tmp) +
                0.00024178 * dq[0] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp *
                    b_C1_1_tmp_tmp_tmp) +
               0.0013199 * dq[0] * c_C1_2_tmp_tmp * C1_2_tmp_tmp *
                   d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) -
              0.0004188 * dq[0] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp *
                  C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) +
             0.0004188 * dq[0] * C1_2_tmp_tmp * b_C1_2_tmp_tmp *
                 C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) +
            0.0013199 * dq[0] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp *
                b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) -
           0.0015241 * dq[0] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp *
               c_coriolisMatrix_tmp * b_C1_1_tmp_tmp) +
          0.0015241 * dq[0] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp *
              c_coriolisMatrix_tmp * b_C1_2_tmp_tmp) +
         0.00076206 * dq[0] * c_C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp *
             b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) -
        0.00076206 * dq[0] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp *
            b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp;
    coriolisMatrix_tmp_tmp =
        (2.0 * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp - C1_1_tmp_tmp_tmp) +
        d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp;
    c_coriolisMatrix_tmp = 0.0001351 * dq[1] * coriolisMatrix_tmp_tmp;
    coriolisMatrix[33] =
        ((0.0001351 * dq[2] * coriolisMatrix_tmp_tmp - c_coriolisMatrix_tmp) -
         0.000234 * dq[4] * b_C1_1_tmp_tmp_tmp) -
        0.0001351 * dq[0] * C1_6_tmp *
            ((c_C1_2_tmp_tmp_tmp - c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp) +
             2.0 * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp);
    coriolisMatrix[4] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0.001256 * dq[0] * std::sin(q[4]) - 0.00016499 * dq[0] * std::sin(2.0 * q[4])) - 6.0447E-5 * dq[0] * std::cos(2.0 * q[3]) * std::sin(q[4])) - d10) + 0.0006317 * dq[1] * std::cos(q[1]) * std::sin(q[2])) - 0.0006317 * dq[1] * std::cos(q[2]) * std::sin(q[1])) - 0.0006317 * dq[2] * std::cos(q[1]) * std::sin(q[2])) + 0.0006317 * dq[2] * std::cos(q[2]) * std::sin(q[1])) - 0.002302 * dq[0] * std::cos(q[2]) * std::sin(q[4])) + 6.4164E-5 * dq[0] * std::cos(q[3]) * std::sin(q[4])) + 0.00012833 * dq[0] * std::cos(q[4]) * std::sin(q[3])) + 0.00027499 * dq[0] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4])) + 0.00021999 * dq[0] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3])) + 0.002302 * dq[0] * std::sin(2.0 * q[1]) * std::sin(q[2]) * std::sin(q[4])) - 0.00065996 * dq[3] * std::sin(2.0 * q[4]) * std::sin(q[1]) * std::sin(q[2])) - 0.00049498 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * std::sin(2.0 * q[4])) - 0.00049498 * dq[0] * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(2.0 * q[4])) + 0.0010941 * dq[1] * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[3])) + 2.0E-9 * dq[1] * std::cos(q[1]) * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - d5) + d7) - 0.0010941 * dq[2] * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[3])) + 0.0026581 * dq[0] * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[2])) - 0.0026582 * dq[1] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0053163 * dq[1] * std::cos(q[1]) * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 2.0E-9 * dq[2] * std::cos(q[1]) * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) + d8) - d9) - 0.0010941 * dq[3] * std::cos(q[1]) * std::cos(q[3]) * std::sin(q[2])) + 0.0010941 * dq[3] * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[1])) - 0.00024178 * dq[3] * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[4])) - 6.0E-8 * dq[3] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 1.3553E-20 * dq[4] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 5.0E-9 * dq[4] * std::cos(q[1]) * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 5.0E-9 * dq[4] * C1_2_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 4.0E-8 * dq[4] * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 0.000234 * dq[5] * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[4])) + 0.0010941 * dq[1] * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3])) + 2.0E-9 * dq[1] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0010941 * dq[2] * std::sin(q[1]) * std::sin(q[2]) * C1_1_tmp_tmp_tmp) - 0.0013291 * dq[0] * std::sin(q[2]) * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 2.0E-9 * dq[2] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - h_coriolisMatrix_tmp) + 4.0E-8 * dq[3] * std::sin(q[1]) * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 1.3553E-20 * dq[4] * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 6.0E-8 * dq[4] * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.000234 * dq[5] * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[4])) - 0.0014978 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * std::sin(q[4])) - 0.0014978 * dq[0] * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(q[4])) + 0.002302 * dq[0] * std::cos(2.0 * q[1]) * std::cos(q[2]) * std::sin(q[4])) - 0.00065996 * dq[3] * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::cos(q[2])) + 6.0445E-5 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * std::cos(2.0 * q[3]) * std::sin(q[4])) + d11) + 0.00076206 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[4]) * std::sin(2.0 * q[2]) * std::cos(q[3])) - 0.00076206 * dq[0] * std::cos(2.0 * q[2]) * std::cos(2.0 * q[4]) * std::sin(2.0 * q[1]) * std::cos(q[3])) - 0.00038102 * dq[0] * std::cos(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(2.0 * q[4]) * std::sin(q[3])) + 0.00038102 * dq[0] * std::cos(2.0 * q[2]) * std::sin(2.0 * q[1]) * std::sin(2.0 * q[4]) * std::sin(q[3])) + 6.0445E-5 * dq[0] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(q[4])) + d12) + 0.0016597 * dq[1] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0033194 * dq[1] * std::cos(q[1]) * std::cos(q[2]) * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - d1 * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 3.0E-8 * dq[1] * std::cos(q[2]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0016597 * dq[2] * c_C1_2_tmp_tmp * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0033194 * dq[2] * std::cos(q[1]) * std::cos(q[2]) * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) + pb_C1_1_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) - 3.0E-8 * dq[2] * std::cos(q[2]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 2.35E-8 * dq[3] * std::cos(q[1]) * std::cos(q[2]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 3.0E-8 * dq[3] * std::cos(q[1]) * std::cos(q[2]) * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 3.5E-8 * dq[3] * std::cos(q[1]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 3.5E-8 * dq[3] * std::cos(q[2]) * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) + 2.5E-8 * dq[4] * std::cos(q[1]) * std::cos(q[2]) * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 2.85E-8 * dq[4] * std::cos(q[1]) * std::cos(q[2]) * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp_tmp) - 3.0E-8 * dq[4] * c_C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp) + 3.0E-8 * dq[4] * C1_2_tmp_tmp * c_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp) - 0.0002702 * dq[5] * std::cos(q[1]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[2])) + 0.0002702 * dq[5] * std::cos(q[2]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[1])) + d3 * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 2.35E-8 * dq[1] * std::cos(q[2]) * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0016597 * dq[1] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 0.0033194 * dq[1] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) - d4 * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 2.35E-8 * dq[2] * std::cos(q[2]) * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0016597 * dq[2] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.0033194 * dq[2] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 0.00041882 * dq[3] * c_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 0.00041882 * dq[3] * C1_2_tmp_tmp * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 2.35E-8 * dq[3] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 3.0E-8 * dq[3] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + 2.0E-8 * dq[4] * std::cos(q[1]) * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) - 2.0E-8 * dq[4] * std::cos(q[2]) * b_C1_2_tmp_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 2.5E-8 * dq[4] * c_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * b_C1_1_tmp_tmp_tmp) + 2.85E-8 * dq[4] * d_C1_2_tmp_tmp_tmp * b_C1_2_tmp_tmp * b_C1_1_tmp_tmp * C1_1_tmp_tmp_tmp) + f_coriolisMatrix_tmp) - ub_coriolisMatrix_tmp) + vb_coriolisMatrix_tmp) - 0.0016597 * dq[0] * std::cos(2.0 * q[2]) * std::sin(2.0 * q[1]) * std::cos(q[3]) * std::cos(q[4])) - 0.00043998 * dq[1] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2])) + 0.00043998 * dq[1] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1])) + 0.00043998 * dq[2] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2])) - 0.00043998 * dq[2] * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1])) - 0.00062049 * dq[0] * std::cos(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(q[3]) * std::sin(q[4])) + 0.00062049 * dq[0] * std::cos(2.0 * q[2]) * std::sin(2.0 * q[1]) * std::sin(q[3]) * std::sin(q[4])) + 0.00054998 * dq[1] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2])) - 0.00054998 * dq[1] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1])) - 0.00054998 * dq[2] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2])) + 0.00054998 * dq[2] * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1])) - 0.00027498 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * std::cos(2.0 * q[3]) * std::sin(2.0 * q[4])) - 0.00021998 * dq[0] * std::cos(2.0 * q[1]) * std::cos(2.0 * q[2]) * std::cos(2.0 * q[4]) * std::sin(2.0 * q[3])) - 0.00027498 * dq[0] * std::cos(2.0 * q[3]) * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(2.0 * q[4])) - 0.00021998 * dq[0] * std::cos(2.0 * q[4]) * std::sin(2.0 * q[1]) * std::sin(2.0 * q[2]) * std::sin(2.0 * q[3])) - 0.0026581 * dq[0] * std::cos(2.0 * q[1]) * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[2])) + 0.0026581 * dq[0] * std::sin(2.0 * q[1]) * std::cos(q[2]) * std::cos(q[3]) * std::cos(q[4])) + 0.00024178 * dq[1] * std::cos(2.0 * q[3]) * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2])) - 0.00024178 * dq[1] * std::cos(2.0 * q[3]) * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1])) + 0.00076206 * dq[1] * std::cos(2.0 * q[4]) * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[3])) + 0.00038102 * dq[1] * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[3])) - 0.00024178 * dq[2] * std::cos(2.0 * q[3]) * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2])) + 0.00024178 * dq[2] * std::cos(2.0 * q[3]) * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1])) - 0.00076206 * dq[2] * std::cos(2.0 * q[4]) * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[3])) - 0.00038102 * dq[2] * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[3])) + 0.00076206 * dq[3] * std::cos(2.0 * q[4]) * std::cos(q[1]) * std::cos(q[3]) * std::sin(q[2])) - 0.00076206 * dq[3] * std::cos(2.0 * q[4]) * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[1])) + 0.0013291 * dq[0] * std::cos(2.0 * q[1]) * std::sin(q[2]) * std::sin(q[3]) * std::sin(q[4])) - 0.0013291 * dq[0] * std::sin(2.0 * q[1]) * std::cos(q[2]) * std::sin(q[3]) * std::sin(q[4])) + 0.00076206 * dq[1] * std::cos(2.0 * q[4]) * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3])) - 0.00012089 * dq[1] * std::sin(2.0 * q[3]) * std::cos(q[1]) * std::sin(q[2]) * std::sin(q[4])) + 0.00012089 * dq[1] * std::sin(2.0 * q[3]) * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[4])) + 0.00038102 * dq[1] * std::sin(2.0 * q[4]) * std::cos(q[3]) * std::sin(q[1]) * std::sin(q[2])) - 0.00076206 * dq[2] * std::cos(2.0 * q[4]) * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3])) + 0.00012089 * dq[2] * std::sin(2.0 * q[3]) * std::cos(q[1]) * std::sin(q[2]) * std::sin(q[4])) - 0.00012089 * dq[2] * std::sin(2.0 * q[3]) * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[4])) - 0.00038102 * dq[2] * std::sin(2.0 * q[4]) * std::cos(q[3]) * std::sin(q[1]) * std::sin(q[2])) - 0.00038102 * dq[3] * std::sin(2.0 * q[4]) * std::cos(q[1]) * std::sin(q[2]) * std::sin(q[3])) + 0.00038102 * dq[3] * std::sin(2.0 * q[4]) * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[3]);
    coriolisMatrix[10] =
        (((((((((((((((((((((((((((((((((((((((fb_coriolisMatrix_tmp -
                                               s_coriolisMatrix_tmp) -
                                              0.5 * dq[5] *
                                                  (0.0002702 * std::cos(q[3]) *
                                                       std::sin(q[4]) +
                                                   0.0005404 * std::cos(q[4]) *
                                                       std::sin(q[3]))) +
                                             b_C1_6_tmp) +
                                            coriolisMatrix_tmp) -
                                           t_coriolisMatrix_tmp) -
                                          b_coriolisMatrix_tmp) +
                                         kb_coriolisMatrix_tmp) +
                                        lb_coriolisMatrix_tmp) +
                                       u_coriolisMatrix_tmp) -
                                      v_coriolisMatrix_tmp) -
                                     0.0046041 * dq[1] * std::cos(q[2]) *
                                         std::sin(q[4])) -
                                    0.0004188 * dq[3] * c_C1_2_tmp_tmp_tmp *
                                        b_C1_1_tmp_tmp_tmp) -
                                   w_coriolisMatrix_tmp) -
                                  x_coriolisMatrix_tmp) +
                                 ob_coriolisMatrix_tmp) +
                                pb_coriolisMatrix_tmp) +
                               d_coriolisMatrix_tmp_tmp) -
                              gb_coriolisMatrix_tmp) +
                             hb_coriolisMatrix_tmp) -
                            0.0026582 * dq[0] * std::cos(q[1]) *
                                std::cos(q[3]) * std::sin(q[4])) -
                           0.0053164 * dq[0] * std::cos(q[1]) * std::cos(q[4]) *
                               std::sin(q[3])) +
                          0.0053165 * dq[1] * std::cos(q[3]) * std::cos(q[4]) *
                              std::sin(q[2])) +
                         C1_2_tmp) -
                        0.0026582 * dq[1] * std::sin(q[2]) * std::sin(q[3]) *
                            std::sin(q[4])) +
                       e_C1_2_tmp_tmp) +
                      m_C3_1_tmp) +
                     l_C3_1_tmp) +
                    k_C3_1_tmp) -
                   j_C3_1_tmp) +
                  c_C3_1_tmp) +
                 d_C3_1_tmp) -
                e_C3_1_tmp) +
               ib_coriolisMatrix_tmp) -
              jb_coriolisMatrix_tmp) +
             f_C3_1_tmp) +
            g_C3_1_tmp) +
           h_C3_1_tmp) -
          i_C3_1_tmp) +
         qb_C1_1_tmp) +
        C1_6_tmp_tmp;
    coriolisMatrix[16] =
        ((((((((((((((((((((((((((((((((((((((0.00032998 * dq[2] *
                                                  std::sin(2.0 * q[4]) -
                                              0.00032998 * dq[1] *
                                                  std::sin(2.0 * q[4])) -
                                             0.0027538 * dq[1] *
                                                 std::sin(q[4])) +
                                            0.0027538 * dq[2] *
                                                std::sin(q[4])) +
                                           s_coriolisMatrix_tmp) -
                                          b_C1_6_tmp) -
                                         coriolisMatrix_tmp) +
                                        t_coriolisMatrix_tmp) +
                                       b_coriolisMatrix_tmp) -
                                      kb_coriolisMatrix_tmp) -
                                     lb_coriolisMatrix_tmp) -
                                    u_coriolisMatrix_tmp) +
                                   v_coriolisMatrix_tmp) +
                                  0.0004188 * dq[3] * std::cos(q[3]) *
                                      std::sin(q[4])) +
                                 0.0001351 * dq[5] * std::cos(q[3]) *
                                     std::sin(q[4])) +
                                0.0002702 * dq[5] * std::cos(q[4]) *
                                    std::sin(q[3])) +
                               w_coriolisMatrix_tmp) +
                              x_coriolisMatrix_tmp) -
                             ob_coriolisMatrix_tmp) -
                            pb_coriolisMatrix_tmp) -
                           d_coriolisMatrix_tmp_tmp) +
                          gb_coriolisMatrix_tmp) -
                         hb_coriolisMatrix_tmp) -
                        C1_2_tmp) -
                       e_C1_2_tmp_tmp) -
                      m_C3_1_tmp) -
                     l_C3_1_tmp) -
                    k_C3_1_tmp) +
                   j_C3_1_tmp) -
                  c_C3_1_tmp) -
                 d_C3_1_tmp) +
                e_C3_1_tmp) -
               ib_coriolisMatrix_tmp) +
              jb_coriolisMatrix_tmp) -
             f_C3_1_tmp) -
            g_C3_1_tmp) -
           h_C3_1_tmp) +
          i_C3_1_tmp) -
         qb_C1_1_tmp) -
        C1_6_tmp_tmp;
    coriolisMatrix[22] =
        ((((((((((((((((((((0.0018562 * dq[2] * std::sin(q[3]) -
                            0.0018562 * dq[1] * std::sin(q[3])) -
                           0.5 * dq[3] *
                               (0.0013199 * std::sin(2.0 * q[4]) +
                                0.00048356 * std::sin(q[4]))) +
                          0.000234 * dq[5] * std::sin(q[4])) -
                         0.0004188 * dq[1] * std::cos(q[3]) * std::sin(q[4])) +
                        0.0004188 * dq[2] * std::cos(q[3]) * std::sin(q[4])) +
                       d_coriolisMatrix_tmp) -
                      e_coriolisMatrix_tmp) -
                     0.0018562 * dq[0] * std::cos(q[1]) * std::cos(q[3]) *
                         std::sin(q[2])) +
                    0.0018562 * dq[0] * std::cos(q[2]) * std::cos(q[3]) *
                        std::sin(q[1])) -
                   0.00024178 * dq[0] * std::cos(q[1]) * std::cos(q[2]) *
                       std::sin(q[4])) +
                  0.00076206 * dq[1] * std::cos(q[3]) * std::cos(q[4]) *
                      std::sin(q[4])) -
                 0.00076206 * dq[2] * std::cos(q[3]) * std::cos(q[4]) *
                     std::sin(q[4])) -
                0.00024178 * dq[0] * std::sin(q[1]) * std::sin(q[2]) *
                    std::sin(q[4])) -
               0.0013199 * dq[0] * std::cos(q[1]) * std::cos(q[2]) *
                   std::cos(q[4]) * std::sin(q[4])) +
              0.0004188 * dq[0] * std::cos(q[1]) * std::sin(q[2]) *
                  std::sin(q[3]) * std::sin(q[4])) -
             0.0004188 * dq[0] * std::cos(q[2]) * std::sin(q[1]) *
                 std::sin(q[3]) * std::sin(q[4])) -
            0.0013199 * dq[0] * std::cos(q[4]) * std::sin(q[1]) *
                std::sin(q[2]) * std::sin(q[4])) +
           0.0015241 * dq[0] * std::cos(q[1]) * std::cos(q[3]) *
               (d_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp) * b_C1_1_tmp_tmp) -
          0.0015241 * dq[0] * std::cos(q[2]) * std::cos(q[3]) *
              (d_C1_2_tmp_tmp_tmp * d_C1_2_tmp_tmp_tmp) * b_C1_2_tmp_tmp) -
         0.00076206 * dq[0] * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2]) *
             std::sin(q[3]) * std::sin(q[4])) +
        0.00076206 * dq[0] * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1]) *
            std::sin(q[3]) * std::sin(q[4]);
    coriolisMatrix[28] = 0.0;
    coriolisMatrix_tmp = 0.0002702 * std::cos(q[3]) * std::sin(q[4]) +
                         0.0005404 * std::cos(q[4]) * std::sin(q[3]);
    b_coriolisMatrix_tmp = 0.5 * dq[1] * coriolisMatrix_tmp;
    coriolisMatrix_tmp *= 0.5 * dq[2];
    coriolisMatrix[34] =
        ((0.5 * dq[0] *
              ((0.000468 * C2_6_tmp * b_C1_1_tmp_tmp_tmp +
                0.0005404 * C1_6_tmp * c_C1_2_tmp_tmp_tmp *
                    d_C1_2_tmp_tmp_tmp) -
               0.0002702 * C1_6_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) +
          0.000234 * dq[3] * b_C1_1_tmp_tmp_tmp) -
         b_coriolisMatrix_tmp) +
        coriolisMatrix_tmp;
    coriolisMatrix[5] =
        (((((((((0.0001351 * C2_6_tmp * C1_1_tmp_tmp_tmp * C1_1_tmp_tmp -
                 7.8E-5 * std::sin(q[1] - q[2]) * (dq[1] - dq[2])) -
                0.000234 * C1_6_tmp * d_C1_2_tmp_tmp_tmp * C1_1_tmp_tmp) +
               0.0001351 * dq[3] * C1_6_tmp * c_C1_2_tmp_tmp_tmp) -
              0.000234 * dq[4] * C2_6_tmp * b_C1_1_tmp_tmp_tmp) -
             0.0002702 * C2_6_tmp * c_C1_2_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp *
                 C1_1_tmp_tmp) -
            0.0001351 * std::cos(q[1] - q[2]) * d_C1_2_tmp_tmp_tmp *
                C1_1_tmp_tmp_tmp * C1_1_tmp_tmp) -
           0.0001351 * dq[3] * std::sin(q[1] - q[2]) * std::cos(q[3]) *
               d_C1_2_tmp_tmp_tmp) -
          0.0002702 * dq[4] * C1_6_tmp * c_C1_2_tmp_tmp_tmp *
              d_C1_2_tmp_tmp_tmp) +
         0.0002702 * dq[3] * C1_6_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp) +
        0.0001351 * dq[4] * C1_6_tmp * C1_1_tmp_tmp_tmp * b_C1_1_tmp_tmp_tmp;
    coriolisMatrix[11] =
        ((((((((b_C1_6_tmp_tmp - c_C1_6_tmp) - d_C1_6_tmp) + e_C1_6_tmp) +
             f_C1_6_tmp) +
            g_C1_6_tmp) +
           h_C1_6_tmp) -
          i_C1_6_tmp) -
         C3_1_tmp) -
        b_C3_1_tmp;
    coriolisMatrix[17] =
        ((((((((d_C1_6_tmp + c_C1_6_tmp) - b_C1_6_tmp_tmp) - e_C1_6_tmp) -
             f_C1_6_tmp) -
            g_C1_6_tmp) -
           h_C1_6_tmp) +
          i_C1_6_tmp) +
         C3_1_tmp) +
        b_C3_1_tmp;
    coriolisMatrix[23] =
        ((c_coriolisMatrix_tmp -
          0.0001351 * dq[2] *
              ((2.0 * std::cos(q[3]) * std::sin(q[4]) - std::sin(q[3])) +
               std::cos(q[4]) * std::sin(q[3]))) -
         0.000234 * dq[4] * std::sin(q[4])) +
        0.0001351 * dq[0] * std::sin(q[1] - q[2]) *
            ((std::cos(q[3]) - std::cos(q[3]) * std::cos(q[4])) +
             2.0 * std::sin(q[3]) * std::sin(q[4]));
    coriolisMatrix[29] =
        ((b_coriolisMatrix_tmp - 0.000234 * dq[3] * std::sin(q[4])) -
         0.5 * dq[0] *
             ((0.000468 * std::cos(q[1] - q[2]) * std::sin(q[4]) +
               0.0005404 * std::sin(q[1] - q[2]) * std::cos(q[3]) *
                   std::cos(q[4])) -
              0.0002702 * std::sin(q[1] - q[2]) * std::sin(q[3]) *
                  std::sin(q[4]))) -
        coriolisMatrix_tmp;
    coriolisMatrix[35] = 0.0;
}

void Mico::G(const double q[6], double b_G[6])
{
  double G2_tmp;
  double G_tmp;
  double b_G2_tmp;
  double b_G_tmp;
  double c_G2_tmp;
  double c_G_tmp;
  double d_G2_tmp;
  double d_G_tmp;
  double e_G2_tmp;
  double e_G_tmp;
  double f_G2_tmp;
  double f_G_tmp;
  double g_G2_tmp;
  double g_G_tmp;
  double h_G2_tmp;
  double h_G_tmp;
  G2_tmp = std::sin(q[1]);
  b_G2_tmp = std::sin(q[2]);
  c_G2_tmp = std::cos(q[1]);
  d_G2_tmp = std::cos(q[2]);
  e_G2_tmp = std::sin(q[3]);
  f_G2_tmp = std::cos(q[4]);
  g_G2_tmp = std::cos(q[3]);
  h_G2_tmp = std::sin(q[4]);
  b_G[0] = 0.0;
  G_tmp = 123084.72653826712 * c_G2_tmp * d_G2_tmp;
  b_G_tmp = 5.262020582867668E+6 * c_G2_tmp * d_G2_tmp * e_G2_tmp / 2.0E+8;
  c_G_tmp = 148102.46840279197 * c_G2_tmp * f_G2_tmp * b_G2_tmp / 1.0E+7;
  d_G_tmp = 148102.46840279197 * d_G2_tmp * f_G2_tmp * G2_tmp / 1.0E+7;
  e_G_tmp = 5.262020582867668E+6 * G2_tmp * b_G2_tmp * e_G2_tmp / 2.0E+8;
  f_G_tmp = G_tmp * g_G2_tmp * h_G2_tmp / 1.0E+8;
  G_tmp = G_tmp * f_G2_tmp * e_G2_tmp / 2.0E+8;
  g_G_tmp =
      123084.72653826712 * g_G2_tmp * G2_tmp * b_G2_tmp * h_G2_tmp / 1.0E+8;
  h_G_tmp =
      123084.72653826712 * f_G2_tmp * G2_tmp * b_G2_tmp * e_G2_tmp / 2.0E+8;
  b_G[1] =
      9.81 *
      ((((((((((((((((((1.116181E+6 * G2_tmp / 2.0E+6 +
                        4.1927301E+7 * c_G2_tmp * b_G2_tmp / 2.0E+8) -
                       4.1927301E+7 * d_G2_tmp * G2_tmp / 2.0E+8) +
                      164391.0 * G2_tmp * b_G2_tmp * e_G2_tmp / 5.0E+6) +
                     164391.0 * c_G2_tmp * d_G2_tmp * e_G2_tmp / 5.0E+6) +
                    213189.0 * c_G2_tmp * f_G2_tmp * b_G2_tmp / 2.0E+8) -
                   213189.0 * d_G2_tmp * f_G2_tmp * G2_tmp / 2.0E+8) +
                  b_G_tmp) +
                 c_G_tmp) -
                d_G_tmp) +
               e_G_tmp) -
              85507.0 * c_G2_tmp * d_G2_tmp * g_G2_tmp * h_G2_tmp / 5.0E+6) -
             85507.0 * std::cos(q[1]) * std::cos(q[2]) * f_G2_tmp * e_G2_tmp /
                 1.0E+7) -
            85507.0 * g_G2_tmp * G2_tmp * b_G2_tmp * h_G2_tmp / 5.0E+6) -
           85507.0 * f_G2_tmp * G2_tmp * b_G2_tmp * e_G2_tmp / 1.0E+7) -
          f_G_tmp) -
         G_tmp) -
        g_G_tmp) -
       h_G_tmp);
  b_G[2] =
      9.81 *
      (((((((((((((((((4.1927301E+7 * std::cos(q[2]) * std::sin(q[1]) / 2.0E+8 -
                       4.1927301E+7 * std::cos(q[1]) * std::sin(q[2]) /
                           2.0E+8) -
                      164391.0 * std::sin(q[1]) * std::sin(q[2]) *
                          std::sin(q[3]) / 5.0E+6) -
                     164391.0 * std::cos(q[1]) * std::cos(q[2]) *
                         std::sin(q[3]) / 5.0E+6) -
                    213189.0 * std::cos(q[1]) * std::cos(q[4]) *
                        std::sin(q[2]) / 2.0E+8) +
                   213189.0 * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1]) /
                       2.0E+8) -
                  b_G_tmp) -
                 c_G_tmp) +
                d_G_tmp) -
               e_G_tmp) +
              85507.0 * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[3]) *
                  std::sin(q[4]) / 5.0E+6) +
             85507.0 * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[4]) *
                 std::sin(q[3]) / 1.0E+7) +
            85507.0 * std::cos(q[3]) * std::sin(q[1]) * std::sin(q[2]) *
                std::sin(q[4]) / 5.0E+6) +
           85507.0 * std::cos(q[4]) * std::sin(q[1]) * std::sin(q[2]) *
               std::sin(q[3]) / 1.0E+7) +
          f_G_tmp) +
         G_tmp) +
        g_G_tmp) +
       h_G_tmp);
  G_tmp = 123084.72653826712 * c_G2_tmp * g_G2_tmp * f_G2_tmp * b_G2_tmp;
  b_G_tmp = 123084.72653826712 * d_G2_tmp * g_G2_tmp * f_G2_tmp * G2_tmp;
  c_G_tmp = 123084.72653826712 * c_G2_tmp * b_G2_tmp * e_G2_tmp * h_G2_tmp;
  d_G_tmp = 123084.72653826712 * d_G2_tmp * G2_tmp * e_G2_tmp * h_G2_tmp;
  b_G[3] =
      9.81 *
      (((((((((((164391.0 * d_G2_tmp * g_G2_tmp * G2_tmp / 5.0E+6 -
                 164391.0 * std::cos(q[1]) * g_G2_tmp * b_G2_tmp / 5.0E+6) -
                5.262020582867668E+6 * c_G2_tmp * g_G2_tmp * b_G2_tmp /
                    2.0E+8) +
               5.262020582867668E+6 * d_G2_tmp * g_G2_tmp * G2_tmp / 2.0E+8) +
              85507.0 * std::cos(q[1]) * g_G2_tmp * f_G2_tmp * b_G2_tmp /
                  1.0E+7) -
             85507.0 * d_G2_tmp * g_G2_tmp * f_G2_tmp * G2_tmp / 1.0E+7) -
            85507.0 * std::cos(q[1]) * b_G2_tmp * e_G2_tmp * h_G2_tmp /
                5.0E+6) +
           85507.0 * std::cos(q[2]) * G2_tmp * e_G2_tmp * h_G2_tmp / 5.0E+6) +
          G_tmp / 2.0E+8) -
         b_G_tmp / 2.0E+8) -
        c_G_tmp / 1.0E+8) +
       d_G_tmp / 1.0E+8);
  b_G[4] =
      9.81 *
      (((((((((((85507.0 * std::cos(q[1]) * std::cos(q[3]) * std::cos(q[4]) *
                     std::sin(q[2]) / 5.0E+6 -
                 213189.0 * std::cos(q[1]) * d_G2_tmp * h_G2_tmp / 2.0E+8) -
                148102.46840279197 * c_G2_tmp * d_G2_tmp * h_G2_tmp / 1.0E+7) -
               148102.46840279197 * G2_tmp * b_G2_tmp * h_G2_tmp / 1.0E+7) -
              213189.0 * G2_tmp * b_G2_tmp * h_G2_tmp / 2.0E+8) -
             85507.0 * std::cos(q[2]) * std::cos(q[3]) * std::cos(q[4]) *
                 std::sin(q[1]) / 5.0E+6) -
            85507.0 * std::cos(q[1]) * std::sin(q[2]) * std::sin(q[3]) *
                std::sin(q[4]) / 1.0E+7) +
           85507.0 * std::cos(q[2]) * std::sin(q[1]) * std::sin(q[3]) *
               std::sin(q[4]) / 1.0E+7) +
          G_tmp / 1.0E+8) -
         b_G_tmp / 1.0E+8) -
        c_G_tmp / 2.0E+8) +
       d_G_tmp / 2.0E+8);
  b_G[5] = 0.0;
}

void Mico::M(const double q[6], double b_M[36])
{
  double M1_1_tmp;
  double M1_2_tmp;
  double M1_2_tmp_tmp;
  double M1_2_tmp_tmp_tmp;
  double M2_1_tmp;
  double M6_1_tmp;
  double M_tmp;
  double b_M1_1_tmp;
  double b_M1_2_tmp;
  double b_M1_2_tmp_tmp;
  double b_M2_1_tmp;
  double b_M_tmp;
  double c_M1_1_tmp;
  double c_M1_2_tmp;
  double c_M1_2_tmp_tmp;
  double c_M2_1_tmp;
  double c_M_tmp;
  double d_M1_1_tmp;
  double d_M1_2_tmp;
  double d_M1_2_tmp_tmp;
  double d_M2_1_tmp;
  double d_M_tmp;
  double e_M1_1_tmp;
  double e_M1_2_tmp;
  double e_M2_1_tmp;
  double e_M_tmp;
  double f_M1_2_tmp;
  double f_M2_1_tmp;
  double f_M_tmp;
  double g_M1_2_tmp;
  double g_M_tmp;
  double h_M1_2_tmp;
  double h_M_tmp;
  double i_M1_2_tmp;
  double i_M_tmp;
  double j_M1_2_tmp;
  double j_M_tmp;
  double k_M_tmp;
  double l_M_tmp;
  double m_M_tmp;
  double n_M_tmp;
  double o_M_tmp;
  double p_M_tmp;
  double q_M_tmp;
  double r_M_tmp;
  double s_M_tmp;
  M1_1_tmp = std::cos(q[2]);
  b_M1_1_tmp = std::cos(q[3]);
  c_M1_1_tmp = std::cos(q[4]);
  d_M1_1_tmp = std::cos(2.0 * q[3]);
  e_M1_1_tmp = std::cos(2.0 * q[4]);
  M1_2_tmp_tmp = q[1] - q[2];
  b_M1_2_tmp_tmp = M1_2_tmp_tmp + q[3];
  M1_2_tmp = std::cos(b_M1_2_tmp_tmp + q[4]);
  M1_2_tmp_tmp_tmp = q[2] - q[1];
  c_M1_2_tmp_tmp = M1_2_tmp_tmp_tmp + q[3];
  b_M1_2_tmp = std::cos(c_M1_2_tmp_tmp + q[4]);
  c_M1_2_tmp = std::cos(M1_2_tmp_tmp);
  d_M1_2_tmp = std::cos(b_M1_2_tmp_tmp);
  e_M1_2_tmp = std::cos(c_M1_2_tmp_tmp);
  f_M1_2_tmp = std::cos(M1_2_tmp_tmp + q[4]);
  g_M1_2_tmp = std::cos(M1_2_tmp_tmp_tmp + q[4]);
  h_M1_2_tmp = std::cos(b_M1_2_tmp_tmp - q[4]);
  d_M1_2_tmp_tmp = M1_2_tmp_tmp - q[3];
  i_M1_2_tmp = std::cos(d_M1_2_tmp_tmp + q[4]);
  j_M1_2_tmp = std::cos(q[1]);
  M2_1_tmp = std::sin(q[2]);
  b_M2_1_tmp = std::sin(q[1]);
  c_M2_1_tmp = std::sin(q[3]);
  d_M2_1_tmp = std::sin(2.0 * q[3]);
  e_M2_1_tmp = std::sin(q[4]);
  f_M2_1_tmp = std::sin(2.0 * q[4]);
  M6_1_tmp = std::sin(M1_2_tmp_tmp);
  M_tmp = 2.0 * q[1] - 2.0 * q[2];
  b_M_tmp = M_tmp + 2.0 * q[3];
  c_M_tmp = 2.0 * q[2] - 2.0 * q[1];
  d_M_tmp = c_M_tmp + 2.0 * q[3];
  e_M_tmp = M_tmp - 2.0 * q[3];
  f_M_tmp = q[2] + q[3];
  g_M_tmp = M_tmp - q[3];
  h_M_tmp = q[2] - 2.0 * q[1];
  i_M_tmp = h_M_tmp + q[3];
  j_M_tmp = q[2] - q[3];
  k_M_tmp = 2.0 * q[1] - q[2];
  l_M_tmp = k_M_tmp + q[3];
  m_M_tmp = M_tmp + q[3];
  n_M_tmp = c_M_tmp + q[3];
    b_M[0] = (((((((((((((((((((((((((((((((((((((((((((((((((((((0.0019936 * std::cos(f_M_tmp + q[4]) - 3.0223E-5 * std::cos(b_M_tmp - q[4])) - 0.00012374 * std::cos(d_M_tmp + 2.0 * q[4])) - 1.3749E-5 * std::cos(e_M_tmp + 2.0 * q[4])) - 1.3749E-5 * std::cos(b_M_tmp - 2.0 * q[4])) - 0.00012374 * std::cos(b_M_tmp + 2.0 * q[4])) - 9.5258E-5 * std::cos(g_M_tmp + 2.0 * q[4])) - 0.0019936 * std::cos(i_M_tmp + q[4])) + 0.0085823 * std::cos(j_M_tmp)) - 0.002302 * std::cos(q[2] - q[4])) - 6.4163E-5 * std::cos(q[3] - q[4])) - 0.00018134 * std::cos(2.0 * q[3] + q[4])) - 0.0085823 * std::cos(l_M_tmp)) - 0.005111 * std::cos(n_M_tmp)) + 0.002302 * std::cos(k_M_tmp + q[4])) + 0.005111 * std::cos(m_M_tmp)) - 0.0014978 * std::cos(c_M_tmp + q[4])) - 0.0014978 * std::cos(M_tmp + q[4])) - 0.00066454 * std::cos(l_M_tmp - q[4])) + 0.00066454 * std::cos((k_M_tmp - q[3]) + q[4])) + 0.00051961 * std::cos(m_M_tmp - q[4])) - 0.00051961 * std::cos(g_M_tmp + q[4])) + 0.00028577 * std::cos(n_M_tmp + 2.0 * q[4])) + 9.0668E-5 * std::cos(d_M_tmp + q[4])) + 9.5258E-5 * std::cos(m_M_tmp - 2.0 * q[4])) - 0.00028577 * std::cos(m_M_tmp + 2.0 * q[4])) - 3.0223E-5 * std::cos(e_M_tmp + q[4])) + 9.0668E-5 * std::cos(b_M_tmp + q[4])) - 0.074028 * std::cos(2.0 * q[1])) + 0.0010525 * d_M1_1_tmp) - 0.00016499 * e_M1_1_tmp) - 0.0085823 * std::cos(f_M_tmp)) - 0.002302 * std::cos(q[2] + q[4])) + 0.00019249 * std::cos(q[3] + q[4])) + 0.0085823 * std::cos(i_M_tmp)) + 0.002302 * std::cos(h_M_tmp + q[4])) - 0.00066454 * std::cos(f_M_tmp - q[4])) + 0.00066454 * std::cos(j_M_tmp + q[4])) - 0.0019936 * std::cos((q[3] - q[2]) + q[4])) + 0.0019936 * std::cos(l_M_tmp + q[4])) + 0.0011401 * std::cos(n_M_tmp + q[4])) - 0.0011401 * std::cos(m_M_tmp + q[4])) - 0.060795 * M1_1_tmp) - 0.00082864 * b_M1_1_tmp) + 0.002512 * c_M1_1_tmp) + 0.060795 * std::cos(k_M_tmp)) - 0.018292 * std::cos(M_tmp)) + 6.0445E-5 * std::cos(2.0 * q[3] - q[4])) + 2.7498E-5 * std::cos(2.0 * q[3] - 2.0 * q[4])) + 0.00024749 * std::cos(2.0 * q[3] + 2.0 * q[4])) - 0.00052627 * std::cos(d_M_tmp)) - 0.00052627 * std::cos(b_M_tmp)) - 0.00024749 * std::cos(c_M_tmp + 2.0 * q[4])) - 0.00024749 * std::cos(M_tmp + 2.0 * q[4])) + 0.10044;
    k_M_tmp = M1_2_tmp_tmp + 2.0 * q[3];
    l_M_tmp = M1_2_tmp_tmp_tmp + 2.0 * q[3];
    m_M_tmp = q[1] + q[3];
    n_M_tmp = q[1] - q[3];
    o_M_tmp = M1_2_tmp_tmp - 2.0 * q[3];
    p_M_tmp = 0.0010525 * std::cos(l_M_tmp);
    q_M_tmp = 0.0010525 * std::cos(k_M_tmp);
    g_M_tmp = 9.5258E-5 * std::cos(d_M1_2_tmp_tmp + 2.0 * q[4]);
    h_M_tmp = 6.0445E-5 * std::cos(k_M_tmp - q[4]);
    i_M_tmp = 2.7498E-5 * std::cos(o_M_tmp + 2.0 * q[4]);
    j_M_tmp = 2.7498E-5 * std::cos(k_M_tmp - 2.0 * q[4]);
    d_M1_2_tmp_tmp = 0.00024749 * std::cos(k_M_tmp + 2.0 * q[4]);
    r_M_tmp = 0.00024749 * std::cos(l_M_tmp + 2.0 * q[4]);
    s_M_tmp = 9.5258E-5 * std::cos(b_M1_2_tmp_tmp - 2.0 * q[4]);
    f_M_tmp = 0.00028577 * std::cos(b_M1_2_tmp_tmp + 2.0 * q[4]);
    o_M_tmp = 6.0445E-5 * std::cos(o_M_tmp + q[4]);
    k_M_tmp = 0.00018134 * std::cos(k_M_tmp + q[4]);
    M_tmp = 0.00028577 * std::cos(c_M1_2_tmp_tmp + 2.0 * q[4]);
    l_M_tmp = 0.00018134 * std::cos(l_M_tmp + q[4]);
    b_M_tmp = 0.0019936 * std::cos(m_M_tmp + q[4]);
    c_M_tmp = 0.0085823 * std::cos(n_M_tmp);
    d_M_tmp = 0.0085823 * std::cos(m_M_tmp);
    m_M_tmp = 0.00066454 * std::cos(m_M_tmp - q[4]);
    n_M_tmp = 0.00066454 * std::cos(n_M_tmp + q[4]);
    e_M_tmp = 0.0019936 * std::cos((q[3] - q[1]) + q[4]);
    b_M[6] = ((((((((((((((((((((((((((((0.0011882 * M1_2_tmp - b_M_tmp) +
                                        0.0010919 * b_M1_2_tmp) +
                                       0.0010437 * c_M1_2_tmp) +
                                      c_M_tmp) +
                                     q_M_tmp) -
                                    p_M_tmp) -
                                   g_M_tmp) +
                                  h_M_tmp) -
                                 i_M_tmp) +
                                j_M_tmp) +
                               d_M1_2_tmp_tmp) -
                              r_M_tmp) +
                             d_M_tmp) -
                            0.0053182 * d_M1_2_tmp) -
                           0.0049038 * e_M1_2_tmp) +
                          5.5567E-5 * f_M1_2_tmp) +
                         5.5567E-5 * g_M1_2_tmp) +
                        m_M_tmp) +
                       n_M_tmp) -
                      e_M_tmp) -
                     0.00053566 * h_M1_2_tmp) -
                    0.00050357 * i_M1_2_tmp) -
                   s_M_tmp) +
                  f_M_tmp) -
                 o_M_tmp) -
                k_M_tmp) +
               M_tmp) +
              l_M_tmp) -
             0.0034131 * j_M1_2_tmp;
    b_M[12] =
        (((((((((((((((((((((p_M_tmp -
                             0.0010919 *
                                 std::cos(((q[2] - q[1]) + q[3]) + q[4])) -
                            0.0010437 * std::cos(q[1] - q[2])) -
                           q_M_tmp) -
                          0.0011882 * std::cos(((q[1] - q[2]) + q[3]) + q[4])) +
                         g_M_tmp) -
                        h_M_tmp) +
                       i_M_tmp) -
                      j_M_tmp) -
                     d_M1_2_tmp_tmp) +
                    r_M_tmp) +
                   0.0053182 * std::cos((q[1] - q[2]) + q[3])) +
                  0.0049038 * std::cos((q[2] - q[1]) + q[3])) -
                 5.5567E-5 * std::cos((q[1] - q[2]) + q[4])) -
                5.5567E-5 * std::cos((q[2] - q[1]) + q[4])) +
               0.00053566 * std::cos(((q[1] - q[2]) + q[3]) - q[4])) +
              0.00050357 * std::cos(((q[1] - q[2]) - q[3]) + q[4])) +
             s_M_tmp) -
            f_M_tmp) +
           o_M_tmp) +
          k_M_tmp) -
         M_tmp) -
        l_M_tmp;
    b_M[18] =
        (((((((((((((((((((b_M_tmp - 0.0010919 * M1_2_tmp) +
                          0.0011882 * b_M1_2_tmp) +
                         0.0068797 * c_M1_2_tmp) +
                        c_M_tmp) -
                       0.00032998 * std::cos(M1_2_tmp_tmp + 2.0 * q[4])) -
                      0.00032998 * std::cos(M1_2_tmp_tmp_tmp + 2.0 * q[4])) -
                     g_M_tmp) -
                    d_M_tmp) +
                   0.0049038 * d_M1_2_tmp) -
                  0.0053182 * e_M1_2_tmp) -
                 0.00024178 * f_M1_2_tmp) -
                0.00024178 * g_M1_2_tmp) -
               m_M_tmp) +
              n_M_tmp) -
             e_M_tmp) +
            0.00050357 * h_M1_2_tmp) -
           0.00053566 * i_M1_2_tmp) +
          s_M_tmp) -
         f_M_tmp) +
        M_tmp;
    b_M[24] =
        (((((((((((b_M_tmp - 0.0013013 * M1_2_tmp) + 0.0013976 * b_M1_2_tmp) +
                 0.0012634 * c_M1_2_tmp) -
                0.0010941 * d_M1_2_tmp) +
               0.0010941 * e_M1_2_tmp) -
              0.00018621 * f_M1_2_tmp) -
             0.00029735 * g_M1_2_tmp) +
            m_M_tmp) -
           n_M_tmp) -
          e_M_tmp) -
         0.00029419 * h_M1_2_tmp) +
        0.00032627 * i_M1_2_tmp;
    b_M[30] = (((((((0.00020265 * M1_2_tmp - 0.00020265 * b_M1_2_tmp) +
                    0.000156 * c_M1_2_tmp) -
                   0.0001351 * d_M1_2_tmp) +
                  0.0001351 * e_M1_2_tmp) +
                 0.000234 * f_M1_2_tmp) +
                0.000234 * g_M1_2_tmp) -
               6.755E-5 * h_M1_2_tmp) +
              6.755E-5 * i_M1_2_tmp;
    b_M[1] =
        ((((((((((((((((((((((((((((((((0.0010437 * j_M1_2_tmp * M1_1_tmp -
                                        0.0034131 * std::cos(q[1])) +
                                       0.017165 * j_M1_2_tmp * b_M1_1_tmp) +
                                      0.0010437 * b_M2_1_tmp * M2_1_tmp) +
                                     0.0021051 * d_M2_1_tmp * j_M1_2_tmp *
                                         M2_1_tmp) -
                                    0.0021051 * std::sin(2.0 * q[3]) *
                                        M1_1_tmp * b_M2_1_tmp) -
                                   0.010222 * j_M1_2_tmp * M1_1_tmp *
                                       b_M1_1_tmp) +
                                  0.00011113 * j_M1_2_tmp * M1_1_tmp *
                                      c_M1_1_tmp) -
                                 0.0026582 * j_M1_2_tmp * b_M1_1_tmp *
                                     c_M1_1_tmp) -
                                0.00041432 * j_M1_2_tmp * M2_1_tmp *
                                    c_M2_1_tmp) +
                               0.00041432 * M1_1_tmp * b_M2_1_tmp *
                                   c_M2_1_tmp) -
                              0.010222 * b_M1_1_tmp * b_M2_1_tmp * M2_1_tmp) +
                             0.00011113 * c_M1_1_tmp * b_M2_1_tmp * M2_1_tmp) +
                            0.0053164 * j_M1_2_tmp * c_M2_1_tmp * e_M2_1_tmp) +
                           0.00043998 * d_M1_1_tmp * f_M2_1_tmp * j_M1_2_tmp *
                               M2_1_tmp) -
                          0.00043998 * std::cos(2.0 * q[3]) *
                              std::sin(2.0 * q[4]) * M1_1_tmp * b_M2_1_tmp) +
                         0.00054997 * e_M1_1_tmp * d_M2_1_tmp * j_M1_2_tmp *
                             M2_1_tmp) -
                        0.00054997 * std::cos(2.0 * q[4]) *
                            std::sin(2.0 * q[3]) * M1_1_tmp * b_M2_1_tmp) +
                       0.00038103 * e_M1_1_tmp * j_M1_2_tmp * M1_1_tmp *
                           b_M1_1_tmp) -
                      0.00048356 * d_M1_1_tmp * j_M1_2_tmp * M2_1_tmp *
                          e_M2_1_tmp) +
                     0.00048356 * std::cos(2.0 * q[3]) * M1_1_tmp * b_M2_1_tmp *
                         e_M2_1_tmp) +
                    0.00038103 * std::cos(2.0 * q[4]) * b_M1_1_tmp *
                        b_M2_1_tmp * M2_1_tmp) -
                   0.00024178 * d_M2_1_tmp * j_M1_2_tmp * c_M1_1_tmp *
                       M2_1_tmp) +
                  0.00024178 * std::sin(2.0 * q[3]) * M1_1_tmp * c_M1_1_tmp *
                      b_M2_1_tmp) -
                 0.00076206 * f_M2_1_tmp * j_M1_2_tmp * M1_1_tmp * c_M2_1_tmp) -
                0.00076206 * std::sin(2.0 * q[4]) * b_M2_1_tmp * M2_1_tmp *
                    c_M2_1_tmp) +
               0.0012409 * j_M1_2_tmp * M1_1_tmp * b_M1_1_tmp * c_M1_1_tmp) -
              0.0033194 * j_M1_2_tmp * M1_1_tmp * c_M2_1_tmp * e_M2_1_tmp) +
             0.00012833 * j_M1_2_tmp * b_M1_1_tmp * M2_1_tmp * e_M2_1_tmp) +
            6.4163E-5 * j_M1_2_tmp * c_M1_1_tmp * M2_1_tmp * c_M2_1_tmp) -
           0.00012833 * M1_1_tmp * b_M1_1_tmp * b_M2_1_tmp * e_M2_1_tmp) -
          6.4163E-5 * M1_1_tmp * c_M1_1_tmp * b_M2_1_tmp * c_M2_1_tmp) +
         0.0012409 * b_M1_1_tmp * c_M1_1_tmp * b_M2_1_tmp * M2_1_tmp) -
        0.0033194 * b_M2_1_tmp * M2_1_tmp * c_M2_1_tmp * e_M2_1_tmp;
    b_M[7] = (((((((((((0.00032998 * e_M1_1_tmp - 0.0021051 * d_M1_1_tmp) -
                       0.12159 * M1_1_tmp) +
                      0.0055075 * c_M1_1_tmp) -
                     0.0092082 * M1_1_tmp * c_M1_1_tmp) +
                    0.034329 * M2_1_tmp * c_M2_1_tmp) -
                   0.00054997 * d_M1_1_tmp * e_M1_1_tmp) +
                  0.00043998 * d_M2_1_tmp * f_M2_1_tmp) +
                 0.00024178 * d_M1_1_tmp * c_M1_1_tmp) -
                0.00048356 * d_M2_1_tmp * e_M2_1_tmp) -
               0.010633 * b_M1_1_tmp * M2_1_tmp * e_M2_1_tmp) -
              0.0053164 * c_M1_1_tmp * M2_1_tmp * c_M2_1_tmp) +
             0.19203;
    k_M_tmp = 0.00054997 * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4]);
    l_M_tmp = 0.00043998 * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4]);
    m_M_tmp = 0.00024178 * std::cos(2.0 * q[3]) * std::cos(q[4]);
    n_M_tmp = 0.00048356 * std::sin(2.0 * q[3]) * std::sin(q[4]);
    b_M[13] = (((((((((((0.0021051 * std::cos(2.0 * q[3]) -
                         0.00032998 * std::cos(2.0 * q[4])) +
                        0.060795 * std::cos(q[2])) -
                       0.0055075 * std::cos(q[4])) +
                      0.0046041 * M1_1_tmp * c_M1_1_tmp) -
                     0.017165 * M2_1_tmp * c_M2_1_tmp) +
                    k_M_tmp) -
                   l_M_tmp) -
                  m_M_tmp) +
                 n_M_tmp) +
                0.0053164 * b_M1_1_tmp * M2_1_tmp * e_M2_1_tmp) +
               0.0026582 * c_M1_1_tmp * M2_1_tmp * c_M2_1_tmp) -
              0.043584;
    o_M_tmp = 0.0012409 * std::cos(q[3]) * std::cos(q[4]);
    p_M_tmp = 0.00038103 * std::cos(2.0 * q[4]) * std::cos(q[3]);
    b_M[19] =
        ((((((0.017165 * M1_1_tmp * b_M1_1_tmp - 0.010222 * std::cos(q[3])) +
             o_M_tmp) -
            0.0033194 * c_M2_1_tmp * e_M2_1_tmp) +
           p_M_tmp) -
          0.00076206 * std::sin(2.0 * q[4]) * c_M2_1_tmp) -
         0.0026582 * M1_1_tmp * b_M1_1_tmp * c_M1_1_tmp) +
        0.0053164 * M1_1_tmp * c_M2_1_tmp * e_M2_1_tmp;
    b_M[25] =
        ((((0.0021882 * b_M1_1_tmp + 0.0033194 * b_M1_1_tmp * c_M1_1_tmp) -
           0.0046041 * M2_1_tmp * e_M2_1_tmp) -
          0.0020785 * c_M2_1_tmp * e_M2_1_tmp) -
         0.0053164 * std::cos(q[2]) * b_M1_1_tmp * c_M1_1_tmp) +
        0.0026582 * std::cos(q[2]) * c_M2_1_tmp * e_M2_1_tmp;
    b_M[31] = (0.0002702 * b_M1_1_tmp - 0.0002702 * b_M1_1_tmp * c_M1_1_tmp) +
              0.0005404 * c_M2_1_tmp * e_M2_1_tmp;
    b_M[2] =
        ((((((((((((((((((((((((((((0.0021051 * std::sin(2.0 * q[3]) *
                                        std::cos(q[2]) * std::sin(q[1]) -
                                    0.0010437 * std::sin(q[1]) *
                                        std::sin(q[2])) -
                                   0.0021051 * std::sin(2.0 * q[3]) *
                                       std::cos(q[1]) * std::sin(q[2])) -
                                  0.0010437 * std::cos(q[1]) * std::cos(q[2])) +
                                 0.010222 * std::cos(q[1]) * std::cos(q[2]) *
                                     std::cos(q[3])) -
                                0.00011113 * std::cos(q[1]) * std::cos(q[2]) *
                                    std::cos(q[4])) +
                               0.00041432 * std::cos(q[1]) * std::sin(q[2]) *
                                   std::sin(q[3])) -
                              0.00041432 * std::cos(q[2]) * std::sin(q[1]) *
                                  std::sin(q[3])) +
                             0.010222 * std::cos(q[3]) * std::sin(q[1]) *
                                 std::sin(q[2])) -
                            0.00011113 * std::cos(q[4]) * std::sin(q[1]) *
                                std::sin(q[2])) -
                           0.00043998 * std::cos(2.0 * q[3]) *
                               std::sin(2.0 * q[4]) * std::cos(q[1]) *
                               std::sin(q[2])) +
                          0.00043998 * std::cos(2.0 * q[3]) *
                              std::sin(2.0 * q[4]) * std::cos(q[2]) *
                              std::sin(q[1])) -
                         0.00054997 * std::cos(2.0 * q[4]) *
                             std::sin(2.0 * q[3]) * std::cos(q[1]) *
                             std::sin(q[2])) +
                        0.00054997 * std::cos(2.0 * q[4]) *
                            std::sin(2.0 * q[3]) * std::cos(q[2]) *
                            std::sin(q[1])) -
                       0.00038103 * std::cos(2.0 * q[4]) * std::cos(q[1]) *
                           std::cos(q[2]) * std::cos(q[3])) +
                      0.00048356 * std::cos(2.0 * q[3]) * std::cos(q[1]) *
                          std::sin(q[2]) * std::sin(q[4])) -
                     0.00048356 * std::cos(2.0 * q[3]) * std::cos(q[2]) *
                         std::sin(q[1]) * std::sin(q[4])) -
                    0.00038103 * std::cos(2.0 * q[4]) * std::cos(q[3]) *
                        std::sin(q[1]) * std::sin(q[2])) +
                   0.00024178 * std::sin(2.0 * q[3]) * std::cos(q[1]) *
                       std::cos(q[4]) * std::sin(q[2])) -
                  0.00024178 * std::sin(2.0 * q[3]) * std::cos(q[2]) *
                      std::cos(q[4]) * std::sin(q[1])) +
                 0.00076206 * std::sin(2.0 * q[4]) * std::cos(q[1]) *
                     std::cos(q[2]) * std::sin(q[3])) +
                0.00076206 * std::sin(2.0 * q[4]) * std::sin(q[1]) *
                    std::sin(q[2]) * std::sin(q[3])) -
               0.0012409 * std::cos(q[1]) * std::cos(q[2]) * std::cos(q[3]) *
                   std::cos(q[4])) +
              0.0033194 * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[3]) *
                  std::sin(q[4])) -
             0.00012833 * std::cos(q[1]) * std::cos(q[3]) * std::sin(q[2]) *
                 std::sin(q[4])) -
            6.4163E-5 * std::cos(q[1]) * std::cos(q[4]) * std::sin(q[2]) *
                std::sin(q[3])) +
           0.00012833 * std::cos(q[2]) * std::cos(q[3]) * std::sin(q[1]) *
               std::sin(q[4])) +
          6.4163E-5 * std::cos(q[2]) * std::cos(q[4]) * std::sin(q[1]) *
              std::sin(q[3])) -
         0.0012409 * std::cos(q[3]) * std::cos(q[4]) * std::sin(q[1]) *
             std::sin(q[2])) +
        0.0033194 * std::sin(q[1]) * std::sin(q[2]) * std::sin(q[3]) *
            std::sin(q[4]);
    b_M[8] = (((((((((((0.0021051 * std::cos(2.0 * q[3]) -
                        0.00032998 * std::cos(2.0 * q[4])) +
                       0.060795 * std::cos(q[2])) -
                      0.0055075 * std::cos(q[4])) +
                     0.0046041 * std::cos(q[2]) * std::cos(q[4])) -
                    0.017165 * std::sin(q[2]) * std::sin(q[3])) +
                   0.00054997 * std::cos(2.0 * q[3]) * std::cos(2.0 * q[4])) -
                  0.00043998 * std::sin(2.0 * q[3]) * std::sin(2.0 * q[4])) -
                 0.00024178 * std::cos(2.0 * q[3]) * std::cos(q[4])) +
                0.00048356 * std::sin(2.0 * q[3]) * std::sin(q[4])) +
               0.0053164 * std::cos(q[3]) * std::sin(q[2]) * std::sin(q[4])) +
              0.0026582 * std::cos(q[4]) * std::sin(q[2]) * std::sin(q[3])) -
             0.043584;
    b_M[14] = ((((((0.00032998 * std::cos(2.0 * q[4]) -
                    0.0021051 * std::cos(2.0 * q[3])) +
                   0.0055075 * std::cos(q[4])) -
                  k_M_tmp) +
                 l_M_tmp) +
                m_M_tmp) -
               n_M_tmp) +
              0.043584;
    k_M_tmp = (((0.010222 * std::cos(q[3]) - o_M_tmp) +
                0.0033194 * std::sin(q[3]) * std::sin(q[4])) -
               p_M_tmp) +
              0.00076206 * std::sin(2.0 * q[4]) * std::sin(q[3]);
    b_M[20] = k_M_tmp;
    l_M_tmp = (0.0020785 * std::sin(q[3]) * std::sin(q[4]) -
               0.0033194 * std::cos(q[3]) * std::cos(q[4])) -
              0.0021882 * std::cos(q[3]);
    b_M[26] = l_M_tmp;
    m_M_tmp = (0.0002702 * std::cos(q[3]) * std::cos(q[4]) -
               0.0002702 * std::cos(q[3])) -
              0.0005404 * std::sin(q[3]) * std::sin(q[4]);
    b_M[32] = m_M_tmp;
    b_M[3] =
        (((((((((((((((((((((((0.0068797 * j_M1_2_tmp * M1_1_tmp +
                               0.0068797 * b_M2_1_tmp * M2_1_tmp) +
                              0.017165 * b_M2_1_tmp * c_M2_1_tmp) -
                             0.00065996 * e_M1_1_tmp * j_M1_2_tmp * M1_1_tmp) -
                            0.00065996 * std::cos(2.0 * q[4]) * b_M2_1_tmp *
                                M2_1_tmp) -
                           0.00041432 * std::cos(q[1]) * M1_1_tmp *
                               b_M1_1_tmp) -
                          0.00048356 * j_M1_2_tmp * M1_1_tmp * c_M1_1_tmp) +
                         0.010222 * std::cos(q[1]) * M2_1_tmp * c_M2_1_tmp) -
                        0.010222 * M1_1_tmp * b_M2_1_tmp * c_M2_1_tmp) -
                       0.00041432 * b_M1_1_tmp * b_M2_1_tmp * M2_1_tmp) -
                      0.00048356 * c_M1_1_tmp * b_M2_1_tmp * M2_1_tmp) -
                     0.0053164 * std::cos(q[3]) * b_M2_1_tmp * e_M2_1_tmp) -
                    0.0026582 * std::cos(q[4]) * b_M2_1_tmp * c_M2_1_tmp) -
                   0.00038103 * std::cos(2.0 * q[4]) * std::cos(q[1]) *
                       M2_1_tmp * c_M2_1_tmp) +
                  0.00038103 * std::cos(2.0 * q[4]) * M1_1_tmp * b_M2_1_tmp *
                      c_M2_1_tmp) -
                 0.00076206 * std::sin(2.0 * q[4]) * std::cos(q[1]) *
                     b_M1_1_tmp * M2_1_tmp) +
                0.00076206 * std::sin(2.0 * q[4]) * M1_1_tmp * b_M1_1_tmp *
                    b_M2_1_tmp) +
               6.4163E-5 * std::cos(q[1]) * M1_1_tmp * b_M1_1_tmp *
                   c_M1_1_tmp) -
              0.00012833 * std::cos(q[1]) * M1_1_tmp * c_M2_1_tmp *
                  e_M2_1_tmp) -
             0.0033194 * std::cos(q[1]) * b_M1_1_tmp * M2_1_tmp * e_M2_1_tmp) -
            0.0012409 * std::cos(q[1]) * c_M1_1_tmp * M2_1_tmp * c_M2_1_tmp) +
           0.0033194 * M1_1_tmp * b_M1_1_tmp * b_M2_1_tmp * e_M2_1_tmp) +
          0.0012409 * M1_1_tmp * c_M1_1_tmp * b_M2_1_tmp * c_M2_1_tmp) +
         6.4163E-5 * b_M1_1_tmp * c_M1_1_tmp * b_M2_1_tmp * M2_1_tmp) -
        0.00012833 * b_M2_1_tmp * M2_1_tmp * c_M2_1_tmp * e_M2_1_tmp;
    b_M[9] = ((((((0.017165 * std::cos(q[2]) * std::cos(q[3]) -
                   0.010222 * std::cos(q[3])) +
                  0.0012409 * std::cos(q[3]) * std::cos(q[4])) -
                 0.0033194 * std::sin(q[3]) * std::sin(q[4])) +
                0.00038103 * std::cos(2.0 * q[4]) * std::cos(q[3])) -
               0.00076206 * std::sin(2.0 * q[4]) * std::sin(q[3])) -
              0.0026582 * std::cos(q[2]) * std::cos(q[3]) * std::cos(q[4])) +
             0.0053164 * std::cos(q[2]) * std::sin(q[3]) * std::sin(q[4]);
    b_M[15] = k_M_tmp;
    b_M[21] = (0.0068797 - 0.00048356 * std::cos(q[4])) -
              0.00065996 * std::cos(2.0 * q[4]);
    k_M_tmp = 0.0012634 - 0.00048356 * std::cos(q[4]);
    b_M[27] = k_M_tmp;
    b_M[33] = 0.000468 * c_M1_1_tmp + 0.000156;
    b_M[4] =
        ((((((((((((((((0.0012634 * j_M1_2_tmp * M1_1_tmp +
                        0.0012634 * b_M2_1_tmp * M2_1_tmp) -
                       0.00048356 * std::cos(q[1]) * std::cos(q[2]) *
                           std::cos(q[4])) -
                      0.0021882 * j_M1_2_tmp * M2_1_tmp * c_M2_1_tmp) +
                     0.0021882 * M1_1_tmp * b_M2_1_tmp * c_M2_1_tmp) +
                    0.00011113 * std::cos(q[1]) * M2_1_tmp * e_M2_1_tmp) -
                   0.00011113 * M1_1_tmp * b_M2_1_tmp * e_M2_1_tmp) -
                  0.00048356 * std::cos(q[4]) * std::sin(q[1]) *
                      std::sin(q[2])) -
                 0.0026582 * b_M1_1_tmp * b_M2_1_tmp * e_M2_1_tmp) -
                0.0053164 * std::cos(q[4]) * b_M2_1_tmp * c_M2_1_tmp) +
               0.00012833 * std::cos(q[1]) * std::cos(q[2]) * b_M1_1_tmp *
                   c_M1_1_tmp) -
              6.4163E-5 * std::cos(q[1]) * std::cos(q[2]) * c_M2_1_tmp *
                  e_M2_1_tmp) -
             0.0020785 * j_M1_2_tmp * b_M1_1_tmp * M2_1_tmp * e_M2_1_tmp) -
            0.0033194 * std::cos(q[1]) * c_M1_1_tmp * M2_1_tmp * c_M2_1_tmp) +
           0.0020785 * M1_1_tmp * b_M1_1_tmp * b_M2_1_tmp * e_M2_1_tmp) +
          0.0033194 * std::cos(q[2]) * c_M1_1_tmp * b_M2_1_tmp * c_M2_1_tmp) +
         0.00012833 * b_M1_1_tmp * c_M1_1_tmp * b_M2_1_tmp * M2_1_tmp) -
        6.4163E-5 * b_M2_1_tmp * M2_1_tmp * c_M2_1_tmp * e_M2_1_tmp;
    b_M[10] = ((((0.0021882 * std::cos(q[3]) +
                  0.0033194 * std::cos(q[3]) * std::cos(q[4])) -
                 0.0046041 * std::sin(q[2]) * std::sin(q[4])) -
                0.0020785 * std::sin(q[3]) * std::sin(q[4])) -
               0.0053164 * std::cos(q[2]) * std::cos(q[3]) * std::cos(q[4])) +
              0.0026582 * std::cos(q[2]) * std::sin(q[3]) * std::sin(q[4]);
    b_M[16] = l_M_tmp;
    b_M[22] = k_M_tmp;
    b_M[28] = 0.0025267;
    b_M[34] = 0.000312;
    b_M[5] = (((0.000156 * std::cos(q[1] - q[2]) +
                0.000468 * c_M1_2_tmp * c_M1_1_tmp) +
               0.0002702 * M6_1_tmp * c_M2_1_tmp) -
              0.0005404 * M6_1_tmp * b_M1_1_tmp * e_M2_1_tmp) -
             0.0002702 * std::sin(q[1] - q[2]) * c_M1_1_tmp * c_M2_1_tmp;
    b_M[11] = (0.0002702 * std::cos(q[3]) -
               0.0002702 * std::cos(q[3]) * std::cos(q[4])) +
              0.0005404 * std::sin(q[3]) * std::sin(q[4]);
    b_M[17] = m_M_tmp;
    b_M[23] = 0.000468 * std::cos(q[4]) + 0.000156;
    b_M[29] = 0.000312;
    b_M[35] = 0.000624;
}

Mico::Mico()
{
  std::cout<<"Created a Kinova Mico Object"<<std::endl;
}

Mico::~Mico()
{
  // (no terminate code required)
}

void Mico::dJdt(const double q[6], const double[6], double b_dJdt[36])
{
  double b_dJdt1_1_tmp;
  double b_dJdt1_1_tmp_tmp;
  double b_dJdt_tmp;
  double b_dJdt_tmp_tmp;
  double b_dJdt_tmp_tmp_tmp;
  double c_dJdt1_1_tmp;
  double c_dJdt1_1_tmp_tmp;
  double c_dJdt_tmp;
  double c_dJdt_tmp_tmp;
  double c_dJdt_tmp_tmp_tmp;
  double dJdt1_1_tmp;
  double dJdt1_1_tmp_tmp;
  double dJdt_tmp;
  double dJdt_tmp_tmp;
  double dJdt_tmp_tmp_tmp;
  double d_dJdt1_1_tmp;
  double d_dJdt1_1_tmp_tmp;
  double d_dJdt_tmp;
  double d_dJdt_tmp_tmp;
  double d_dJdt_tmp_tmp_tmp;
  double e_dJdt1_1_tmp_tmp;
  double e_dJdt_tmp;
  double f_dJdt1_1_tmp_tmp;
  double f_dJdt_tmp;
  double g_dJdt_tmp;
  double h_dJdt_tmp;
  dJdt1_1_tmp_tmp = std::cos(q[0]);
  b_dJdt1_1_tmp_tmp = std::sin(q[0]);
  c_dJdt1_1_tmp_tmp = std::sin(q[1]);
  dJdt1_1_tmp = std::cos(q[3]);
  b_dJdt1_1_tmp = std::sin(q[3]);
  c_dJdt1_1_tmp = std::cos(q[4]);
  d_dJdt1_1_tmp_tmp = std::cos(q[1]);
  e_dJdt1_1_tmp_tmp = std::sin(q[2]);
  f_dJdt1_1_tmp_tmp = std::cos(q[2]);
  d_dJdt1_1_tmp = std::sin(q[4]);
  dJdt_tmp_tmp_tmp = d_dJdt1_1_tmp_tmp * f_dJdt1_1_tmp_tmp;
  dJdt_tmp_tmp = b_dJdt1_1_tmp_tmp * c_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp +
                 dJdt_tmp_tmp_tmp * b_dJdt1_1_tmp_tmp;
  b_dJdt[0] =
      (((((((0.14615 * dJdt1_1_tmp_tmp * dJdt1_1_tmp -
             0.007 * dJdt1_1_tmp_tmp) -
            0.29 * b_dJdt1_1_tmp_tmp * c_dJdt1_1_tmp_tmp) +
           0.14418 * d_dJdt1_1_tmp *
               (dJdt1_1_tmp_tmp * b_dJdt1_1_tmp + dJdt1_1_tmp * dJdt_tmp_tmp)) -
          0.072089 * c_dJdt1_1_tmp *
              (dJdt1_1_tmp_tmp * dJdt1_1_tmp - b_dJdt1_1_tmp * dJdt_tmp_tmp)) -
         0.14615 * b_dJdt1_1_tmp * dJdt_tmp_tmp) -
        0.12486 * c_dJdt1_1_tmp *
            (d_dJdt1_1_tmp_tmp * b_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp -
             f_dJdt1_1_tmp_tmp * b_dJdt1_1_tmp_tmp * c_dJdt1_1_tmp_tmp)) -
       0.25024 * d_dJdt1_1_tmp_tmp * b_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp) +
      0.25024 * f_dJdt1_1_tmp_tmp * b_dJdt1_1_tmp_tmp * c_dJdt1_1_tmp_tmp;
  b_dJdt_tmp_tmp = dJdt1_1_tmp_tmp * d_dJdt1_1_tmp_tmp;
  b_dJdt_tmp_tmp_tmp = dJdt1_1_tmp_tmp * f_dJdt1_1_tmp_tmp * c_dJdt1_1_tmp_tmp;
  c_dJdt_tmp_tmp_tmp = b_dJdt_tmp_tmp * e_dJdt1_1_tmp_tmp;
  c_dJdt_tmp_tmp = c_dJdt_tmp_tmp_tmp - b_dJdt_tmp_tmp_tmp;
  b_dJdt[6] =
      (((((0.29 * dJdt1_1_tmp_tmp * d_dJdt1_1_tmp_tmp -
           0.12486 * std::cos(q[4]) *
               (b_dJdt_tmp_tmp * f_dJdt1_1_tmp_tmp +
                dJdt1_1_tmp_tmp * c_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp)) +
          0.14615 * std::sin(q[3]) * c_dJdt_tmp_tmp) -
         0.14418 * dJdt1_1_tmp * d_dJdt1_1_tmp * c_dJdt_tmp_tmp) -
        0.072089 * std::cos(q[4]) * b_dJdt1_1_tmp * c_dJdt_tmp_tmp) -
       0.25024 * dJdt1_1_tmp_tmp * d_dJdt1_1_tmp_tmp * f_dJdt1_1_tmp_tmp) -
      0.25024 * std::cos(q[0]) * c_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp;
  b_dJdt[12] = ((((0.12486 * std::cos(q[4]) *
                       (std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2]) +
                        std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2])) -
                   0.14615 * std::sin(q[3]) *
                       (std::cos(q[0]) * std::cos(q[1]) * std::sin(q[2]) -
                        std::cos(q[0]) * std::cos(q[2]) * std::sin(q[1]))) +
                  0.14418 * std::cos(q[3]) * std::sin(q[4]) *
                      (std::cos(q[0]) * std::cos(q[1]) * std::sin(q[2]) -
                       std::cos(q[0]) * std::cos(q[2]) * std::sin(q[1]))) +
                 0.072089 * std::cos(q[4]) * std::sin(q[3]) *
                     (std::cos(q[0]) * std::cos(q[1]) * std::sin(q[2]) -
                      std::cos(q[0]) * std::cos(q[2]) * std::sin(q[1]))) +
                0.25024 * std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2])) +
               0.25024 * std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2]);
  dJdt_tmp = std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2]) +
             std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2]);
  b_dJdt[18] =
      ((0.14418 * std::sin(q[4]) *
            (dJdt1_1_tmp * b_dJdt1_1_tmp_tmp + b_dJdt1_1_tmp * dJdt_tmp) -
        0.14615 * b_dJdt1_1_tmp_tmp * b_dJdt1_1_tmp) +
       0.072089 * std::cos(q[4]) *
           (b_dJdt1_1_tmp_tmp * b_dJdt1_1_tmp - dJdt1_1_tmp * dJdt_tmp)) +
      0.14615 * dJdt1_1_tmp * dJdt_tmp;
  b_dJdt_tmp =
      std::cos(q[3]) * std::sin(q[0]) +
      std::sin(q[3]) * (std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2]) +
                        std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2]));
  c_dJdt_tmp =
      std::sin(q[0]) * std::sin(q[3]) -
      std::cos(q[3]) * (std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2]) +
                        std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2]));
  b_dJdt[24] = (0.072089 * d_dJdt1_1_tmp * b_dJdt_tmp +
                0.14418 * c_dJdt1_1_tmp * c_dJdt_tmp) -
               0.12486 * d_dJdt1_1_tmp * c_dJdt_tmp_tmp;
  b_dJdt[30] = 0.0;
  b_dJdt[1] = (((((((0.007 * b_dJdt1_1_tmp_tmp -
                     0.29 * std::cos(q[0]) * c_dJdt1_1_tmp_tmp) -
                    0.14615 * std::cos(q[3]) * b_dJdt1_1_tmp_tmp) +
                   0.072089 * std::cos(q[4]) * b_dJdt_tmp) -
                  0.14418 * std::sin(q[4]) * c_dJdt_tmp) -
                 0.14615 * std::sin(q[3]) * dJdt_tmp) -
                0.12486 * std::cos(q[4]) * c_dJdt_tmp_tmp) -
               0.25024 * std::cos(q[0]) * std::cos(q[1]) * e_dJdt1_1_tmp_tmp) +
              0.25024 * std::cos(q[0]) * f_dJdt1_1_tmp_tmp * c_dJdt1_1_tmp_tmp;
  d_dJdt_tmp = std::cos(q[1]) * std::sin(q[0]) * std::sin(q[2]) -
               std::cos(q[2]) * std::sin(q[0]) * std::sin(q[1]);
  e_dJdt_tmp = 0.14615 * std::sin(q[3]) * d_dJdt_tmp;
  f_dJdt_tmp = 0.12486 * std::cos(q[4]) * dJdt_tmp_tmp;
  b_dJdt_tmp_tmp = 0.14418 * std::cos(q[3]) * std::sin(q[4]);
  g_dJdt_tmp = b_dJdt_tmp_tmp * d_dJdt_tmp;
  d_dJdt_tmp_tmp = 0.072089 * std::cos(q[4]) * std::sin(q[3]);
  h_dJdt_tmp = d_dJdt_tmp_tmp * d_dJdt_tmp;
  b_dJdt[7] =
      (((((f_dJdt_tmp - 0.29 * d_dJdt1_1_tmp_tmp * b_dJdt1_1_tmp_tmp) -
          e_dJdt_tmp) +
         0.25024 * b_dJdt1_1_tmp_tmp * c_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp) +
        g_dJdt_tmp) +
       h_dJdt_tmp) +
      0.25024 * std::cos(q[1]) * f_dJdt1_1_tmp_tmp * b_dJdt1_1_tmp_tmp;
  b_dJdt[13] = ((((e_dJdt_tmp - f_dJdt_tmp) -
                  0.25024 * std::sin(q[0]) * std::sin(q[1]) * std::sin(q[2])) -
                 g_dJdt_tmp) -
                h_dJdt_tmp) -
               0.25024 * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[0]);
  e_dJdt_tmp =
      std::cos(q[0]) * std::sin(q[3]) +
      std::cos(q[3]) * (std::sin(q[0]) * std::sin(q[1]) * std::sin(q[2]) +
                        std::cos(q[1]) * std::cos(q[2]) * std::sin(q[0]));
  f_dJdt_tmp =
      std::cos(q[0]) * std::cos(q[3]) -
      std::sin(q[3]) * (std::sin(q[0]) * std::sin(q[1]) * std::sin(q[2]) +
                        std::cos(q[1]) * std::cos(q[2]) * std::sin(q[0]));
  b_dJdt[19] = ((0.072089 * std::cos(q[4]) * e_dJdt_tmp -
                 0.14615 * std::cos(q[0]) * b_dJdt1_1_tmp) +
                0.14418 * std::sin(q[4]) * f_dJdt_tmp) -
               0.14615 * std::cos(q[3]) * dJdt_tmp_tmp;
  b_dJdt[25] = (0.14418 * std::cos(q[4]) * e_dJdt_tmp +
                0.072089 * std::sin(q[4]) * f_dJdt_tmp) +
               0.12486 * std::sin(q[4]) * d_dJdt_tmp;
  b_dJdt[31] = 0.0;
  b_dJdt[2] = 0.0;
  d_dJdt_tmp_tmp_tmp = c_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp;
  dJdt_tmp_tmp_tmp += d_dJdt_tmp_tmp_tmp;
  g_dJdt_tmp = b_dJdt_tmp_tmp * dJdt_tmp_tmp_tmp;
  h_dJdt_tmp = d_dJdt_tmp_tmp * dJdt_tmp_tmp_tmp;
  b_dJdt[8] = (((((0.29 * c_dJdt1_1_tmp_tmp +
                   0.12486 * std::cos(q[4]) *
                       (d_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp -
                        f_dJdt1_1_tmp_tmp * c_dJdt1_1_tmp_tmp)) +
                  0.25024 * std::cos(q[1]) * e_dJdt1_1_tmp_tmp) -
                 0.25024 * std::cos(q[2]) * c_dJdt1_1_tmp_tmp) +
                0.14615 * std::sin(q[3]) * dJdt_tmp_tmp_tmp) -
               g_dJdt_tmp) -
              h_dJdt_tmp;
  b_dJdt[14] = ((((0.25024 * std::cos(q[2]) * std::sin(q[1]) -
                   0.25024 * std::cos(q[1]) * std::sin(q[2])) -
                  0.12486 * std::cos(q[4]) *
                      (std::cos(q[1]) * std::sin(q[2]) -
                       std::cos(q[2]) * std::sin(q[1]))) -
                 0.14615 * std::sin(q[3]) *
                     (std::cos(q[1]) * std::cos(q[2]) +
                      std::sin(q[1]) * std::sin(q[2]))) +
                g_dJdt_tmp) +
               h_dJdt_tmp;
  g_dJdt_tmp =
      std::cos(q[1]) * std::sin(q[2]) - std::cos(q[2]) * std::sin(q[1]);
  b_dJdt[20] = (0.072089 * dJdt1_1_tmp * c_dJdt1_1_tmp * g_dJdt_tmp -
                0.14615 * std::cos(q[3]) * g_dJdt_tmp) -
               0.14418 * b_dJdt1_1_tmp * d_dJdt1_1_tmp * g_dJdt_tmp;
  b_dJdt[26] = (0.14418 * std::cos(q[3]) * c_dJdt1_1_tmp * g_dJdt_tmp -
                0.12486 * std::sin(q[4]) * dJdt_tmp_tmp_tmp) -
               0.072089 * b_dJdt1_1_tmp * d_dJdt1_1_tmp * g_dJdt_tmp;
  b_dJdt[32] = 0.0;
  b_dJdt[3] = 0.0;
  b_dJdt[9] = -b_dJdt1_1_tmp_tmp;
  b_dJdt[15] = b_dJdt1_1_tmp_tmp;
  b_dJdt[21] = b_dJdt_tmp_tmp_tmp - c_dJdt_tmp_tmp_tmp;
  b_dJdt[27] = ((0.5 * dJdt1_1_tmp_tmp * f_dJdt1_1_tmp_tmp * c_dJdt1_1_tmp_tmp -
                 0.86603 * b_dJdt1_1_tmp * dJdt_tmp) -
                0.5 * std::cos(q[0]) * d_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp) -
               0.86603 * dJdt1_1_tmp * b_dJdt1_1_tmp_tmp;
  b_dJdt[33] =
      (((((0.43301 * c_dJdt1_1_tmp * b_dJdt_tmp -
           0.43301 * dJdt1_1_tmp * b_dJdt1_1_tmp_tmp) -
          0.86603 * d_dJdt1_1_tmp * c_dJdt_tmp) -
         0.43301 * b_dJdt1_1_tmp * dJdt_tmp) -
        0.75 * c_dJdt1_1_tmp * c_dJdt_tmp_tmp) -
       0.25 * dJdt1_1_tmp_tmp * d_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp) +
      0.25 * std::cos(q[0]) * f_dJdt1_1_tmp_tmp * c_dJdt1_1_tmp_tmp;
  b_dJdt[4] = 0.0;
  b_dJdt[10] = -dJdt1_1_tmp_tmp;
  b_dJdt[16] = dJdt1_1_tmp_tmp;
  b_dJdt[22] = d_dJdt_tmp;
  b_dJdt[28] =
      ((0.86603 * std::sin(q[3]) * dJdt_tmp_tmp -
        0.86603 * dJdt1_1_tmp_tmp * dJdt1_1_tmp) +
       0.5 * d_dJdt1_1_tmp_tmp * b_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp) -
      0.5 * f_dJdt1_1_tmp_tmp * b_dJdt1_1_tmp_tmp * c_dJdt1_1_tmp_tmp;
  b_dJdt[34] =
      (((((0.43301 * std::cos(q[4]) * f_dJdt_tmp -
           0.86603 * std::sin(q[4]) * e_dJdt_tmp) -
          0.43301 * dJdt1_1_tmp_tmp * dJdt1_1_tmp) +
         0.43301 * std::sin(q[3]) * dJdt_tmp_tmp) +
        0.75 * std::cos(q[4]) * d_dJdt_tmp) +
       0.25 * d_dJdt1_1_tmp_tmp * b_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp) -
      0.25 * f_dJdt1_1_tmp_tmp * b_dJdt1_1_tmp_tmp * c_dJdt1_1_tmp_tmp;
  b_dJdt[5] = -1.0;
  b_dJdt[11] = 0.0;
  b_dJdt[17] = 0.0;
  b_dJdt[23] = -d_dJdt1_1_tmp_tmp * f_dJdt1_1_tmp_tmp - d_dJdt_tmp_tmp_tmp;
  b_dJdt[29] = (0.86603 * std::sin(q[3]) * g_dJdt_tmp -
                0.5 * std::cos(q[1]) * f_dJdt1_1_tmp_tmp) -
               0.5 * c_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp;
  b_dJdt[35] = ((((0.43301 * std::sin(q[3]) * g_dJdt_tmp -
                   0.25 * std::cos(q[1]) * f_dJdt1_1_tmp_tmp) -
                  0.25 * c_dJdt1_1_tmp_tmp * e_dJdt1_1_tmp_tmp) -
                 0.75 * std::cos(q[4]) * dJdt_tmp_tmp_tmp) -
                0.86603 * std::cos(q[3]) * d_dJdt1_1_tmp * g_dJdt_tmp) -
               0.43301 * std::cos(q[4]) * b_dJdt1_1_tmp * g_dJdt_tmp;
}

void Mico::jacobian(const double q[6], double Jac[36])
{
  double J1_1_tmp;
  double J1_1_tmp_tmp;
  double Jac_tmp;
  double Jac_tmp_tmp;
  double Jac_tmp_tmp_tmp;
  double b_J1_1_tmp;
  double b_J1_1_tmp_tmp;
  double b_Jac_tmp;
  double b_Jac_tmp_tmp;
  double b_Jac_tmp_tmp_tmp;
  double c_J1_1_tmp;
  double c_J1_1_tmp_tmp;
  double c_Jac_tmp;
  double c_Jac_tmp_tmp;
  double c_Jac_tmp_tmp_tmp;
  double d_J1_1_tmp;
  double d_J1_1_tmp_tmp;
  double d_Jac_tmp;
  double d_Jac_tmp_tmp;
  double d_Jac_tmp_tmp_tmp;
  double e_J1_1_tmp_tmp;
  double e_Jac_tmp;
  double f_J1_1_tmp_tmp;
  double f_Jac_tmp;
  double g_Jac_tmp;
  double h_Jac_tmp;
  J1_1_tmp_tmp = std::cos(q[0]);
  b_J1_1_tmp_tmp = std::sin(q[0]);
  c_J1_1_tmp_tmp = std::sin(q[1]);
  J1_1_tmp = std::cos(q[3]);
  b_J1_1_tmp = std::sin(q[3]);
  c_J1_1_tmp = std::cos(q[4]);
  d_J1_1_tmp_tmp = std::cos(q[1]);
  e_J1_1_tmp_tmp = std::sin(q[2]);
  f_J1_1_tmp_tmp = std::cos(q[2]);
  d_J1_1_tmp = std::sin(q[4]);
  Jac_tmp_tmp_tmp = d_J1_1_tmp_tmp * f_J1_1_tmp_tmp;
  Jac_tmp_tmp = b_J1_1_tmp_tmp * c_J1_1_tmp_tmp * e_J1_1_tmp_tmp +
                Jac_tmp_tmp_tmp * b_J1_1_tmp_tmp;
  Jac[0] = (((((((0.14615 * J1_1_tmp_tmp * J1_1_tmp - 0.007 * J1_1_tmp_tmp) -
                 0.29 * b_J1_1_tmp_tmp * c_J1_1_tmp_tmp) +
                0.14418 * d_J1_1_tmp *
                    (J1_1_tmp_tmp * b_J1_1_tmp + J1_1_tmp * Jac_tmp_tmp)) -
               0.072089 * c_J1_1_tmp *
                   (J1_1_tmp_tmp * J1_1_tmp - b_J1_1_tmp * Jac_tmp_tmp)) -
              0.14615 * b_J1_1_tmp * Jac_tmp_tmp) -
             0.12486 * c_J1_1_tmp *
                 (d_J1_1_tmp_tmp * b_J1_1_tmp_tmp * e_J1_1_tmp_tmp -
                  f_J1_1_tmp_tmp * b_J1_1_tmp_tmp * c_J1_1_tmp_tmp)) -
            0.25024 * d_J1_1_tmp_tmp * b_J1_1_tmp_tmp * e_J1_1_tmp_tmp) +
           0.25024 * f_J1_1_tmp_tmp * b_J1_1_tmp_tmp * c_J1_1_tmp_tmp;
  b_Jac_tmp_tmp = J1_1_tmp_tmp * d_J1_1_tmp_tmp;
  b_Jac_tmp_tmp_tmp = J1_1_tmp_tmp * f_J1_1_tmp_tmp * c_J1_1_tmp_tmp;
  c_Jac_tmp_tmp_tmp = b_Jac_tmp_tmp * e_J1_1_tmp_tmp;
  c_Jac_tmp_tmp = c_Jac_tmp_tmp_tmp - b_Jac_tmp_tmp_tmp;
  Jac[6] = (((((0.29 * J1_1_tmp_tmp * d_J1_1_tmp_tmp -
                0.12486 * std::cos(q[4]) *
                    (b_Jac_tmp_tmp * f_J1_1_tmp_tmp +
                     J1_1_tmp_tmp * c_J1_1_tmp_tmp * e_J1_1_tmp_tmp)) +
               0.14615 * std::sin(q[3]) * c_Jac_tmp_tmp) -
              0.14418 * J1_1_tmp * d_J1_1_tmp * c_Jac_tmp_tmp) -
             0.072089 * std::cos(q[4]) * b_J1_1_tmp * c_Jac_tmp_tmp) -
            0.25024 * J1_1_tmp_tmp * d_J1_1_tmp_tmp * f_J1_1_tmp_tmp) -
           0.25024 * std::cos(q[0]) * c_J1_1_tmp_tmp * e_J1_1_tmp_tmp;
  Jac[12] = ((((0.12486 * std::cos(q[4]) *
                    (std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2]) +
                     std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2])) -
                0.14615 * std::sin(q[3]) *
                    (std::cos(q[0]) * std::cos(q[1]) * std::sin(q[2]) -
                     std::cos(q[0]) * std::cos(q[2]) * std::sin(q[1]))) +
               0.14418 * std::cos(q[3]) * std::sin(q[4]) *
                   (std::cos(q[0]) * std::cos(q[1]) * std::sin(q[2]) -
                    std::cos(q[0]) * std::cos(q[2]) * std::sin(q[1]))) +
              0.072089 * std::cos(q[4]) * std::sin(q[3]) *
                  (std::cos(q[0]) * std::cos(q[1]) * std::sin(q[2]) -
                   std::cos(q[0]) * std::cos(q[2]) * std::sin(q[1]))) +
             0.25024 * std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2])) +
            0.25024 * std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2]);
  Jac_tmp = std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2]) +
            std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2]);
  Jac[18] = ((0.14418 * std::sin(q[4]) *
                  (J1_1_tmp * b_J1_1_tmp_tmp + b_J1_1_tmp * Jac_tmp) -
              0.14615 * b_J1_1_tmp_tmp * b_J1_1_tmp) +
             0.072089 * std::cos(q[4]) *
                 (b_J1_1_tmp_tmp * b_J1_1_tmp - J1_1_tmp * Jac_tmp)) +
            0.14615 * J1_1_tmp * Jac_tmp;
  b_Jac_tmp =
      std::cos(q[3]) * std::sin(q[0]) +
      std::sin(q[3]) * (std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2]) +
                        std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2]));
  c_Jac_tmp =
      std::sin(q[0]) * std::sin(q[3]) -
      std::cos(q[3]) * (std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2]) +
                        std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2]));
  Jac[24] =
      (0.072089 * d_J1_1_tmp * b_Jac_tmp + 0.14418 * c_J1_1_tmp * c_Jac_tmp) -
      0.12486 * d_J1_1_tmp * c_Jac_tmp_tmp;
  Jac[30] = 0.0;
  Jac[1] =
      (((((((0.007 * b_J1_1_tmp_tmp - 0.29 * std::cos(q[0]) * c_J1_1_tmp_tmp) -
            0.14615 * std::cos(q[3]) * b_J1_1_tmp_tmp) +
           0.072089 * std::cos(q[4]) * b_Jac_tmp) -
          0.14418 * std::sin(q[4]) * c_Jac_tmp) -
         0.14615 * std::sin(q[3]) * Jac_tmp) -
        0.12486 * std::cos(q[4]) * c_Jac_tmp_tmp) -
       0.25024 * std::cos(q[0]) * std::cos(q[1]) * e_J1_1_tmp_tmp) +
      0.25024 * std::cos(q[0]) * f_J1_1_tmp_tmp * c_J1_1_tmp_tmp;
  d_Jac_tmp = std::cos(q[1]) * std::sin(q[0]) * std::sin(q[2]) -
              std::cos(q[2]) * std::sin(q[0]) * std::sin(q[1]);
  e_Jac_tmp = 0.14615 * std::sin(q[3]) * d_Jac_tmp;
  f_Jac_tmp = 0.12486 * std::cos(q[4]) * Jac_tmp_tmp;
  b_Jac_tmp_tmp = 0.14418 * std::cos(q[3]) * std::sin(q[4]);
  g_Jac_tmp = b_Jac_tmp_tmp * d_Jac_tmp;
  d_Jac_tmp_tmp = 0.072089 * std::cos(q[4]) * std::sin(q[3]);
  h_Jac_tmp = d_Jac_tmp_tmp * d_Jac_tmp;
  Jac[7] =
      (((((f_Jac_tmp - 0.29 * d_J1_1_tmp_tmp * b_J1_1_tmp_tmp) - e_Jac_tmp) +
         0.25024 * b_J1_1_tmp_tmp * c_J1_1_tmp_tmp * e_J1_1_tmp_tmp) +
        g_Jac_tmp) +
       h_Jac_tmp) +
      0.25024 * std::cos(q[1]) * f_J1_1_tmp_tmp * b_J1_1_tmp_tmp;
  Jac[13] = ((((e_Jac_tmp - f_Jac_tmp) -
               0.25024 * std::sin(q[0]) * std::sin(q[1]) * std::sin(q[2])) -
              g_Jac_tmp) -
             h_Jac_tmp) -
            0.25024 * std::cos(q[1]) * std::cos(q[2]) * std::sin(q[0]);
  e_Jac_tmp =
      std::cos(q[0]) * std::sin(q[3]) +
      std::cos(q[3]) * (std::sin(q[0]) * std::sin(q[1]) * std::sin(q[2]) +
                        std::cos(q[1]) * std::cos(q[2]) * std::sin(q[0]));
  f_Jac_tmp =
      std::cos(q[0]) * std::cos(q[3]) -
      std::sin(q[3]) * (std::sin(q[0]) * std::sin(q[1]) * std::sin(q[2]) +
                        std::cos(q[1]) * std::cos(q[2]) * std::sin(q[0]));
  Jac[19] = ((0.072089 * std::cos(q[4]) * e_Jac_tmp -
              0.14615 * std::cos(q[0]) * b_J1_1_tmp) +
             0.14418 * std::sin(q[4]) * f_Jac_tmp) -
            0.14615 * std::cos(q[3]) * Jac_tmp_tmp;
  Jac[25] = (0.14418 * std::cos(q[4]) * e_Jac_tmp +
             0.072089 * std::sin(q[4]) * f_Jac_tmp) +
            0.12486 * std::sin(q[4]) * d_Jac_tmp;
  Jac[31] = 0.0;
  Jac[2] = 0.0;
  d_Jac_tmp_tmp_tmp = c_J1_1_tmp_tmp * e_J1_1_tmp_tmp;
  Jac_tmp_tmp_tmp += d_Jac_tmp_tmp_tmp;
  g_Jac_tmp = b_Jac_tmp_tmp * Jac_tmp_tmp_tmp;
  h_Jac_tmp = d_Jac_tmp_tmp * Jac_tmp_tmp_tmp;
  Jac[8] = (((((0.29 * c_J1_1_tmp_tmp + 0.12486 * std::cos(q[4]) *
                                            (d_J1_1_tmp_tmp * e_J1_1_tmp_tmp -
                                             f_J1_1_tmp_tmp * c_J1_1_tmp_tmp)) +
               0.25024 * std::cos(q[1]) * e_J1_1_tmp_tmp) -
              0.25024 * std::cos(q[2]) * c_J1_1_tmp_tmp) +
             0.14615 * std::sin(q[3]) * Jac_tmp_tmp_tmp) -
            g_Jac_tmp) -
           h_Jac_tmp;
  Jac[14] = ((((0.25024 * std::cos(q[2]) * std::sin(q[1]) -
                0.25024 * std::cos(q[1]) * std::sin(q[2])) -
               0.12486 * std::cos(q[4]) *
                   (std::cos(q[1]) * std::sin(q[2]) -
                    std::cos(q[2]) * std::sin(q[1]))) -
              0.14615 * std::sin(q[3]) *
                  (std::cos(q[1]) * std::cos(q[2]) +
                   std::sin(q[1]) * std::sin(q[2]))) +
             g_Jac_tmp) +
            h_Jac_tmp;
  g_Jac_tmp = std::cos(q[1]) * std::sin(q[2]) - std::cos(q[2]) * std::sin(q[1]);
  Jac[20] = (0.072089 * J1_1_tmp * c_J1_1_tmp * g_Jac_tmp -
             0.14615 * std::cos(q[3]) * g_Jac_tmp) -
            0.14418 * b_J1_1_tmp * d_J1_1_tmp * g_Jac_tmp;
  Jac[26] = (0.14418 * std::cos(q[3]) * c_J1_1_tmp * g_Jac_tmp -
             0.12486 * std::sin(q[4]) * Jac_tmp_tmp_tmp) -
            0.072089 * b_J1_1_tmp * d_J1_1_tmp * g_Jac_tmp;
  Jac[32] = 0.0;
  Jac[3] = 0.0;
  Jac[9] = -b_J1_1_tmp_tmp;
  Jac[15] = b_J1_1_tmp_tmp;
  Jac[21] = b_Jac_tmp_tmp_tmp - c_Jac_tmp_tmp_tmp;
  Jac[27] = ((0.5 * J1_1_tmp_tmp * f_J1_1_tmp_tmp * c_J1_1_tmp_tmp -
              0.86603 * b_J1_1_tmp * Jac_tmp) -
             0.5 * std::cos(q[0]) * d_J1_1_tmp_tmp * e_J1_1_tmp_tmp) -
            0.86603 * J1_1_tmp * b_J1_1_tmp_tmp;
  Jac[33] = (((((0.43301 * c_J1_1_tmp * b_Jac_tmp -
                 0.43301 * J1_1_tmp * b_J1_1_tmp_tmp) -
                0.86603 * d_J1_1_tmp * c_Jac_tmp) -
               0.43301 * b_J1_1_tmp * Jac_tmp) -
              0.75 * c_J1_1_tmp * c_Jac_tmp_tmp) -
             0.25 * J1_1_tmp_tmp * d_J1_1_tmp_tmp * e_J1_1_tmp_tmp) +
            0.25 * std::cos(q[0]) * f_J1_1_tmp_tmp * c_J1_1_tmp_tmp;
  Jac[4] = 0.0;
  Jac[10] = -J1_1_tmp_tmp;
  Jac[16] = J1_1_tmp_tmp;
  Jac[22] = d_Jac_tmp;
  Jac[28] = ((0.86603 * std::sin(q[3]) * Jac_tmp_tmp -
              0.86603 * J1_1_tmp_tmp * J1_1_tmp) +
             0.5 * d_J1_1_tmp_tmp * b_J1_1_tmp_tmp * e_J1_1_tmp_tmp) -
            0.5 * f_J1_1_tmp_tmp * b_J1_1_tmp_tmp * c_J1_1_tmp_tmp;
  Jac[34] = (((((0.43301 * std::cos(q[4]) * f_Jac_tmp -
                 0.86603 * std::sin(q[4]) * e_Jac_tmp) -
                0.43301 * J1_1_tmp_tmp * J1_1_tmp) +
               0.43301 * std::sin(q[3]) * Jac_tmp_tmp) +
              0.75 * std::cos(q[4]) * d_Jac_tmp) +
             0.25 * d_J1_1_tmp_tmp * b_J1_1_tmp_tmp * e_J1_1_tmp_tmp) -
            0.25 * f_J1_1_tmp_tmp * b_J1_1_tmp_tmp * c_J1_1_tmp_tmp;
  Jac[5] = -1.0;
  Jac[11] = 0.0;
  Jac[17] = 0.0;
  Jac[23] = -d_J1_1_tmp_tmp * f_J1_1_tmp_tmp - d_Jac_tmp_tmp_tmp;
  Jac[29] = (0.86603 * std::sin(q[3]) * g_Jac_tmp -
             0.5 * std::cos(q[1]) * f_J1_1_tmp_tmp) -
            0.5 * c_J1_1_tmp_tmp * e_J1_1_tmp_tmp;
  Jac[35] = ((((0.43301 * std::sin(q[3]) * g_Jac_tmp -
                0.25 * std::cos(q[1]) * f_J1_1_tmp_tmp) -
               0.25 * c_J1_1_tmp_tmp * e_J1_1_tmp_tmp) -
              0.75 * std::cos(q[4]) * Jac_tmp_tmp_tmp) -
             0.86603 * std::cos(q[3]) * d_J1_1_tmp * g_Jac_tmp) -
            0.43301 * std::cos(q[4]) * b_J1_1_tmp * g_Jac_tmp;
}

void Mico::transform(const double q[6], double T[16])
{
  double T1_1_tmp;
  double T1_1_tmp_tmp;
  double T_tmp_tmp;
  double T_tmp_tmp_tmp;
  double b_T1_1_tmp;
  double b_T1_1_tmp_tmp;
  double b_T_tmp_tmp;
  double c_T1_1_tmp;
  double c_T1_1_tmp_tmp;
  double c_T_tmp_tmp;
  double d_T1_1_tmp;
  double d_T1_1_tmp_tmp;
  double d_T_tmp_tmp;
  double e_T1_1_tmp_tmp;
  double f_T1_1_tmp_tmp;
  double g_T1_1_tmp_tmp;
  double h_T1_1_tmp_tmp;
  T1_1_tmp_tmp = std::cos(q[0]);
  b_T1_1_tmp_tmp = std::cos(q[3]);
  c_T1_1_tmp_tmp = std::sin(q[0]);
  d_T1_1_tmp_tmp = std::sin(q[3]);
  T1_1_tmp = std::cos(q[4]);
  e_T1_1_tmp_tmp = std::sin(q[2]);
  f_T1_1_tmp_tmp = std::cos(q[2]);
  g_T1_1_tmp_tmp = std::sin(q[1]);
  b_T1_1_tmp = std::sin(q[4]);
  c_T1_1_tmp = std::sin(q[5]);
  h_T1_1_tmp_tmp = std::cos(q[1]);
  d_T1_1_tmp = std::cos(q[5]);
  T_tmp_tmp_tmp = T1_1_tmp_tmp * h_T1_1_tmp_tmp;
  T_tmp_tmp = T_tmp_tmp_tmp * f_T1_1_tmp_tmp +
              T1_1_tmp_tmp * g_T1_1_tmp_tmp * e_T1_1_tmp_tmp;
  b_T_tmp_tmp = b_T1_1_tmp_tmp * c_T1_1_tmp_tmp + d_T1_1_tmp_tmp * T_tmp_tmp;
  c_T_tmp_tmp = c_T1_1_tmp_tmp * d_T1_1_tmp_tmp - b_T1_1_tmp_tmp * T_tmp_tmp;
  d_T_tmp_tmp = T_tmp_tmp_tmp * e_T1_1_tmp_tmp -
                T1_1_tmp_tmp * f_T1_1_tmp_tmp * g_T1_1_tmp_tmp;
  T[0] =
      (0.5 * c_T1_1_tmp *
           ((b_T1_1_tmp * c_T_tmp_tmp - 0.5 * T1_1_tmp * b_T_tmp_tmp) +
            0.86603 * T1_1_tmp * d_T_tmp_tmp) -
       d_T1_1_tmp * ((0.5 * b_T1_1_tmp * b_T_tmp_tmp + T1_1_tmp * c_T_tmp_tmp) -
                     0.86603 * b_T1_1_tmp * d_T_tmp_tmp)) -
      0.86603 * c_T1_1_tmp *
          (((0.86603 * b_T1_1_tmp_tmp * c_T1_1_tmp_tmp +
             0.86603 * d_T1_1_tmp_tmp * T_tmp_tmp) +
            0.5 * T1_1_tmp_tmp * h_T1_1_tmp_tmp * e_T1_1_tmp_tmp) -
           0.5 * std::cos(q[0]) * f_T1_1_tmp_tmp * g_T1_1_tmp_tmp);
  T[4] = (0.86603 * d_T1_1_tmp *
              (((0.86603 * std::cos(q[3]) * std::sin(q[0]) +
                 0.86603 * std::sin(q[3]) *
                     (std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2]) +
                      std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2]))) +
                0.5 * std::cos(q[0]) * std::cos(q[1]) * std::sin(q[2])) -
               0.5 * std::cos(q[0]) * std::cos(q[2]) * std::sin(q[1])) -
          0.5 * d_T1_1_tmp *
              ((std::sin(q[4]) *
                    (std::sin(q[0]) * std::sin(q[3]) -
                     std::cos(q[3]) *
                         (std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2]) +
                          std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2]))) -
                0.5 * std::cos(q[4]) *
                    (std::cos(q[3]) * std::sin(q[0]) +
                     std::sin(q[3]) *
                         (std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2]) +
                          std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2])))) +
               0.86603 * std::cos(q[4]) *
                   (std::cos(q[0]) * std::cos(q[1]) * std::sin(q[2]) -
                    std::cos(q[0]) * std::cos(q[2]) * std::sin(q[1])))) -
         c_T1_1_tmp *
             ((0.5 * std::sin(q[4]) *
                   (std::cos(q[3]) * std::sin(q[0]) +
                    std::sin(q[3]) *
                        (std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2]) +
                         std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2]))) +
               std::cos(q[4]) *
                   (std::sin(q[0]) * std::sin(q[3]) -
                    std::cos(q[3]) *
                        (std::cos(q[0]) * std::cos(q[1]) * std::cos(q[2]) +
                         std::cos(q[0]) * std::sin(q[1]) * std::sin(q[2])))) -
              0.86603 * std::sin(q[4]) *
                  (std::cos(q[0]) * std::cos(q[1]) * std::sin(q[2]) -
                   std::cos(q[0]) * std::cos(q[2]) * std::sin(q[1])));
  T[8] = (((((0.43301 * b_T1_1_tmp_tmp * c_T1_1_tmp_tmp -
              0.43301 * T1_1_tmp * b_T_tmp_tmp) +
             0.86603 * std::sin(q[4]) * c_T_tmp_tmp) +
            0.43301 * d_T1_1_tmp_tmp * T_tmp_tmp) +
           0.75 * T1_1_tmp * d_T_tmp_tmp) +
          0.25 * T1_1_tmp_tmp * h_T1_1_tmp_tmp * e_T1_1_tmp_tmp) -
         0.25 * std::cos(q[0]) * f_T1_1_tmp_tmp * g_T1_1_tmp_tmp;
  T[12] =
      (((((((0.29 * T1_1_tmp_tmp * g_T1_1_tmp_tmp - 0.007 * c_T1_1_tmp_tmp) +
            0.15004 * b_T1_1_tmp_tmp * c_T1_1_tmp_tmp) -
           0.075976 * T1_1_tmp * b_T_tmp_tmp) +
          0.15195 * b_T1_1_tmp * c_T_tmp_tmp) +
         0.15004 * d_T1_1_tmp_tmp * T_tmp_tmp) +
        0.13159 * T1_1_tmp * d_T_tmp_tmp) +
       0.25248 * T1_1_tmp_tmp * h_T1_1_tmp_tmp * e_T1_1_tmp_tmp) -
      0.25248 * std::cos(q[0]) * f_T1_1_tmp_tmp * g_T1_1_tmp_tmp;
  T_tmp_tmp_tmp = h_T1_1_tmp_tmp * f_T1_1_tmp_tmp;
  T_tmp_tmp = c_T1_1_tmp_tmp * g_T1_1_tmp_tmp * e_T1_1_tmp_tmp +
              T_tmp_tmp_tmp * c_T1_1_tmp_tmp;
  b_T_tmp_tmp = T1_1_tmp_tmp * d_T1_1_tmp_tmp + b_T1_1_tmp_tmp * T_tmp_tmp;
  c_T_tmp_tmp = T1_1_tmp_tmp * b_T1_1_tmp_tmp - d_T1_1_tmp_tmp * T_tmp_tmp;
  d_T_tmp_tmp = h_T1_1_tmp_tmp * c_T1_1_tmp_tmp * e_T1_1_tmp_tmp -
                f_T1_1_tmp_tmp * c_T1_1_tmp_tmp * g_T1_1_tmp_tmp;
  T[1] = (-d_T1_1_tmp *
              ((T1_1_tmp * b_T_tmp_tmp + 0.5 * std::sin(q[4]) * c_T_tmp_tmp) +
               0.86603 * std::sin(q[4]) * d_T_tmp_tmp) -
          0.86603 * std::sin(q[5]) *
              (((0.86603 * T1_1_tmp_tmp * b_T1_1_tmp_tmp -
                 0.86603 * std::sin(q[3]) * T_tmp_tmp) -
                0.5 * h_T1_1_tmp_tmp * c_T1_1_tmp_tmp * e_T1_1_tmp_tmp) +
               0.5 * f_T1_1_tmp_tmp * c_T1_1_tmp_tmp * g_T1_1_tmp_tmp)) -
         0.5 * std::sin(q[5]) *
             ((0.5 * std::cos(q[4]) * c_T_tmp_tmp - b_T1_1_tmp * b_T_tmp_tmp) +
              0.86603 * std::cos(q[4]) * d_T_tmp_tmp);
  T[5] = (0.86603 * std::cos(q[5]) *
              (((0.86603 * std::cos(q[0]) * std::cos(q[3]) -
                 0.86603 * std::sin(q[3]) *
                     (std::sin(q[0]) * std::sin(q[1]) * std::sin(q[2]) +
                      std::cos(q[1]) * std::cos(q[2]) * std::sin(q[0]))) -
                0.5 * std::cos(q[1]) * std::sin(q[0]) * std::sin(q[2])) +
               0.5 * std::cos(q[2]) * std::sin(q[0]) * std::sin(q[1])) -
          c_T1_1_tmp *
              ((std::cos(q[4]) *
                    (std::cos(q[0]) * std::sin(q[3]) +
                     std::cos(q[3]) *
                         (std::sin(q[0]) * std::sin(q[1]) * std::sin(q[2]) +
                          std::cos(q[1]) * std::cos(q[2]) * std::sin(q[0]))) +
                0.5 * std::sin(q[4]) *
                    (std::cos(q[0]) * std::cos(q[3]) -
                     std::sin(q[3]) *
                         (std::sin(q[0]) * std::sin(q[1]) * std::sin(q[2]) +
                          std::cos(q[1]) * std::cos(q[2]) * std::sin(q[0])))) +
               0.86603 * std::sin(q[4]) *
                   (std::cos(q[1]) * std::sin(q[0]) * std::sin(q[2]) -
                    std::cos(q[2]) * std::sin(q[0]) * std::sin(q[1])))) +
         0.5 * std::cos(q[5]) *
             ((0.5 * std::cos(q[4]) *
                   (std::cos(q[0]) * std::cos(q[3]) -
                    std::sin(q[3]) *
                        (std::sin(q[0]) * std::sin(q[1]) * std::sin(q[2]) +
                         std::cos(q[1]) * std::cos(q[2]) * std::sin(q[0]))) -
               std::sin(q[4]) *
                   (std::cos(q[0]) * std::sin(q[3]) +
                    std::cos(q[3]) *
                        (std::sin(q[0]) * std::sin(q[1]) * std::sin(q[2]) +
                         std::cos(q[1]) * std::cos(q[2]) * std::sin(q[0])))) +
              0.86603 * std::cos(q[4]) *
                  (std::cos(q[1]) * std::sin(q[0]) * std::sin(q[2]) -
                   std::cos(q[2]) * std::sin(q[0]) * std::sin(q[1])));
  T[9] = (((((0.43301 * T1_1_tmp_tmp * b_T1_1_tmp_tmp +
              0.86603 * std::sin(q[4]) * b_T_tmp_tmp) -
             0.43301 * std::cos(q[4]) * c_T_tmp_tmp) -
            0.43301 * std::sin(q[3]) * T_tmp_tmp) -
           0.75 * std::cos(q[4]) * d_T_tmp_tmp) -
          0.25 * h_T1_1_tmp_tmp * c_T1_1_tmp_tmp * e_T1_1_tmp_tmp) +
         0.25 * f_T1_1_tmp_tmp * c_T1_1_tmp_tmp * g_T1_1_tmp_tmp;
  T[13] =
      (((((((0.15004 * T1_1_tmp_tmp * b_T1_1_tmp_tmp - 0.007 * T1_1_tmp_tmp) -
            0.29 * c_T1_1_tmp_tmp * g_T1_1_tmp_tmp) +
           0.15195 * std::sin(q[4]) * b_T_tmp_tmp) -
          0.075976 * std::cos(q[4]) * c_T_tmp_tmp) -
         0.15004 * std::sin(q[3]) * T_tmp_tmp) -
        0.13159 * std::cos(q[4]) * d_T_tmp_tmp) -
       0.25248 * h_T1_1_tmp_tmp * c_T1_1_tmp_tmp * e_T1_1_tmp_tmp) +
      0.25248 * f_T1_1_tmp_tmp * c_T1_1_tmp_tmp * g_T1_1_tmp_tmp;
  T_tmp_tmp = h_T1_1_tmp_tmp * e_T1_1_tmp_tmp - f_T1_1_tmp_tmp * g_T1_1_tmp_tmp;
  b_T_tmp_tmp = T_tmp_tmp_tmp + g_T1_1_tmp_tmp * e_T1_1_tmp_tmp;
  T[2] = (0.5 * std::sin(q[5]) *
              ((0.86603 * std::cos(q[4]) * b_T_tmp_tmp +
                b_T1_1_tmp_tmp * b_T1_1_tmp * T_tmp_tmp) +
               0.5 * std::cos(q[4]) * d_T1_1_tmp_tmp * T_tmp_tmp) -
          0.86603 * std::sin(q[5]) *
              ((0.5 * std::cos(q[1]) * f_T1_1_tmp_tmp -
                0.86603 * std::sin(q[3]) * T_tmp_tmp) +
               0.5 * g_T1_1_tmp_tmp * e_T1_1_tmp_tmp)) +
         d_T1_1_tmp * ((0.86603 * std::sin(q[4]) * b_T_tmp_tmp -
                        b_T1_1_tmp_tmp * T1_1_tmp * T_tmp_tmp) +
                       0.5 * d_T1_1_tmp_tmp * b_T1_1_tmp * T_tmp_tmp);
  T[6] = (0.86603 * std::cos(q[5]) *
              ((0.5 * std::cos(q[1]) * std::cos(q[2]) -
                0.86603 * std::sin(q[3]) *
                    (std::cos(q[1]) * std::sin(q[2]) -
                     std::cos(q[2]) * std::sin(q[1]))) +
               0.5 * std::sin(q[1]) * std::sin(q[2])) -
          0.5 * std::cos(q[5]) *
              ((0.86603 * std::cos(q[4]) *
                    (std::cos(q[1]) * std::cos(q[2]) +
                     std::sin(q[1]) * std::sin(q[2])) +
                std::cos(q[3]) * std::sin(q[4]) *
                    (std::cos(q[1]) * std::sin(q[2]) -
                     std::cos(q[2]) * std::sin(q[1]))) +
               0.5 * std::cos(q[4]) * std::sin(q[3]) *
                   (std::cos(q[1]) * std::sin(q[2]) -
                    std::cos(q[2]) * std::sin(q[1])))) +
         c_T1_1_tmp * ((0.86603 * std::sin(q[4]) *
                            (std::cos(q[1]) * std::cos(q[2]) +
                             std::sin(q[1]) * std::sin(q[2])) -
                        std::cos(q[3]) * std::cos(q[4]) *
                            (std::cos(q[1]) * std::sin(q[2]) -
                             std::cos(q[2]) * std::sin(q[1]))) +
                       0.5 * std::sin(q[3]) * std::sin(q[4]) *
                           (std::cos(q[1]) * std::sin(q[2]) -
                            std::cos(q[2]) * std::sin(q[1])));
  T[10] = ((((0.25 * std::cos(q[1]) * f_T1_1_tmp_tmp -
              0.43301 * std::sin(q[3]) * T_tmp_tmp) +
             0.25 * g_T1_1_tmp_tmp * e_T1_1_tmp_tmp) +
            0.75 * std::cos(q[4]) * b_T_tmp_tmp) +
           0.86603 * std::cos(q[3]) * b_T1_1_tmp * T_tmp_tmp) +
          0.43301 * std::cos(q[4]) * d_T1_1_tmp_tmp * T_tmp_tmp;
  T[14] =
      ((((((0.25248 * std::cos(q[1]) * f_T1_1_tmp_tmp - 0.29 * h_T1_1_tmp_tmp) -
           0.15004 * std::sin(q[3]) * T_tmp_tmp) +
          0.25248 * g_T1_1_tmp_tmp * e_T1_1_tmp_tmp) +
         0.13159 * std::cos(q[4]) * b_T_tmp_tmp) +
        0.15195 * b_T1_1_tmp_tmp * b_T1_1_tmp * T_tmp_tmp) +
       0.075976 * std::cos(q[4]) * d_T1_1_tmp_tmp * T_tmp_tmp) +
      0.2755;
  T[3] = 0.0;
  T[7] = 0.0;
  T[11] = 0.0;
  T[15] = 1.0;
}

// End of code generation (Mico.cpp)
