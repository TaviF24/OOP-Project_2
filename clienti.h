//
// Created by Octavian Farcasi on 20.04.2023.
//

#ifndef OOP_Client_H
#define OOP_Client_H

#include<iostream>
#include<string>
#include<map>
#include"meniu_restaurant.h"

class Client:public Meniu {
private:
    std::map<std::string, int> lista_mancare;
    std::map<std::string, int> lista_bauturi;
    static int nr_masa;
    int masa;
public:
    Client();

    Client(std::map<std::string, int> &lista_mancare);

    bool find(std::string &mancare);

    void update_lista(std::string &mancare);

    void update_lista_bauturi(std::string &bauturi);

    void afis() override;

    void setMasa();

    int getMasa()const;

    int getcantitateMancare(std::string mancare);

    int getcantitateBautura(std::string bautura);

    std::map<std::string,int> *lista_de_mancare();

    std::map<std::string,int> *lista_de_bauturi();
};
#endif //OOP_Client_H