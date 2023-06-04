#include "functions.h"
#include "dialogues.h"
#include "player.h"
#include "monster.h"





int main()
{
    Player p_obj;
    Monster m_obj(50, 10);
    Monster_A ma_obj(80,17,5);

    

    Dialogues d_obj;
    cout<<d_obj.intro_dis1<<endl;
    cout<<d_obj.prompt<<endl;
    cin>>name;
    cout<<d_obj.welcome1<<name<<endl<<endl;
    

    info(p_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), p_obj.getcoins());

    cout<<d_obj.welcome2<<endl;
    Sleep(3000);

    disp(d_obj.dis1, 5000);
    
    plr(d_obj.p1, 4000);

    traveller(d_obj.t1,9000);
    
    disp(d_obj.dis2, 5000);

    fight_beg();


    while(m_obj.gethp()>0){
        
        fight(p_obj.gethp(), m_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), d_obj.options);

        if (choice==1){
            p_obj.attack(m_obj.gethp());          //player attacking
            m_obj.sethp(hit);                   // monster hp dropping

            m_obj.attack(p_obj.gethp());          // monster attacking
            p_obj.sethp(hit);                   // player hp dropping
        }
    
        else if(choice==2){                  
            if(p_obj.getdef()<=0){                // in case armour is 0 or below
                m_obj.attack(p_obj.gethp());      // monster attaacking player's hp
                p_obj.sethp(hit);               // player's hp dropping
            }
            else{
                m_obj.attack(p_obj.getdef());     // if armour is above 0
                if(hit<0){                              //from line 209 - 211: if armour goes below 0, it'll take the toll on player's hp
                    p_obj.setdef(0);
                    p_obj.sethp(p_obj.gethp()+(hit));
                }
                p_obj.setdef(hit);
            }
        
        }
    
        else if(choice==3){                             
            m_obj.attack(p_obj.gethp());                //monster attacks
            p_obj.sethp(hit);

            p_obj.sethitpow(p_obj.gethitpow() + 10);    // player's attack power increased
        }

        else{
            cout<<"\nPlease make the right numerical choice\n"<<endl;
            
            
        }

    }   

    victory();

    p_obj.sethitpow(20);    // the fight is over and attack power back to normal

    info(p_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), p_obj.getcoins());   // player update after fight

    traveller(d_obj.t2, 2000);

    disp(d_obj.dis3, 2000);

    p_obj.sethp(p_obj.gethp()+5);

    traveller(d_obj.t3, 2000);



    cout<<"[1] yes      [2] no"<<endl;
    
    do {
        cin>>choice;
        if (choice==1){
            traveller(d_obj.t4_1,2000);
        }
        else if (choice==2){
            traveller(d_obj.t4_2,3000);
        }
        else{
            cout<<"please make the right numerical choice";
            
        }
    }
    while(choice!=1 && choice !=2);

    cout<<"[1] yes      [2] no"<<endl;
    
    
    if (choice==2){
        do {
            cin>>choice;
            if (choice==1){
                p_obj.setcoins(p_obj.getcoins()-15);
                traveller(d_obj.t5_1,2000);
            }
            else if (choice==2){
                traveller(d_obj.t5_2,3000);
            }
            else{
                cout<<"please make the right numerical choice";
                
            }
        }
        while(choice!=1 && choice !=2);

    }


    disp(d_obj.dis4, 2000);

    traveller(d_obj.t6, 8000);

    plr(d_obj.p3, 4000);

    traveller(d_obj.t7, 4000);

    plr(d_obj.p4, 2000);

    traveller(d_obj.t8, 2000);

    disp(d_obj.dis5, 8000);

    guild(d_obj.g1, 1000);

    plr(d_obj.p5, 3000);

    guild(d_obj.g2, 8000);

    plr(d_obj.p6, 4000);

    guild(d_obj.g3, 10000);

    info(p_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), p_obj.getcoins());

    

    
    do {

        cout<<"[1] increase 5 hp for 20 coins.\n[2] increase 5 armour for 15 coins.\n[3] increase attack by 5 for 20 coins."<<endl;
        cout<<"[4] Exit"<<endl;

        cin>>choice;

        if(p_obj.getcoins()<=0){
            guild("Sorry you have insufficient coins",2000);
        }
        else if (choice==1){
            p_obj.sethp(p_obj.gethp()+5);
            p_obj.setcoins(p_obj.getcoins()-20);
            cout<<"hp increased, new hp: "<<p_obj.gethp()<<endl<<endl;
            Sleep(2000);
            cout<<"remaining coins: "<<p_obj.getcoins()<<endl<<endl;
        }
        else if (choice==2){
            p_obj.setdef(p_obj.getdef()+5);
            p_obj.setcoins(p_obj.getcoins()-15);
            cout<<"armour increased, new armour: "<<p_obj.getdef()<<endl<<endl;
            Sleep(2000);
            cout<<"remaining coins: "<<p_obj.getcoins()<<endl<<endl;
        }
        else if (choice==3){
            p_obj.sethitpow(p_obj.gethitpow()+5);
            p_obj.setcoins(p_obj.getcoins()-20);
            cout<<"attack power increased, new attack power: "<<p_obj.gethitpow()<<endl<<endl;
            Sleep(2000);
            cout<<"remaining coins: "<<p_obj.getcoins()<<endl<<endl;
        }
        else if (choice==4){
            continue;
        }
        else{
            cout<<"please make the right numerical choice";
            
        }
        Sleep(1000);
    }
    while(choice!= 4 && p_obj.getcoins()>=15);
    
    
    plr(d_obj.p7, 3000);

    disp(d_obj.dis6, 2000);

    plr(d_obj.p8, 2000);

    disp(d_obj.dis7, 1000);

    
    fight_beg();

    m_obj.sethp(60);
    m_obj.sethitpow(12);

    while(m_obj.gethp()>0){
        
        fight(p_obj.gethp(), m_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), d_obj.options);

        if (choice==1){
            p_obj.attack(m_obj.gethp());          //player attacking
            m_obj.sethp(hit);                   // monster hp dropping

            m_obj.attack(p_obj.gethp());          // monster attacking
            p_obj.sethp(hit);                   // player hp dropping
        }
    
        else if(choice==2){                  
            if(p_obj.getdef()<=0){                // in case armour is 0 or below
                m_obj.attack(p_obj.gethp());      // monster attaacking player's hp
                p_obj.sethp(hit);               // player's hp dropping
            }
            else{
                m_obj.attack(p_obj.getdef());     // if armour is above 0
                if(hit<0){                              //from line 209 - 211: if armour goes below 0, it'll take the toll on player's hp
                    p_obj.setdef(0);
                    p_obj.sethp(p_obj.gethp()+(hit));
                }
                p_obj.setdef(hit);
            }
        
        }
    
        else if(choice==3){                             
            m_obj.attack(p_obj.gethp());                //monster attacks
            p_obj.sethp(hit);

            p_obj.sethitpow(p_obj.gethitpow() + 10);    // player's attack power increased
        }

        else{
            cout<<"\nPlease make the right numerical choice\n"<<endl;
            
            
        }

    }

    victory();

    p_obj.sethitpow(20);    // the fight is over and attack power back to normal

    disp(d_obj.dis8, 1500);

    p_obj.setcoins(p_obj.getcoins() + 30);

    info(p_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), p_obj.getcoins());   // player update after fight

    

    



    plr(d_obj.p9, 2000);

    disp(d_obj.dis9, 2000);

    plr(d_obj.p10, 2000);

    disp(d_obj.dis10, 4000);




    fight_beg();

    m_obj.sethp(70);
    m_obj.sethitpow(10);

    while(m_obj.gethp()>0){
        
        fight(p_obj.gethp(), m_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), d_obj.options);

        if (choice==1){
            p_obj.attack(m_obj.gethp());          //player attacking
            m_obj.sethp(hit);                   // monster hp dropping

            m_obj.attack(p_obj.gethp());          // monster attacking
            p_obj.sethp(hit);                   // player hp dropping
        }
    
        else if(choice==2){                  
            if(p_obj.getdef()<=0){                // in case armour is 0 or below
                m_obj.attack(p_obj.gethp());      // monster attaacking player's hp
                p_obj.sethp(hit);               // player's hp dropping
            }
            else{
                m_obj.attack(p_obj.getdef());     // if armour is above 0
                if(hit<0){                              //from line 209 - 211: if armour goes below 0, it'll take the toll on player's hp
                    p_obj.setdef(0);
                    p_obj.sethp(p_obj.gethp()+(hit));
                }
                p_obj.setdef(hit);
            }
        
        }
    
        else if(choice==3){                             
            m_obj.attack(p_obj.gethp());                //monster attacks
            p_obj.sethp(hit);

            p_obj.sethitpow(p_obj.gethitpow() + 10);    // player's attack power increased
        }

        else{
            cout<<"\nPlease make the right numerical choice\n"<<endl;
            
            
        }

    }

    victory();

    p_obj.sethitpow(20);    // the fight is over and attack power back to normal

     disp(d_obj.dis11, 1500);

    p_obj.setcoins(p_obj.getcoins() + 50);

    info(p_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), p_obj.getcoins());   // player update after fight

    

   




    disp(d_obj.dis12, 4000);

    cout<<"[1] yes      [2] no"<<endl;
    
    do {
        cin>>choice;
        if (choice==1){
            disp(d_obj.dis13, 2000);
            do {

                cout<<"[1] increase 5 hp for 20 coins.\n[2] increase 5 armour for 15 coins.\n[3] increase attack by 5 for 20 coins."<<endl;
                cout<<"[4] Exit"<<endl;

                cin>>n_choice;

                if(p_obj.getcoins()<=0){
                    guild("Sorry you have insufficient coins",2000);
                }
                else if (n_choice==1){
                    p_obj.sethp(p_obj.gethp()+5);
                    p_obj.setcoins(p_obj.getcoins()-20);
                    cout<<"hp increased, new hp: "<<p_obj.gethp()<<endl<<endl;
                    Sleep(2000);
                    cout<<"remaining coins: "<<p_obj.getcoins()<<endl<<endl;
                }
                else if (n_choice==2){
                    p_obj.setdef(p_obj.getdef()+5);
                    p_obj.setcoins(p_obj.getcoins()-15);
                    cout<<"armour increased, new armour: "<<p_obj.getdef()<<endl<<endl;
                    Sleep(2000);
                    cout<<"remaining coins: "<<p_obj.getcoins()<<endl<<endl;
                }
                else if (n_choice==3){
                    p_obj.sethitpow(p_obj.gethitpow()+5);
                    p_obj.setcoins(p_obj.getcoins()-20);
                    cout<<"attack power increased, new attack power: "<<p_obj.gethitpow()<<endl<<endl;
                    Sleep(2000);
                    cout<<"remaining coins: "<<p_obj.getcoins()<<endl<<endl;
                }
                else if (n_choice==4){
                    continue;
                }
                else{
                    cout<<"please make the right numerical choice";
            
                }
                Sleep(1000);
            }
            while(n_choice!= 4 && p_obj.getcoins()>=15);
        }
        else if (choice==2){
            continue;
        }
        else{
            cout<<"please make the right numerical choice";
            
        }
    }
    while(choice!=1 && choice !=2);




    disp(d_obj.dis14, 4000);

    disp(d_obj.dis15, 4500);

    plr(d_obj.p11, 4000);

    disp(d_obj.dis16, 2500);

    disp(d_obj.dis17, 3000);




    fight_beg();

    m_obj.sethp(50);
    m_obj.sethitpow(15);

    while(m_obj.gethp()>0){
        
        fight(p_obj.gethp(), m_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), d_obj.options);

        if (choice==1){
            p_obj.attack(m_obj.gethp());          //player attacking
            m_obj.sethp(hit);                   // monster hp dropping

            m_obj.attack(p_obj.gethp());          // monster attacking
            p_obj.sethp(hit);                   // player hp dropping
        }
    
        else if(choice==2){                  
            if(p_obj.getdef()<=0){                // in case armour is 0 or below
                m_obj.attack(p_obj.gethp());      // monster attaacking player's hp
                p_obj.sethp(hit);               // player's hp dropping
            }
            else{
                m_obj.attack(p_obj.getdef());     // if armour is above 0
                if(hit<0){                              //from line 209 - 211: if armour goes below 0, it'll take the toll on player's hp
                    p_obj.setdef(0);
                    p_obj.sethp(p_obj.gethp()+(hit));
                }
                p_obj.setdef(hit);
            }
        
        }
    
        else if(choice==3){                             
            m_obj.attack(p_obj.gethp());                //monster attacks
            p_obj.sethp(hit);

            p_obj.sethitpow(p_obj.gethitpow() + 10);    // player's attack power increased
        }

        else{
            cout<<"\nPlease make the right numerical choice\n"<<endl;
            
            
        }

    }

    victory();

    p_obj.sethitpow(20);    // the fight is over and attack power back to normal

    disp(d_obj.dis11, 1500);

    p_obj.setcoins(p_obj.getcoins() + 50);

    info(p_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), p_obj.getcoins());   // player update after fight

    




    plr(d_obj.p12, 2000);

    disp(d_obj.dis18, 1500);

    plr(d_obj.p13, 3000);

    guild(d_obj.g4, 4000);

    disp(d_obj.dis19, 3000);

    disp(d_obj.dis20, 4000);




    fight_beg();

    m_obj.sethp(70);
    m_obj.sethitpow(10);

    while(m_obj.gethp()>0){
        
        fight(p_obj.gethp(), m_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), d_obj.options);

        if (choice==1){
            p_obj.attack(m_obj.gethp());          //player attacking
            m_obj.sethp(hit);                   // monster hp dropping

            m_obj.attack(p_obj.gethp());          // monster attacking
            p_obj.sethp(hit);                   // player hp dropping
        }
    
        else if(choice==2){                  
            if(p_obj.getdef()<=0){                // in case armour is 0 or below
                m_obj.attack(p_obj.gethp());      // monster attaacking player's hp
                p_obj.sethp(hit);               // player's hp dropping
            }
            else{
                m_obj.attack(p_obj.getdef());     // if armour is above 0
                if(hit<0){                              //from line 209 - 211: if armour goes below 0, it'll take the toll on player's hp
                    p_obj.setdef(0);
                    p_obj.sethp(p_obj.gethp()+(hit));
                }
                p_obj.setdef(hit);
            }
        
        }
    
        else if(choice==3){                             
            m_obj.attack(p_obj.gethp());                //monster attacks
            p_obj.sethp(hit);

            p_obj.sethitpow(p_obj.gethitpow() + 10);    // player's attack power increased
        }

        else{
            cout<<"\nPlease make the right numerical choice\n"<<endl;
            
            
        }

    }

    victory();

    p_obj.sethitpow(20);    // the fight is over and attack power back to normal

    info(p_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), p_obj.getcoins());   // player update after fight




    disp(d_obj.dis21, 3000);





    fight_beg();

    m_obj.sethp(70);
    m_obj.sethitpow(10);

    while(m_obj.gethp()>0){
        
        fight(p_obj.gethp(), m_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), d_obj.options);

        if (choice==1){
            p_obj.attack(m_obj.gethp());          //player attacking
            m_obj.sethp(hit);                   // monster hp dropping

            m_obj.attack(p_obj.gethp());          // monster attacking
            p_obj.sethp(hit);                   // player hp dropping
        }
    
        else if(choice==2){                  
            if(p_obj.getdef()<=0){                // in case armour is 0 or below
                m_obj.attack(p_obj.gethp());      // monster attaacking player's hp
                p_obj.sethp(hit);               // player's hp dropping
            }
            else{
                m_obj.attack(p_obj.getdef());     // if armour is above 0
                if(hit<0){                              //from line 209 - 211: if armour goes below 0, it'll take the toll on player's hp
                    p_obj.setdef(0);
                    p_obj.sethp(p_obj.gethp()+(hit));
                }
                p_obj.setdef(hit);
            }
        
        }
    
        else if(choice==3){                             
            m_obj.attack(p_obj.gethp());                //monster attacks
            p_obj.sethp(hit);

            p_obj.sethitpow(p_obj.gethitpow() + 10);    // player's attack power increased
        }

        else{
            cout<<"\nPlease make the right numerical choice\n"<<endl;
            
            
        }

    }

    victory();

    p_obj.sethitpow(20);    // the fight is over and attack power back to normal

    info(p_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), p_obj.getcoins());   // player update after fight





    plr(d_obj.p14, 5000);






    fight_beg();

    while(ma_obj.gethp()>0){
        
        final_fight(p_obj.gethp(), ma_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), ma_obj.getdef(), d_obj.options);

        if (choice==1){
            if(ma_obj.getdef()<=0){
                p_obj.attack(ma_obj.gethp());          //player attacking
                ma_obj.sethp(hit);                   // monster hp dropping
            }
            else{
                p_obj.attack(ma_obj.getdef());          
                if(hit<0){
                    ma_obj.setdef(0);                   
                    ma_obj.sethp(ma_obj.gethp()+(hit));
                }
                ma_obj.setdef(hit);
            }    
        }
    
        else if(choice==2){                  
            if(p_obj.getdef()<=0){                // in case armour is 0 or below
                ma_obj.attack(p_obj.gethp());      // monster attaacking player's hp
                p_obj.sethp(hit);               // player's hp dropping
            }
            else{
                ma_obj.attack(p_obj.getdef());     // if armour is above 0
                if(hit<0){                              //from line 209 - 211: if armour goes below 0, it'll take the toll on player's hp
                    p_obj.setdef(0);
                    p_obj.sethp(p_obj.gethp()+(hit));
                }
                p_obj.setdef(hit);
            }
        
        }


        else if(choice==3){                             
            ma_obj.attack(p_obj.gethp());                //monster attacks
            p_obj.sethp(hit);

            p_obj.sethitpow(p_obj.gethitpow() + 10);    // player's attack power increased
        }

        else{
            cout<<"\nPlease make the right numerical choice\n"<<endl;
            
        }

        
    }


    victory();

    p_obj.sethitpow(20);    // the fight is over and attack power back to normal

    info(p_obj.gethp(), p_obj.getdef(), p_obj.gethitpow(), p_obj.getcoins());   // player update after fight



   
    disp(d_obj.dis22, 5000);
    disp(d_obj.dis_end, 3000);
   
   
   
    return 0;

}
