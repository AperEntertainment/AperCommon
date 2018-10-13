/*
 * Copyright © 2018 AperLambda <aperlambda@gmail.com>
 *
 * This file is part of λcommon.
 *
 * Licensed under the MIT license. For more information,
 * see the LICENSE file.
 */

#ifndef CLAMBDACOMMON_TIME_H
#define CLAMBDACOMMON_TIME_H

#include <inttypes.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * Gets the current time in milliseconds.
 * @return The difference, measured in milliseconds, between the current time and midnight, January 1, 1970 UTC.
 */
time_t lc_time_getTimeMillis();

#ifdef __cplusplus
}
#endif

#endif //CLAMBDACOMMON_TIME_H