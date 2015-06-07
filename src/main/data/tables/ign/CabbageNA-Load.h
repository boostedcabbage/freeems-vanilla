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
 * @brief boostedcabbage's Neon's ignition table. Magic interpolation that I'd rather not talk about.
 */

//200        700        1200        1600        2000        2400        2800        3200        3600        4000        4400        4800        5200        5600        6000        6400        6800        7200        7600
IT(10.0),   IT(19.6),   IT(20.2),   IT(20.8),   IT(21.4),   IT(22.0),   IT(22.6),   IT(23.2),   IT(23.8),   IT(24.4),   IT(25.0),   IT(25.6),   IT(26.2),   IT(26.8),   IT(27.4),   IT(28.0),   IT(28.6),   IT(29.2),   IT(29.8),   // 15 kPa
IT(10.0),   IT(19.6),   IT(20.2),   IT(20.8),   IT(21.4),   IT(22.0),   IT(22.6),   IT(23.2),   IT(23.8),   IT(24.4),   IT(25.0),   IT(25.6),   IT(26.2),   IT(26.8),   IT(27.4),   IT(28.0),   IT(28.6),   IT(29.2),   IT(29.8),   // 20 kPa
IT(10.0),   IT(19.6),   IT(20.2),   IT(20.8),   IT(21.4),   IT(22.0),   IT(22.6),   IT(23.2),   IT(23.8),   IT(24.4),   IT(25.0),   IT(25.6),   IT(26.2),   IT(26.8),   IT(27.4),   IT(28.0),   IT(28.6),   IT(29.2),   IT(29.8),   // 25 kPa
IT(10.0),   IT(19.6),   IT(20.2),   IT(20.8),   IT(21.4),   IT(22.0),   IT(22.6),   IT(23.2),   IT(23.8),   IT(24.4),   IT(25.0),   IT(25.6),   IT(26.2),   IT(26.8),   IT(27.4),   IT(28.0),   IT(28.6),   IT(29.2),   IT(29.8),   // 30 kPa
IT(10.0),   IT(19.6),   IT(20.2),   IT(20.8),   IT(21.4),   IT(22.0),   IT(22.6),   IT(23.2),   IT(23.8),   IT(24.4),   IT(25.0),   IT(25.6),   IT(26.2),   IT(26.8),   IT(27.4),   IT(28.0),   IT(28.6),   IT(29.2),   IT(29.8),   // 35 kPa
IT(10.0),   IT(19.6),   IT(20.2),   IT(20.8),   IT(21.4),   IT(22.0),   IT(22.6),   IT(23.2),   IT(23.8),   IT(24.4),   IT(25.0),   IT(25.6),   IT(26.2),   IT(26.8),   IT(27.4),   IT(28.0),   IT(28.6),   IT(29.2),   IT(29.8),   // 40 kPa
IT(10.0),   IT(19.6),   IT(20.2),   IT(20.8),   IT(21.4),   IT(22.0),   IT(22.6),   IT(23.2),   IT(23.8),   IT(24.4),   IT(25.0),   IT(25.6),   IT(26.2),   IT(26.8),   IT(27.4),   IT(28.0),   IT(28.6),   IT(29.2),   IT(29.8),   // 45 kPa
IT(10.0),   IT(17.7),   IT(18.4),   IT(19.1),   IT(19.8),   IT(20.5),   IT(21.2),   IT(21.9),   IT(22.6),   IT(23.3),   IT(24.0),   IT(24.7),   IT(25.4),   IT(26.1),   IT(26.8),   IT(27.5),   IT(28.2),   IT(28.9),   IT(29.6),   // 50 kPa
IT(10.0),   IT(17.7),   IT(18.4),   IT(19.1),   IT(19.8),   IT(20.5),   IT(21.2),   IT(21.9),   IT(22.6),   IT(23.3),   IT(24.0),   IT(24.7),   IT(25.4),   IT(26.1),   IT(26.8),   IT(27.5),   IT(28.2),   IT(28.9),   IT(29.6),   // 55 kPa
IT(10.0),   IT(17.7),   IT(18.4),   IT(19.1),   IT(19.8),   IT(20.5),   IT(21.2),   IT(21.9),   IT(22.6),   IT(23.3),   IT(24.0),   IT(24.7),   IT(25.4),   IT(26.1),   IT(26.8),   IT(27.5),   IT(28.2),   IT(28.9),   IT(29.6),   // 60 kPa
IT(9.00),   IT(17.7),   IT(18.4),   IT(19.1),   IT(19.8),   IT(20.5),   IT(21.2),   IT(21.9),   IT(22.6),   IT(23.3),   IT(24.0),   IT(24.7),   IT(25.4),   IT(26.1),   IT(26.8),   IT(27.5),   IT(28.2),   IT(28.9),   IT(29.6),   // 65 kPa
IT(9.00),   IT(16.8),   IT(17.6),   IT(18.4),   IT(19.2),   IT(20.0),   IT(20.8),   IT(21.6),   IT(22.4),   IT(23.2),   IT(24.0),   IT(24.8),   IT(25.6),   IT(26.4),   IT(27.2),   IT(28.0),   IT(28.8),   IT(29.6),   IT(30.4),   // 70 kPa
IT(7.00),   IT(16.8),   IT(17.6),   IT(18.4),   IT(19.2),   IT(20.0),   IT(20.8),   IT(21.6),   IT(22.4),   IT(23.2),   IT(24.0),   IT(24.8),   IT(25.6),   IT(26.4),   IT(27.2),   IT(28.0),   IT(28.8),   IT(29.6),   IT(30.4),   // 75 kPa
IT(7.00),   IT(13.9),   IT(14.8),   IT(15.7),   IT(16.6),   IT(17.5),   IT(18.4),   IT(19.3),   IT(20.2),   IT(21.1),   IT(22.0),   IT(22.9),   IT(23.8),   IT(24.7),   IT(25.6),   IT(26.5),   IT(27.4),   IT(28.3),   IT(29.2),   // 80 kPa
IT(6.00),   IT(13.9),   IT(14.8),   IT(15.7),   IT(16.6),   IT(17.5),   IT(18.4),   IT(19.3),   IT(20.2),   IT(21.1),   IT(22.0),   IT(22.9),   IT(23.8),   IT(24.7),   IT(25.6),   IT(26.5),   IT(27.4),   IT(28.3),   IT(29.2),   // 85 kPa
IT(5.00),   IT(13.9),   IT(14.8),   IT(15.7),   IT(16.6),   IT(17.5),   IT(18.4),   IT(19.3),   IT(20.2),   IT(21.1),   IT(22.0),   IT(22.9),   IT(23.8),   IT(24.7),   IT(25.6),   IT(26.5),   IT(27.4),   IT(28.3),   IT(29.2),   // 90 kPa
IT(5.00),   IT(13.9),   IT(14.8),   IT(15.7),   IT(16.6),   IT(17.5),   IT(18.4),   IT(19.3),   IT(20.2),   IT(21.1),   IT(22.0),   IT(22.9),   IT(23.8),   IT(24.7),   IT(25.6),   IT(26.5),   IT(27.4),   IT(28.3),   IT(29.2),   // 95 kPa
IT(4.00),   IT(13.9),   IT(14.8),   IT(15.7),   IT(16.6),   IT(17.5),   IT(18.4),   IT(19.3),   IT(20.2),   IT(21.1),   IT(22.0),   IT(22.9),   IT(23.8),   IT(24.7),   IT(25.6),   IT(26.5),   IT(27.4),   IT(28.3),   IT(29.2),   // 100 kPa
IT(4.00),   IT(13.9),   IT(14.8),   IT(15.7),   IT(16.6),   IT(17.5),   IT(18.4),   IT(19.3),   IT(20.2),   IT(21.1),   IT(22.0),   IT(22.9),   IT(23.8),   IT(24.7),   IT(25.6),   IT(26.5),   IT(27.4),   IT(28.3),   IT(29.2)   // 105 kPa
