#include "bml_logger.h"
#include "bml_threshold.h"
#include "bml_threshold_ellpack.h"
#include "bml_types.h"
#include "bml_types_ellpack.h"

#include <stdlib.h>
#include <string.h>

/** Threshold a matrix.
 *
 *  \ingroup threshold_group
 *
 *  \param A The matrix to be thresholded
 *  \param threshold Threshold value
 *  \return the thresholded A
 */
bml_matrix_ellpack_t
*bml_threshold_new_ellpack(
    const bml_matrix_ellpack_t * A, const double threshold)
{
    bml_matrix_ellpack_t *B = NULL;

    switch (A->matrix_precision)
    {
        case single_real:
            B = bml_threshold_new_ellpack_single_real(A, threshold);
            break;
        case double_real:
            B = bml_threshold_new_ellpack_double_real(A, threshold);
            break;
        default:
            LOG_ERROR("unknown precision\n");
            break;
    }
    return B;
}

/** Threshold a matrix in place.
 *
 *  \ingroup threshold_group
 *
 *  \param A The matrix to be thresholded
 *  \param threshold Threshold value
 *  \return the thresholded A
 */
void bml_threshold_ellpack(
    const bml_matrix_ellpack_t * A, const double threshold)
{

    switch (A->matrix_precision)
    {
        case single_real:
            bml_threshold_ellpack_single_real(A, threshold);
            break;
        case double_real:
            bml_threshold_ellpack_double_real(A, threshold);
            break;
        default:
            LOG_ERROR("unknown precision\n");
            break;
    }
}
