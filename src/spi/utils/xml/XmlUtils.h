/*
 * Copyright 2014-present Skyhook Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WPS_API_XML_UTILS_H_
#define WPS_API_XML_UTILS_H_

#include <string>
#include <vector>

namespace WPS {
namespace API {

std::string xmlEscape(const std::string& s);
bool xmlUtf8Test(const std::vector<unsigned char>& s);

}
}

#endif