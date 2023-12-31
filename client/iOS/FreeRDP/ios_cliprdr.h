/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * Android Clipboard Redirection
 *
 * Copyright 2013 Felix Long
 * Copyright 2023 Iordan Iordanov
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_CLIENT_IOS_CLIPRDR_H
#define FREERDP_CLIENT_IOS_CLIPRDR_H

#include <freerdp/client/cliprdr.h>
#include <freerdp/api.h>

#include "ios_freerdp.h"

FREERDP_LOCAL UINT ios_cliprdr_send_client_format_list(CliprdrClientContext* cliprdr);

FREERDP_LOCAL BOOL ios_cliprdr_init(mfContext* context, CliprdrClientContext* cliprdr);
FREERDP_LOCAL BOOL ios_cliprdr_uninit(mfContext* context, CliprdrClientContext* cliprdr);

#endif /* FREERDP_CLIENT_IOS_CLIPRDR_H */
