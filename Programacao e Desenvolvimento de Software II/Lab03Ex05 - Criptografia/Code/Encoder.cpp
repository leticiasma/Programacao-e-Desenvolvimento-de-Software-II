#include "Encoder.hpp"
#include <string>

namespace Encoder{
    
    Enc::Enc(std::string cifra){ 
        this->cifra = cifra; 
    }
    
    std::string Enc::getCifra(){
        return this->cifra;
    }
    
    void Enc::EncodeMessage(std::string message){
       std::string caracteres = "abcdefghijklmnopqrstuvwxyz0123456789";
            
        for(unsigned int i=0; i<message.size(); i++){
                for (unsigned int j=0; j<caracteres.size(); j++){
                    if(message[i] == caracteres[j]){
                        message[i] = cifra[j];
                        break;
                    }
                }
        }
        encodedMessage = message;
    }
    
    void print(){
            std::cout<<"Encoded message: "<<encodedMessage<<std::endl;
    }
        
    std::string getMessage(){
        return encodedMessage;
    }
}
