#ifndef __EAN_8_READER_H__
#define __EAN_8_READER_H__

/*
 *  EAN8Reader.h
 *  ZXing
 *
 *  Copyright 2010 ZXing authors All rights reserved.
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

#include "UPCEANReader.h"
#include "Result.h"

namespace zxing {
  namespace oned {
    class EAN8Reader : public UPCEANReader {

    public:
      EAN8Reader();

      int decodeMiddle(Ref<BitArray> row, int startGuardBegin, int startGuardEnd,
          std::string& resultString);

      BarcodeFormat getBarcodeFormat();
    };
  }
}

#endif