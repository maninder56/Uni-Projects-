#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include "Windows.h"        //  Library for sleep timer
#include <iomanip>          // Library for setw

using namespace std;


   //global vars
int hit;        
string name;
int choice;
int n_choice;  



void fight(int getp_health, int getm_health, int getp_def, int getp_hitp, string getd_options){                
    if (getp_health<=0){
    cout<< "R.I.P "<<name<<" you died fighting a monster :'( "<<endl;
    exit(0);
    }  

    cout<<"Monster"<<endl;
    cout<<"hp: "<<getm_health<<"   "<<"attack power: <HIDDEN>"<<endl<<endl;
    Sleep(3000);

    cout<<name<<endl;
    cout<<"hp: "<<getp_health<<"   "<<"armour: "<<getp_def<<"   "<<"attack power: "<<getp_hitp<<endl<<endl;
    Sleep(4000);

    cout<<"from the following, choose one: "<<endl;
    cout<<getd_options<<endl;
    cin>>choice;
    cout<<endl;
}

void final_fight(int getp_health, int getm_health, int getp_def, int getp_hitp,int getm_armour, string getd_options){                
    if (getp_health<=0){
    cout<< "R.I.P "<<name<<" you died fighting a monster :'( "<<endl;
    exit(0);
    }  

    cout<<"Monster"<<endl;
    cout<<"hp: "<<getm_health<<"   "<<"attack power: <HIDDEN>"<<"armour: "<<getm_armour<<endl<<endl;
    Sleep(3000);

    cout<<name<<endl;
    cout<<"hp: "<<getp_health<<"   "<<"armour: "<<getp_def<<"   "<<"attack power: "<<getp_hitp<<endl<<endl;
    Sleep(4000);

    cout<<"from the following, choose one: "<<endl;
    cout<<getd_options<<endl;
    cin>>choice;
    cout<<endl;
}
        
void info(int getp_health, int getp_def, int getp_hitp, int getp_coins){
    Sleep(2000);
    cout<<"Please take a moment to look at the following "<<endl;
    Sleep(1500);
    cout<<"Your HP is: "<<getp_health<<endl;
    cout<<"Your armour is: "<<getp_def<<endl;
    cout<<"Your attack power is: "<<getp_hitp<<endl;
    cout<<"You have "<<getp_coins<<" coins"<<endl<<endl;
    Sleep(6000);
}


void disp(string get_disp, int slp){
    cout<<"\n----------------------------------------------------------------------"<<endl;   //70
    cout<<get_disp<<endl;
    cout<<"----------------------------------------------------------------------\n"<<endl;
    Sleep(slp);
    }

void traveller(string get_t, int slp){
    cout<<"Traveller: "<<get_t<<"\n"<<endl;
    Sleep(slp);
    }

void plr(string get_p, int slp){
    cout<<name<<": "<<get_p<<"\n"<<endl;
    Sleep(slp);
    }

void guild(string get_g, int slp){
    cout<<"Guild Employee: "<<get_g<<"\n"<<endl;
    Sleep(slp);
    }

void fight_beg(){
    cout<<setw(126);
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<setw(91);
    cout<<"FIGHT BEGINS !!"<<endl;
    cout<<setw(126);
    cout<<"----------------------------------------------------------------------"<<endl;
    Sleep(3000);
}

void victory(){
    cout<<setw(126);
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<setw(91);
    cout<<"YOU WON!!"<<endl;
    cout<<setw(126);
    cout<<"----------------------------------------------------------------------"<<endl;
}

#endif