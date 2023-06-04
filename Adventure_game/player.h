#ifndef PLAYER_H
#define PLAYER_H

#include "functions.h"
#include <iostream>
#include <string>
#include "Windows.h"        //  Library for sleep timer
#include <iomanip>          // Library for setw

using namespace std;


class Player
{
    private:

        int hp;
        int def;
        int hitpow;
        int coins;


    public:

        Player(){
            hp = 100;
            def = 50;
            hitpow = 20;
            coins = 200;
        }

        void sethp(int hp){
            this->hp = hp;
        }

        int gethp(){
            return hp;
        }

        void setdef(int def){
            this->def = def;
        }

        int getdef(){
            return def;
        }

        void sethitpow(int hitpow){
            this->hitpow = hitpow;
        }

        int gethitpow(){
            return hitpow;
        }

        void setcoins(int coins){
            this->coins = coins;
        }

        int getcoins(){
            return coins;
        }

        void attack(int att){

            att = att - hitpow;
            hit = att;
        }

        
};


/*
class Monster
{   
    private:
        int hp = 50;
        int hitpow = 10;

    public:

        void sethp(int hp){
            this->hp = hp;
        }

        int gethp(){
            return hp;
        }

        void sethitpow(int hitpow){
            this->hitpow = hitpow;
        }

        int gethitpow(){
            return hitpow;
        }

        void attack(int att){

            att = att - hitpow;
            hit = att;
        }

        

};

*/
#endif