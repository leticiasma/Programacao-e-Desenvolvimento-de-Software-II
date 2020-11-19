#include "Decoder.hpp"

namespace Decoder{
    
    Dec::Dec(Encoder::Enc* e){
        this->e = e;
    }
        
    void Dec::DecodeMessage(std::string encoded){
        std::string m = "abcdefghijklmnopqrstuvwxyz0123456789";
        std::string cifra = e->getCifra();
        
        for(unsigned int i=0; i<encoded.size(); i++){
            for (unsigned int j=0; j<cifra.size(); j++){
                if(encoded[i]==cifra[j]){
                    encoded[i] = m[j];
                        break;
                }
            }
        }
        decodedMessage = encoded;
    }
        
    void print(){
        std::cout <<"Decoded message: "<<decodedMessage<<std::endl;
    }
}