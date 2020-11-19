#include "Encoder.hpp"
#include <iostream>

#ifndef DECODER_H
#define DECODER_H

namespace Decoder{
    static std::string decodedMessage;

    class Dec{
        public:  
            Dec(Encoder::Enc* e);
            void DecodeMessage(std::string encodedMessage);
        
        private:
            Encoder::Enc* e;
    };

    void print();
}

#endif