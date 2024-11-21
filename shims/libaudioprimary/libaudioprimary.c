/*
 * Copyright (C) 2021 Deokgyu Yang <secugyu@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "libaudioprimary_shim"
#define LOG_NDEBUG 0

#include <log/log.h>

void direct_mixer_set_value(int arg0, int arg1)
{
    ALOGW("SHIM: hijacking %s!", __func__);

    /*
     * This function is supposed to invoke the `mixer_ctl_set_value`
     * function directly by some libraries.
     * But no libraries from AOSP call this function.
     */
}
