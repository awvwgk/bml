/** \file */

#ifndef __BML_MULTIPLY_H
#define __BML_MULTIPLY_H

#include "bml_types.h"

// Multiply - C = alpha * A * B + beta * C
void bml_multiply(const bml_matrix_t *A, const bml_matrix_t *B, const bml_matrix_t *C, const double alpha, const double beta, const double threshold);

// Multiply X^2 - X2 = X * X
void bml_multiply_x2(const bml_matrix_t *X, const bml_matrix_t *X2, const double threshold);

#endif
