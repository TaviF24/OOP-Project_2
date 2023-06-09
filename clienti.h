//
// Created by Octavian Farcasi on 20.04.2023.
//

#ifndef OOP_Client_H
#define OOP_Client_H


#include"meniu_restaurant.h"

class Client:public Meniu {
private:
    std::map<std::string, int> lista_mancare;
    std::map<std::string, int> lista_bauturi;
    std::string nume="anonim";
    static int nr_masa;
    int masa=0;
public:
    Client();

    Client(std::map<std::string, int> &lista_mancare);

    Client(std::string &nume);

    bool find(std::string &mancare);

    void update_lista(std::string &mancare);

    void update_lista_bauturi(std::string &bauturi);

    void afis() override;

    static void incrementMasa();

    void setMasa();

    int getMasa()const;

    std::string getNume()const;

//    int getcantitateMancare(const std::string &mancare);
//
//    int getcantitateBautura(const std::string &bautura);

    std::map<std::string,int> *lista_de_mancare();

    std::map<std::string,int> *lista_de_bauturi();
};
#endif //OOP_Client_H
