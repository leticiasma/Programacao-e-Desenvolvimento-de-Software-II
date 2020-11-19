#include <iostream>

#ifndef ENCODER_H
#define ENCODER_H

namespace Encoder{
    static std::string encodedMessage;

    class Enc{
        public:
            Enc(std::string cifra);
            void EncodeMessage(std::string message);
            std::string getCifra();

        private:
            std::string cifra;
    };

    void print();
    std::string getMessage();
}

#endif