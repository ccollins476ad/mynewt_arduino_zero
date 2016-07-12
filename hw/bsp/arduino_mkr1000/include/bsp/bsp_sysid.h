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
#ifndef __BSP_SYSID_H__
#define __BSP_SYSID_H__

#ifdef __cplusplus
extern "C" {
#endif

enum system_device_id {
    /* NOTE: Some HALs use a virtual enumeration of the devices, while
     * other still use the actual pins (GPIO). For arduino this means
     * that the sysIDs for analog and digital pins are the actual pin
     * numbers */

    /*
     * XXX fill in
     */
    NONE = 0,

    WINC1500_SPI_PORT = 200

};

#ifdef __cplusplus
}
#endif

#endif /* BSP_SYSID_H */
