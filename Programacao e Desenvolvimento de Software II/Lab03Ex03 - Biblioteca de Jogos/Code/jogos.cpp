#include "jogos.hpp"

jogo::jogo(std::string nome){
    this->nome = nome;
}

void jogo::imprimeNome(){
    std::cout << this->nome << std::endl;
}

void jogo::setGenero(std::string genero){
    this->genero = genero;
}

jogoAction::jogoAction(std::string nome) : jogo(nome){
    setGenero("Action");
}

jogoFPS::jogoFPS(std::string nome) : jogo(nome){
    setGenero("FPS");
}

jogoPlatform::jogoPlatform(std::string nome) : jogo(nome){
    setGenero("Platform");
}

jogoRPG::jogoRPG(std::string nome) : jogo(nome){
    setGenero("RPG");
}

jogoMMORPG::jogoMMORPG(std::string nome) : jogo(nome){
    setGenero("MMORPG");
}

jogoRoguelike::jogoRoguelike(std::string nome) : jogo(nome){
    setGenero("Roguelike");
}

jogoRTS::jogoRTS(std::string nome) : jogo(nome){
    setGenero("RTS");
}

jogoSports::jogoSports(std::string nome) : jogo(nome){
    setGenero("Sports");
}


/*void jogoAction::imprimeCaracteristicas(){
    std::cout << "Habilidade HabilidadeMotora" << std::endl;
    std::cout << "TempoReal Sim" << std::endl;
}

void jogoFPS::imprimeCaracteristicas(){
    std::cout << "Habilidade HabilidadeMotora" << std::endl;
    std::cout << "Perspectiva Primeira" << std::endl;
    std::cout << "TempoReal Sim" << std::endl;
}

void jogoPlatform::imprimeCaracteristicas(){
    std::cout << "Habilidade HabilidadeMotora" << std::endl;
    std::cout << "Perspectiva Terceira" << std::endl;
    std::cout << "TempoReal Sim" << std::endl;
}

void jogoRPG::imprimeCaracteristicas(){
    std::cout << "RolePlay Sim" << std::endl;
}

void jogoMMORPG::imprimeCaracteristicas(){
    std::cout << "Online Sim" << std::endl;
    std::cout << "RolePlay Sim" << std::endl;
    std::cout << "TempoReal Sim" << std::endl;
}

void jogoRoguelike::imprimeCaracteristicas(){
    std::cout << "GeracaoProcedural Sim" << std::endl;
    std::cout << "RolePlay Sim" << std::endl;
    std::cout << "TempoReal Nao" << std::endl;
}

void jogoRTS::imprimeCaracteristicas(){
    std::cout << "Habilidade RaciocinioLogico" << std::endl;
    std::cout << "TempoReal Sim" << std::endl;
}

void jogoSports::imprimeCaracteristicas(){
    std::cout << "Habilidade HabilidadeMotora" << std::endl;
    std::cout << "Simulacao Sim" << std::endl;
}*/

void jogo::imprimeCaracteristicas(){
    if (this->genero == "Action"){
        std::cout << "Habilidade HabilidadeMotora" << std::endl;
        std::cout << "TempoReal Sim" << std::endl;
    }
    
    else if (this->genero == "FPS"){
        std::cout << "Habilidade HabilidadeMotora" << std::endl;
        std::cout << "Perspectiva Primeira" << std::endl;
        std::cout << "TempoReal Sim" << std::endl;
    }
     
    else if (this->genero == "Platform"){
        std::cout << "Habilidade HabilidadeMotora" << std::endl;
        std::cout << "Perspectiva Terceira" << std::endl;
        std::cout << "TempoReal Sim" << std::endl;
    }
    
    else if (this->genero == "RPG"){
        std::cout << "RolePlay Sim" << std::endl;
    }
    
    else if (this->genero == "MMORPG"){
        std::cout << "Online Sim" << std::endl;
        std::cout << "RolePlay Sim" << std::endl;
        std::cout << "TempoReal Sim" << std::endl;
    }
    
    else if (this->genero == "Roguelike"){
        std::cout << "GeracaoProcedural Sim" << std::endl;
        std::cout << "RolePlay Sim" << std::endl;
        std::cout << "TempoReal Nao" << std::endl;
    }
    
    else if (this->genero == "RTS"){
        std::cout << "Habilidade RaciocinioLogico" << std::endl;
        std::cout << "TempoReal Sim" << std::endl;
    }
    
    else if (this->genero == "Sports"){
        std::cout << "Habilidade HabilidadeMotora" << std::endl;
        std::cout << "Simulacao Sim" << std::endl;
    }   
}
