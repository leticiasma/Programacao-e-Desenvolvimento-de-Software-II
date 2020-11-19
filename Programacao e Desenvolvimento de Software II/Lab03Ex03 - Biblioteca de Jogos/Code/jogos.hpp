#include <iostream>

#ifndef JOGOS_H
#define JOGOS_H

class jogo{
    public:
        jogo(std::string nome);
        void imprimeNome();
        virtual void imprimeCaracteristicas();
        void setGenero(std::string genero);

    private:
        std::string nome;
        std::string genero;
};

class jogoAction : public jogo{
    public:
        jogoAction(std::string nome);
        //void imprimeCaracteristicas () override;
};

class jogoFPS : public jogo{
    public:
        jogoFPS(std::string nome);
        //void imprimeCaracteristicas () override;
};

class jogoPlatform : public jogo{
    public:
        jogoPlatform(std::string nome);
        //void imprimeCaracteristicas () override;
};

class jogoRPG : public jogo{
    public:
        jogoRPG(std::string nome);
        //void imprimeCaracteristicas () override;
};

class jogoMMORPG : public jogo{
    public:
        jogoMMORPG(std::string nome);
        //void imprimeCaracteristicas () override;
};

class jogoRoguelike : public jogo{
    public:
        jogoRoguelike(std::string nome);
        //void imprimeCaracteristicas () override;
};

class jogoRTS : public jogo{
    public:
        jogoRTS(std::string nome);
        //void imprimeCaracteristicas () override;
};

class jogoSports : public jogo{
    public:
        jogoSports(std::string nome);
        //void imprimeCaracteristicas () override;
};

#endif