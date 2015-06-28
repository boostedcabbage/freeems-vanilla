/* FreeEMS - the open source engine management system
 *
 * Copyright 2012 Fred Cooke
 *
 * This file is part of the FreeEMS project.
 *
 * FreeEMS software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FreeEMS software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with any FreeEMS software.  If not, see http://www.gnu.org/licenses/
 *
 * We ask that if you make any changes to this file you email them upstream to
 * us at admin(at)diyefi(dot)org or, even better, fork the code on github.com!
 *
 * Thank you for choosing FreeEMS to run your engine!
 */


/** @file
 *
 * @ingroup dataInitialisers
 *
 * @brief boostedcabbage's Neon's lambda
 */

//200       700       1200       1600       2000       2400       2800       3200       3600       4000       4400       4800       5200       5600       6000       6400       6800       7200       7600
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 15 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 20 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 25 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 30 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 35 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 40 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 45 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 50 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 55 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 60 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 65 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 70 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 75 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 80 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 85 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 90 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 95 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  // 100 kPa
LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1),  LR(1)  // 105 kPa