#ifndef MONSTER_H
#define MONSTER_H

#include "functions.h"
#include <iostream>
#include <string>
#include "Windows.h"        //  Library for sleep timer
#include <iomanip>          // Library for setw

using namespace std;


class Monster{      
    protected:
    int hp, hitpow;  

    public:
    Monster(int HP, int ATK){
        hp = HP;
        hitpow = ATK;
    }

    void sethp(int HP){
        hp = HP;
    }

    int gethp(){
        return hp;
    }

    void sethitpow(int ATK){
        hitpow = ATK;
    }

    int gethitpow(){
        return hitpow;
    }

    //monster got hit 
    void attack(int att){
        att = att - hitpow;
        hit = att;
    }
};

class Monster_A: public Monster{
    protected: 
    int armour;
    public:
    Monster_A(int HP, int ATK, int DEF): Monster(hp, hitpow){
        hp = HP;
        hitpow = ATK;
        armour = DEF; 
    }

    void setdef(int def){
        armour = def;
    }

    int getdef(){
        return armour;
    }

};
#endif