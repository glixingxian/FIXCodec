//
// Created by Xingxian on 06/11/2018.
//

#include "MARKETNAME_FIXDecoder.h"

void MARKETNAME_FIXDecoder::reset() {

}

size_t MARKETNAME_FIXDecoder::decode(const char *buffer, size_t size) {
    if (isLastDecodeComplete) {
        reset();
    }
    const char *current_char_p = buffer;
    const size_t tagLengthLimit = 8;
    char tag[tagLengthLimit+1] = {0};
    size_t tagDigitPosition = 0;
    std::string value;
    bool isParsingTag = true;
    bool isParsingValue = false;
    while (current_char_p < buffer + size) {
        while (isParsingTag) {
            if (*current_char_p >= '0' && *current_char_p <= '9') {
                if(tagDigitPosition = tagLengthLimit){
                    //error, over length limit
                }
                tag[tagDigitPosition] = *current_char_p;
                tagDigitPosition++;
            } else if (tagDigitPosition = 0) {
                //syntax error, exptecting a number to begin
            } else {
                isParsingTag = false;
            }
        }
        if(*current_char_p != '='){
            //syntax erro, '=' is expected
        }
        isParsingValue = true;
        while(isParsingValue){
            value.push_back(*current_char_p);
        }



    }

    return 0;
}
