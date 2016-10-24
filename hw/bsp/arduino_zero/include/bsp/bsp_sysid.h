/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#ifndef BSP_SYSID_H
#define BSP_SYSID_H

#include "syscfg/syscfg.h"

#ifdef __cplusplus
extern "C" {
#endif

enum system_device_id
{
    /* NOTE: Some HALs use a virtual enumeration of the devices, while
     * other still use the actual pins (GPIO). For arduino this means
     * that the sysIDs for analog and digital pins are the actual pin
     * numbers */

     ARDUINO_ZERO_D0 =     (11),
     ARDUINO_ZERO_D1 =     (10),
     ARDUINO_ZERO_D3 =     (9),
     ARDUINO_ZERO_D5 =     (15),
     ARDUINO_ZERO_D6 =     (20),
     ARDUINO_ZERO_D7 =     (21),
     ARDUINO_ZERO_D8 =     (6),
     ARDUINO_ZERO_D9 =     (7),
     ARDUINO_ZERO_D10 =    (18),
     ARDUINO_ZERO_D11 =    (16),
     ARDUINO_ZERO_D12 =    (19),
     ARDUINO_ZERO_D13 =    (17),

#if MYNEWT_VAL(BSP_ARDUINO_ZERO_PRO)
     ARDUINO_ZERO_D2 =     (8),
     ARDUINO_ZERO_D4 =     (14),
#endif

#if MYNEWT_VAL(BSP_ARDUINO_ZERO)
     ARDUINO_ZERO_D2 =     (14),
     ARDUINO_ZERO_D4 =     (8),
#endif
#if 0
    ARDUINO_ZERO_A0 =      (2),
    ARDUINO_ZERO_A1 =      (40),
    ARDUINO_ZERO_A2 =      (41),
    ARDUINO_ZERO_A3 =      (4),
    ARDUINO_ZERO_A4 =      (5),
    ARDUINO_ZERO_A5 =      (34),
#endif

    /* Use SPI 2 */
    ARDUINO_ZERO_SPI_ICSP = 2,

    /* Use SPI 3 */
    ARDUINO_ZERO_SPI_ALT  = 3,

    /* a I2c port on SCLK and SDA */
    ARDUINO_ZERO_I2C      = 4,
};

#define BSP_WINC1500_SPI_PORT   2

#ifdef __cplusplus
}
#endif

#endif /* BSP_SYSID_H */

