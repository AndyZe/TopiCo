//
// Student License - for use by students to meet course requirements and
// perform academic research at degree granting institutions only.  Not
// for government, commercial, or other organizational use.
//
// acdefg_T_A.cpp
//
// Code generation for function 'acdefg_T_A'
//

// Include files
#include "acdefg_T_A.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "topico_wrapper_data.h"

// Function Definitions
void acdefg_T_A(double V_init, double A_init, double A_wayp, double V_max,
                double A_min, double J_max, double J_min, double T,
                creal_T t[14])
{
  creal_T t1[2];
  creal_T t6[2];
  creal_T t6_tmp[2];
  creal_T l17;
  double A_min_re;
  double V_init_re;
  double ar;
  double b_y;
  double im;
  double l14;
  double l3_tmp;
  double l4;
  double l4_re;
  double l5;
  double t1_im_tmp;
  double y;
  double y_re;
  //  ---------------------------------------------------------------------
  //  Package:    TopiCo (https://github.com/AIS-Bonn/TopiCo)
  //  Version:    2021-03-18 12:09:55
  //  Maintainer: Marius Beul (mbeul@ais.uni-bonn.de)
  //  License:    BSD
  //  ---------------------------------------------------------------------
  //  Software License Agreement (BSD License)
  //  Copyright (c) 2021, Computer Science Institute VI, University of Bonn
  //  All rights reserved.
  //  Redistribution and use in source and binary forms, with or without
  //  modification, are permitted provided that the following conditions
  //  are met:
  //
  //  * Redistributions of source code must retain the above copyright
  //    notice, this list of conditions and the following disclaimer.
  //  * Redistributions in binary form must reproduce the above
  //    copyright notice, this list of conditions and the following
  //    disclaimer in the documentation and/or other materials provided
  //    with the distribution.
  //  * Neither the name of University of Bonn, Computer Science Institute
  //    VI nor the names of its contributors may be used to endorse or
  //    promote products derived from this software without specific
  //    prior written permission.
  //
  //  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  //  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  //  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
  //  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
  //  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  //  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
  //  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  //  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  //  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
  //  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
  //  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  //  POSSIBILITY OF SUCH DAMAGE.
  //  --------------------------------------------------------------------
  //  Generated on 29-Aug-2019 15:51:22
  l4 = A_init * J_min;
  l5 = A_init * J_max;
  l14 = 1.0 / (J_max * J_max + -(J_min * J_max));
  l17.re = J_min * (J_min + -J_max) *
           ((A_init * A_init + J_max * V_max * 2.0) + -(J_max * V_init * 2.0));
  l17.im = 0.0;
  coder::internal::scalar::b_sqrt(&l17);
  t1[0].re = l14 * ((l4 - l5) + l17.re);
  t1[0].im = l14 * l17.im;
  t1[1].re = -l14 * ((-l4 + l5) + l17.re);
  t1[1].im = -l14 * l17.im;
  l3_tmp = 1.0 / J_min;
  l4 = 1.0 / J_max;
  l14 = A_min + -A_wayp;
  y = A_wayp * A_wayp;
  b_y = A_min * 2.0;
  l17.re = J_min * V_max * 2.0;
  V_init_re = V_init * 2.0;
  y_re = A_min * A_min * l3_tmp;
  l4_re = l4 * (l14 * l14);
  A_min_re = A_min * l4 * l14 * 2.0;
  l5 = 1.0 / J_max * l14;
  l14 = J_max * t1[0].re;
  im = J_max * t1[0].im;
  t6_tmp[0].re = l14;
  t6_tmp[0].im = im;
  l4 = A_init + l14;
  l14 = l4 * im;
  t1_im_tmp = t1[0].re * t1[0].im;
  ar = l3_tmp *
       (((l17.re + (l4 * l4 - im * im)) + y) -
        J_min * (((((V_init_re + A_init * t1[0].re * 2.0) + y_re) +
                   J_max * (t1[0].re * t1[0].re - t1[0].im * t1[0].im)) +
                  l4_re) -
                 A_min_re));
  l14 = l3_tmp * ((l14 + l14) - J_min * (A_init * t1[0].im * 2.0 +
                                         J_max * (t1_im_tmp + t1_im_tmp)));
  if (l14 == 0.0) {
    t6[0].re = ar / b_y;
    t6[0].im = 0.0;
  } else if (ar == 0.0) {
    t6[0].re = 0.0;
    t6[0].im = l14 / b_y;
  } else {
    t6[0].re = ar / b_y;
    t6[0].im = l14 / b_y;
  }
  t[0] = t1[0];
  t[2].re = 0.0;
  t[2].im = 0.0;
  if (-im == 0.0) {
    t[4].re = -l4 / J_min;
    t[4].im = 0.0;
  } else if (-l4 == 0.0) {
    t[4].re = 0.0;
    t[4].im = -im / J_min;
  } else {
    t[4].re = -l4 / J_min;
    t[4].im = -im / J_min;
  }
  im = J_max * t1[1].im;
  l4 = A_init + J_max * t1[1].re;
  l14 = l4 * im;
  t1_im_tmp = t1[1].re * t1[1].im;
  ar = l3_tmp *
       (((l17.re + (l4 * l4 - im * im)) + y) -
        J_min * (((((V_init_re + A_init * t1[1].re * 2.0) + y_re) +
                   J_max * (t1[1].re * t1[1].re - t1[1].im * t1[1].im)) +
                  l4_re) -
                 A_min_re));
  l14 = l3_tmp * ((l14 + l14) - J_min * (A_init * t1[1].im * 2.0 +
                                         J_max * (t1_im_tmp + t1_im_tmp)));
  if (l14 == 0.0) {
    t6[1].re = ar / b_y;
    t6[1].im = 0.0;
  } else if (ar == 0.0) {
    t6[1].re = 0.0;
    t6[1].im = l14 / b_y;
  } else {
    t6[1].re = ar / b_y;
    t6[1].im = l14 / b_y;
  }
  t[1] = t1[1];
  t[3].re = 0.0;
  t[3].im = 0.0;
  if (-im == 0.0) {
    t[5].re = -l4 / J_min;
    t[5].im = 0.0;
  } else if (-l4 == 0.0) {
    t[5].re = 0.0;
    t[5].im = -im / J_min;
  } else {
    t[5].re = -l4 / J_min;
    t[5].im = -im / J_min;
  }
  l14 = A_min * (1.0 / J_min);
  l17.re = J_min * T;
  t[8].re = l14;
  t[8].im = 0.0;
  t[9].re = l14;
  t[9].im = 0.0;
  t[6].re = l3_tmp * (((A_init + t6_tmp[0].re) -
                       J_min * (((t1[0].re + t6[0].re) + -l5) + l14)) +
                      l17.re);
  t[6].im = l3_tmp * (t6_tmp[0].im - J_min * (t1[0].im + t6[0].im));
  t[10] = t6[0];
  t[12].re = -l5;
  t[12].im = 0.0;
  t[7].re =
      l3_tmp * ((l4 - J_min * (((t1[1].re + t6[1].re) + -l5) + l14)) + l17.re);
  t[7].im = l3_tmp * (im - J_min * (t1[1].im + t6[1].im));
  t[11] = t6[1];
  t[13].re = -l5;
  t[13].im = 0.0;
}

// End of code generation (acdefg_T_A.cpp)
