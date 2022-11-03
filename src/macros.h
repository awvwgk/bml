/** \file */

#ifndef __BML_MACROS_H
#define __BML_MACROS_H

/** Row major access.
 *
 * \param i Row index.
 * \param j Column index.
 * \param M Number of rows.
 * \param N Number of columns.
 */
#define ROWMAJOR(i, j, M, N) (i) * (N) + (j)

/** Column major access.
 *
 * \param i Row index.
 * \param j Column index.
 * \param M Number of rows.
 * \param N Number of columns.
 */
#define COLMAJOR(i, j, M, N) (i) + (j) * (M)

/** The min of two arguments.
 *
 * \param a The first argument.
 * \param b The second argument.
 * \return The smaller of the two input arguments.
 */
#define MIN(a, b) ((a) < (b) ? a : b)

/** The max of two arguments.
 *
 * \param a The first argument.
 * \param b The second argument.
 * \return The larger of the two input arguments.
 */
#define MAX(a, b) ((a) > (b) ? a : b)

/** Number of outer loop iterations for offload code
 */

#define BML_OFFLOAD_CHUNKS (defined(INTEL_SDK) || defined(CRAY_SDK) || defined(__IBMC__) || defined(__ibmxl__))

#ifdef BML_OFFLOAD_CHUNKS
#ifndef BML_OFFLOAD_NUM_CHUNKS
#define BML_OFFLOAD_NUM_CHUNKS 128
#endif
#endif
#endif
