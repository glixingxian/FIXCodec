//
// Created by Xingxian on 06/11/2018.
//

#ifndef C_PRIMER5TH_MARKETNAME_FIXDECODER_H
#define C_PRIMER5TH_MARKETNAME_FIXDECODER_H


#include <map>
#include <string>
class MARKETNAME_FIXDecoder {
private:
    std::map<int,std::string> m_TagValues;
    bool isLastDecodeComplete = false;

    void reset();
public:
    size_t decode(const char * buffer, size_t size);
};


#endif //C_PRIMER5TH_MARKETNAME_FIXDECODER_H
