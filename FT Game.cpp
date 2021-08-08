//HDM Vision 
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct wizard
{
	string name;
	int hp;
	int hpReg;
	int ep;
	int epReg;
	float speed;
	float strength;
	float defense;
	int stuned;
	bool powerUp;
	int mov[4];
	bool reppeled;

}wiz[100];

struct skill
{
	string name;
	int hp_dmg;
	int epcon;
}sk[100];

void wiz_char()
{
	wiz[0].name = "Makarov"; //6th Rank Wizard Saints			
	wiz[0].hp = 600;
	wiz[0].ep = 1200;
	wiz[0].epReg = 1200/20;
	wiz[0].speed = 10;
	wiz[0].strength = 16;
	wiz[0].defense = 7;
	wiz[0].mov[0]= 16; //light magic attack   
	wiz[0].mov[1] = 2; //Giant smash
	wiz[0].mov[2] = 0; //Fairy Law
	wiz[0].mov[3] = 4; //3-Pillar of God
	
	wiz[1].name = "Natsu"; //Fire Dragon Slayer
	wiz[1].hp = 700;
	wiz[1].ep = 640;
	wiz[1].epReg = 640/20;
	wiz[1].speed = 9;
	wiz[1].strength = 10;
	wiz[1].defense = 12;
	wiz[1].mov[0] = 5;   
	wiz[1].mov[1] = 6; 
	wiz[1].mov[2] = 7;
	wiz[1].mov[3] = 41;
	
	wiz[13].name = "Natsu-DF"; //Natsu : Dragon Force Mode
	wiz[13].hp = 0;
	wiz[13].ep = 0;
	wiz[13].epReg = wiz[12].ep/20;
	wiz[13].speed = wiz[2].speed + 10;
	wiz[13].strength = wiz[2].strength + 120;
	wiz[13].defense = wiz[2].defense + 10;
	wiz[13].mov[0]= 5;
	wiz[13].mov[1] = 6; 
	wiz[13].mov[2] = 7; 
	wiz[13].mov[3] = 21; 
	
	wiz[2].name = "Jellal"; //8th Rank Wizard Saints
	wiz[2].hp = 680;
	wiz[2].ep = 935;
	wiz[2].epReg = 935/20;
	wiz[2].speed = 11;
	wiz[2].strength = 8;
	wiz[2].defense = 12;
	wiz[2].mov[0] = 26;   
	wiz[2].mov[1] = 9; 
	wiz[2].mov[2] = 10;
	wiz[2].mov[3] = 11;
	
	wiz[3].name = "God Serena"; //1st Rank Wizard Saints
	wiz[3].hp = 1070;
	wiz[3].ep = 1880;
	wiz[3].epReg = 1880/20;
	wiz[3].speed = 18;
	wiz[3].strength = 24;
	wiz[3].defense = 18;
	wiz[3].mov[0] = 12;   
	wiz[3].mov[1] = 13; 
	wiz[3].mov[2] = 14;
	wiz[3].mov[3] = 15;
	
	wiz[4].name = "Acnologia"; //Dragon King
	wiz[4].hp = 1986;
	wiz[4].ep = 2400;
	wiz[4].epReg = 2400/20;
	wiz[4].speed = 22;
	wiz[4].strength = 48;
	wiz[4].defense = 50;
	wiz[4].mov[0] = 17;   
	wiz[4].mov[1] = 18; 
	wiz[4].mov[2] = 19;
	wiz[4].mov[3] = 20;
	
	wiz[5].name = "Mystogan"; //Jellal's counter part
	wiz[5].hp = 740;
	wiz[5].ep = 880;
	wiz[5].epReg = 880/20;
	wiz[5].speed = 11;
	wiz[5].strength = 8;
	wiz[5].defense = 12;
	wiz[5].mov[0] = 22; //Babel Tower   
	wiz[5].mov[1] = 8;  //Water Mirror
	wiz[5].mov[2] = 23; //5-Layered Magic: Explossion
	wiz[5].mov[3] = 16; //Light Magic Attack
	
	wiz[6].name = "Mavis"; //Fairy Heart
	wiz[6].hp = 500;
	wiz[6].ep = 9999;
	wiz[6].epReg = 9999/20;
	wiz[6].speed = 10;
	wiz[6].strength = 8;
	wiz[6].defense = 10;
	wiz[6].mov[0] = 0; 	//Fairy Law
	wiz[6].mov[1] = 1;  //Fairy Glitter
	wiz[6].mov[2] = 24; //Fairy Sphere
	wiz[6].mov[3] = 25; //Illussions Magic
	
	wiz[7].name = "Hyberion"; //2nd Rank Wizard Saints
	wiz[7].hp = 840;
	wiz[7].ep = 1460;
	wiz[7].epReg = 1460/20;
	wiz[7].speed = 17;
	wiz[7].strength = 17;
	wiz[7].defense = 15;
	wiz[7].mov[0] = 29; 	
	wiz[7].mov[1] = 25;  
	wiz[7].mov[2] = 28; 
	wiz[7].mov[3] = 27; 
	
	wiz[8].name = "Zeref"; // Legendary Black Mage
	wiz[8].hp = 2550;
	wiz[8].ep = 1800;
	wiz[8].epReg = 1800/20;
	wiz[8].speed = 20;
	wiz[8].strength = 24;
	wiz[8].defense = 24;
	wiz[8].mov[0] = 29;   
	wiz[8].mov[1] = 26; 
	wiz[8].mov[2] = 30;
	wiz[8].mov[3] = 3;
	
	wiz[9].name = "Irine"; //2nd Rank Sprigan - Dragon Queen
	wiz[9].hp = 1720;
	wiz[9].ep = 2200;
	wiz[9].epReg = 2200/20;
	wiz[9].speed = 20;
	wiz[9].strength = 27;
	wiz[9].defense = 29;
	wiz[9].mov[0] = 31;   
	wiz[9].mov[1] = 32; 
	wiz[9].mov[2] = 33;
	wiz[9].mov[3] = 22;
	
	wiz[10].name = "Jura"; //5th Rank Wizard Saints
	wiz[10].hp = 758;
	wiz[10].ep = 1285;
	wiz[10].epReg = 1285/20;
	wiz[10].speed = 11;
	wiz[10].strength = 14;
	wiz[10].defense = 30;
	wiz[10].mov[0] = 34;   
	wiz[10].mov[1] = 35; 
	wiz[10].mov[2] = 36;
	wiz[10].mov[3] = 37;
	
	wiz[11].name = "Jose"; //7th Rank Wizard Saints
	wiz[11].hp = 670;
	wiz[11].ep = 1080;
	wiz[11].epReg = 1080/20;
	wiz[11].speed = 10;
	wiz[11].strength = 16;
	wiz[11].defense = 7;
	wiz[11].mov[0]= 29; //Black magic attack   
	wiz[11].mov[1] = 38; //Dark Explossion
	wiz[11].mov[2] = 39; //Phantom Magic: Soul Eater
	wiz[11].mov[3] = 40; //Power Up
	
	wiz[12].name = "Anos Voldigoad"; //Demon King of Tyrani
	wiz[12].hp = 2000;
	wiz[12].ep = 4000;
	wiz[12].epReg = 4000/20;
	wiz[12].speed = 25;
	wiz[12].strength = 50;
	wiz[12].defense = 50;
	wiz[12].mov[0]= 42; //Jio Graze 
	wiz[12].mov[1] = 43; //Gia Greas
	wiz[12].mov[2] = 44; //Egil Grone Angdroa
	wiz[12].mov[3] = 45; //Venuzdonoa Slash

}

void wiz_skill()
{
	sk[0].name = "Fairy Law"; sk[1].name = "Fairy Glitter"; sk[2].name = "Giant Smash"; sk[3].name = "Punch"; sk[4].name = "3-Pillar of God";
	sk[0].hp_dmg = 400;       sk[1].hp_dmg = 578;           sk[2].hp_dmg = 140;        sk[3].hp_dmg = 57;     sk[4].hp_dmg = 0;
	sk[0].epcon = 720;        sk[1].epcon = 495;            sk[2].epcon = 30;          sk[3].epcon = -10;     sk[4].epcon = 440;
	//has effect                                                                                              //has effect
	sk[5].name = "Fire Dragon Fist"; sk[6].name = "Fire Dragon Claw"; sk[7].name = "Fire Dragon Roar"; sk[8].name = "Water Mirror";
	sk[5].hp_dmg = 112;         sk[6].hp_dmg = 170;                   sk[7].hp_dmg = 273;              sk[8].hp_dmg = 0;
	sk[5].epcon = 33;           sk[6].epcon = 69;                     sk[7].epcon = 198;               sk[8].epcon = 155;
	//effect                    //effect                               //effect                        //has effect
	sk[9].name = "Meteor";     sk[10].name = "Grand Chariot"; sk[11].name ="True Heavenly Body Magic: Sema";
	sk[9].epcon = 220;         sk[10].epcon = 302;            sk[11].hp_dmg = 550;
	sk[9].hp_dmg = 72;         sk[10].hp_dmg = 394;           sk[11].epcon = 494;      
	//has effect
	sk[12].name = "Purgatory Dragon Magic"; sk[13].name ="Cavern Dragon Magic"; sk[14].name="Sea King Dragon Magic"; sk[15].name = "Lightning Dragon Magic";
	sk[12].hp_dmg = 325;					sk[13].hp_dmg = 210;				sk[14].hp_dmg = 215;				 sk[15].hp_dmg = 260;
	sk[12].epcon = 239;						sk[13].epcon = 240;					sk[14].epcon = 190;                  sk[15].epcon = 245;
	                                    	//has effect						//has effect
	sk[16].name = "Light Magic Attack"; sk[17].name = "Black Dragon Claw"; sk[18].name = "Absolute Strength"; sk[19].name = "Black Dragon Roar";
	sk[16].hp_dmg = 106;                 sk[17].hp_dmg = 330;         sk[18].hp_dmg = 0;                       sk[19].hp_dmg = 593;
	sk[16].epcon = 16;                  sk[17].epcon = 99;           sk[18].epcon = 1000;                     sk[19].epcon = 512;
                                                                     //has effect
    sk[20].name = "Dragon Wrath"; sk[21].name = "Exploding Flame Blade"; sk[22].name = "Babel Tower"; sk[23].name = "5-Layered Magic: Sacred Song";
    sk[20].hp_dmg = 460;          sk[21].hp_dmg = 590;                                 sk[22].hp_dmg = 0;			sk[23].hp_dmg = 360;
    sk[20].epcon = 401;           sk[21].epcon = 410;                                  sk[22].epcon = 240;          sk[23].epcon = 320;
                                  //has effect                                                                      //has Effect
    sk[24].name = "Fairy Sphere"; sk[25].name = "Illussion Magic";  sk[26].name ="Black Hole: Altairis"; sk[27].name = "Vampire Magic: Blood Lock";
    sk[24].hp_dmg = 0;			  sk[25].hp_dmg = 0;			    sk[26].hp_dmg = 355;			     sk[27].hp_dmg = 0;
    sk[24].epcon = 1100;		  sk[25].epcon = 125;               sk[26].epcon = 420;					 sk[27].epcon = 270;
	//Effect                      //Effect                          //Effect                             //Effect
	sk[28].name = "Vampire Magic: Dracule Ritual"; sk[29].name = "Black Magic Attack"; sk[30].name ="Law: Origin"; sk[31].name = "Universe One";
	sk[28].hp_dmg = 402;                           sk[29].hp_dmg = 56;                 sk[30].hp_dmg =0;           sk[31].hp_dmg = 0;
	sk[28].epcon = 592;                            sk[29].epcon = -30;                 sk[30].epcon = 1100;        sk[31].epcon = 467;
	//effect                                                                           //Effect                    //effect
	sk[32].name ="Enchant: Deus Zero"; sk[33].name = "Enhanched Enchant: Deus Sema";  sk[34].name = "Earth Golem: Protection"; sk[35].name = "Earth Wall Smash";
	sk[32].hp_dmg = 0;                 sk[33].hp_dmg = 878;							  sk[34].hp_dmg = 0;					   sk[35].hp_dmg = 385;
	sk[32].epcon = 582;                sk[33].epcon = 600;                            sk[34].epcon = 252;                      sk[35].epcon = 249;
	//effect																		  //Effect
	sk[36].name = "Collapsing Ground"; 	sk[37].name ="Cavern Prison";	sk[38].name = "Dark Explossion"; sk[39].name ="Phantom Magic: Soul Eater";
	sk[36].hp_dmg = 288;				sk[37].hp_dmg = 150;			sk[38].hp_dmg = 350;			 sk[39].hp_dmg = 200;
	sk[36].epcon = 200;					sk[37].epcon = 424;             sk[38].epcon = 290;				 sk[39].epcon = 512;
	//effect                            //effect                                                         //effect
	sk[40].name = "Power Up";			sk[41].name = "Dragon Force";	sk[42].name = "Jio Graze";		sk[43].name = "Gia Greas";
	sk[40].hp_dmg = 0;					sk[41].epcon = 0;				sk[42].epcon = 500;				sk[43].hp_dmg = 1120; 
	sk[40].epcon = 140;					sk[41].hp_dmg = 0;				sk[42].hp_dmg = 625;			sk[43].epcon = 880;
	//effect							//Transformation
	
	sk[44].name = "Egil Grone Angdroa";	sk[45].name = "Venuzdonoa Slash";
	sk[44].epcon = 3000;				sk[45].epcon = 0;
	sk[44].hp_dmg = 5000;				sk[45].hp_dmg = 400;
}										                             

void char_list()
{
	for(int i=1; i<=13; i++)
	{
		cout<<"-"<<i<<". "<<wiz[i-1].name<<"	";
		if(i%2 == 0)
			cout<<endl;
	}
}
void action(int pTurn, int pWait, int skill_num, int s, int damage)
{
	cout<<"-------------------------------------------"<<endl;
	cout<<"ACTION : "<<wiz[pTurn].name<<" use "<<sk[wiz[pTurn].mov[skill_num-1]].name<<endl;
	cout<<"-------------------------------------------"<<endl;
	damage = sk[wiz[pTurn].mov[skill_num-1]].hp_dmg + wiz[pTurn].strength - wiz[pWait].defense;
	if(damage < 0)
		damage = 0;
	s = rand()%100 + wiz[pTurn].speed - wiz[pWait].speed; //Get Attack Speed
	if(wiz[pTurn].mov[skill_num-1] == 18 || wiz[pTurn].mov[skill_num-1] == 8 || wiz[pTurn].mov[skill_num-1] == 24 || wiz[pTurn].mov[skill_num-1] == 25
		|| wiz[pTurn].mov[skill_num-1] == 31 || wiz[pTurn].mov[skill_num-1] == 9 || wiz[pTurn].mov[skill_num-1] == 36 || wiz[pTurn].mov[skill_num-1] == 34 ||
		wiz[pTurn].mov[skill_num-1] == 40 || wiz[pTurn].mov[skill_num-1] == 45)
		s = 100;
	if(s >= wiz[pWait].speed) // If attack speed > enemy's speed
	{
		wiz[pTurn].ep -= sk[wiz[pTurn].mov[skill_num-1]].epcon; //EP consumed
		if(wiz[pWait].reppeled == true)
		{
			cout<<"EFFECT : "<<wiz[pTurn].name<<"'s attack get reppeled!"<<endl;
			cout<<"       : "<<wiz[pTurn].name<<" get "<<damage<<" damage!"<<endl;
			wiz[pTurn].hp = wiz[pTurn].hp - sk[wiz[pTurn].mov[skill_num-1]].hp_dmg;
		}
		else
		{
			cout<<"EFFECT : "<<wiz[pWait].name<<" get "<<damage<<" damage!"<<endl;
			wiz[pWait].hp = wiz[pWait].hp - damage;
		}
		wiz[pWait].reppeled = false;
		if(wiz[pTurn].mov[skill_num-1] == 24) //Fairy Sphere's Effect
			{
				cout<<"       : "<<"A magical golden sphere is created!"<<endl;
				cout<<"       : "<<wiz[pTurn].name<<" is protected by the sphere!"<<endl;
				wiz[pTurn].defense += 1000;
			}
		if(wiz[pTurn].mov[skill_num-1] == 30) //Law Origins's Effect
			{
				wiz[pWait].ep = wiz[pWait].ep/8;
				wiz[pWait].stuned = 1; 
				cout<<"       : "<<wiz[pWait].name<<"'s Magic Power get drained drastically!"<<endl;
				cout<<"       : "<<wiz[pWait].name<<" is stunned for 1 turn!'"<<endl;
			}	
		if(wiz[pTurn].mov[skill_num-1] == 0) //Fairy Law's Effect
			{
				wiz[pWait].ep = wiz[pWait].ep/3;
				wiz[pWait].stuned = 1; 
				cout<<"       : "<<wiz[pWait].name<<"'s Magic Power get drained!"<<endl;
				cout<<"       : "<<wiz[pWait].name<<" is stunned for 1 turn!'"<<endl;
			}
		if(wiz[pTurn].mov[skill_num-1] == 25) //illusion's magic Effect
			{ 
				cout<<"       : A great number of illussions creature is created!"<<endl;
				cout<<"       : "<<wiz[pWait].name<<" is confused!"<<endl;
				wiz[pTurn].speed = 70;
			}
		if(wiz[pTurn].mov[skill_num-1] == 23) //5-Layered Magic: Explossion;
			{
				wiz[pWait].ep -= wiz[pWait].ep/4;
				wiz[pWait].stuned = 1; 
				cout<<"       : "<<wiz[pWait].name<<"'s Magic Power get drained!"<<endl;
				cout<<"       : "<<wiz[pWait].name<<" is stunned for 1 turn!'"<<endl;
			}
		if(wiz[pTurn].mov[skill_num-1] == 39) //Phantom magic: soul Eater;
			{
				cout<<"       : "<<wiz[pWait].name<<"'s body get "<<wiz[pWait].hp/4<<" additional damage!"<<endl;
				wiz[pWait].hp -= wiz[pWait].hp/4;
			}
		if(wiz[pTurn].mov[skill_num-1] == 27) //Blood Lock Effect;
			{
				wiz[pWait].stuned = 1; 
				cout<<"       : "<<wiz[pWait].name<<"'s HP get drained!"<<endl;
				cout<<"       : "<<wiz[pWait].name<<" is stunned for 1 turn!'"<<endl;
				wiz[pTurn].hp += wiz[pWait].hp/5;
				wiz[pWait].hp -= wiz[pWait].hp/5;
			}
		if(wiz[pTurn].mov[skill_num-1] == 28) //Dracule Ritual Effect;
			{ 
				cout<<"       : "<<wiz[pWait].name<<"'s "<<wiz[pWait].hp/3<<" HP get drained!"<<endl;
				wiz[pTurn].hp += wiz[pWait].hp/4;
				wiz[pWait].hp -= wiz[pWait].hp/4;
			}
		if(wiz[pTurn].mov[skill_num-1] == 34) //Earth Golem Protection's Effect;
			{ 
				cout<<"       : "<<wiz[pTurn].name<<" is protected by earth golem!"<<endl;
				wiz[pTurn].defense += 490;
			}
		if(wiz[pTurn].mov[skill_num-1] == 37) //Cavern Prison's Effect;
			{ 
				cout<<"       : "<<wiz[pWait].name<<" is traped in the cavern!"<<endl;
				cout<<"       : "<<wiz[pWait].name<<"'s "<<wiz[pWait].hp/5<<" HP & EP is absorbed!"<<endl;
				wiz[pTurn].hp += wiz[pWait].hp/5;
				wiz[pWait].hp -= wiz[pWait].hp/5;
				wiz[pTurn].ep += wiz[pWait].hp/5;
				wiz[pWait].ep -= wiz[pWait].hp/5;
				wiz[pWait].stuned = 1;
			}	
		if(wiz[pTurn].mov[skill_num-1] == 4) //3-Pillar of God's Effect
		{
			cout<<"       : "<<wiz[pWait].name<<"'s' HP & EP get absorbed!"<<endl;
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<wiz[pWait].hp/3<< " HP & EP!"<<endl;
			cout<<"       : "<<wiz[pTurn].name<<"'s defense enhanched!"<<endl;
			wiz[pTurn].defense += 100;
			wiz[pTurn].hp += wiz[pWait].hp/3;
			wiz[pWait].hp -= wiz[pWait].hp/3;
			wiz[pTurn].ep += wiz[pWait].ep/3;
			wiz[pWait].ep -= wiz[pWait].ep/3;
		}
		if(wiz[pTurn].mov[skill_num-1] == 40) //Power Up's Effect
		{
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<200<<" HP!"<<endl;
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<20<<" speed!"<<endl;
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<150<<" strength!"<<endl;
			wiz[pTurn].speed += 20;
			wiz[pTurn].hp += 200;
			wiz[pTurn].strength += 150;
			wiz[pTurn].powerUp = true;
		}
		if(wiz[pTurn].mov[skill_num-1] == 9) //Meteor's Effect
		{
			cout<<"       : "<<wiz[pTurn].name<<"'s speed Enhanched!"<<endl;
			wiz[pTurn].speed = wiz[pTurn].speed*4;
		}
		if(wiz[pTurn].mov[skill_num-1] == 12) //Purgatory Dragon Magic's Effect
		{
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<220<< " strength!"<<endl;
			wiz[pTurn].strength += 220;
			wiz[pTurn].powerUp = true;
		}	
		if(wiz[pTurn].mov[skill_num-1] == 13) //Cavern Dragon Magic's Effect
		{
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<220<< " HP!"<<endl;
			wiz[pTurn].hp += 220;
		}
		if(wiz[pTurn].mov[skill_num-1] == 14) //Sea King Dragon Magic's Effect
		{
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<220<< " EP!"<<endl;
			wiz[pTurn].ep += 220;
		}
		if(wiz[pTurn].mov[skill_num-1] == 15) //Lighting Dragon Magic's Effect
		{
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<45<< " speed!"<<endl;
			wiz[pTurn].speed += 45;
		}
		if(wiz[pTurn].mov[skill_num-1] == 18) //Absolute Strength's Effect
		{
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<500<<" HP!"<<endl;
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<40<<" speed!"<<endl;
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<300<<" strength!"<<endl;
			wiz[pTurn].speed += 40;
			wiz[pTurn].hp += 500;
			wiz[pTurn].strength += 300;
			wiz[pTurn].powerUp = true;
		}
		if(wiz[pTurn].mov[skill_num-1] == 5) // Fire Dragon Fist's Effect
		{
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<5<<" speed!"<<endl;
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<60<<" strength!"<<endl;
			wiz[pTurn].speed += 5;
			wiz[pTurn].strength +=60;
			wiz[pTurn].powerUp = true;
		}
		if(wiz[pTurn].mov[skill_num-1] == 6) // Fire Dragon CLaw's Effect
		{
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<7<<" speed!"<<endl;
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<60<<" strength!"<<endl;
			wiz[pTurn].speed += 7;
			wiz[pTurn].strength +=60;
			wiz[pTurn].powerUp = true;
		}
		if(wiz[pTurn].mov[skill_num-1] == 7) // Fire Dragon Roar's Effect
		{
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<10<<" speed!"<<endl;
			cout<<"       : "<<wiz[pTurn].name<<" get +"<<100<<" strength!"<<endl;
			wiz[pTurn].speed += 10;
			wiz[pTurn].strength +=100;
			wiz[pTurn].powerUp = true;
		}
		if(wiz[pTurn].mov[skill_num-1] == 22) //Babel Tower's Effect
		{
			wiz[pWait].stuned = 2; 
			cout<<"       : "<<wiz[pWait].name<<" is stunned for max 2 turn!'"<<endl;
		}
		if(wiz[pTurn].mov[skill_num-1] == 32) //Deus Zero's Effect
		{
			wiz[pTurn].ep += wiz[pWait].ep;
			wiz[pWait].ep = 0; 
			cout<<"       : "<<wiz[pWait].name<<"'s Magic Power is absorbed!"<<endl;
		}
		if(wiz[pTurn].mov[skill_num-1] == 31) //Universe One's Effect
		{
			wiz[pTurn].hp += wiz[pTurn].ep + wiz[pWait].ep;
			wiz[pWait].ep = 0; wiz[pTurn].ep = 0; 
			cout<<"       : All Magic Power are converted to "<<wiz[pTurn].name<<"'s HP!"<<endl;
		}
		if(wiz[pTurn].mov[skill_num-1] == 8) //Water Mirror's Effect
		{ 	wiz[pTurn].reppeled = true;
			cout<<"       : 3-Layered Magic Circle is created!"<<endl;
		}
		if(wiz[pTurn].mov[skill_num-1] == 26) //Altairis Effect
		{ 	
			cout<<"       : "<<wiz[pWait].name<<"'s body get "<<wiz[pWait].hp/3<<" additional damage!"<<endl;
			wiz[pWait].hp -= wiz[pWait].hp/3;
		}
		if(wiz[pTurn].mov[skill_num-1] == 45) //Venuzdonoa Effect
		{ 	
			if(wiz[pWait].hp > 0){
				cout<<"       : "<<wiz[pTurn].name<<" get +"<<wiz[pWait].hp/3<<" HP!"<<endl;
				wiz[pTurn].hp += wiz[pWait].hp/3;
					
			}
			if(wiz[pWait].ep > 0){
				cout<<"       : "<<wiz[pTurn].name<<" get +"<<wiz[pWait].ep/3<<" EP"<<endl;
				wiz[pTurn].ep += wiz[pWait].ep/3;	
			}
		}				
		if(wiz[pWait].hp <= 0)
		{
			cout<<"       : "<<wiz[pWait].name<<" is defeated !"<<endl;
			cout<<"       : "<<wiz[pTurn].name<<" Win!"<<endl;
		}
		if(wiz[pTurn].hp <= 0)
		{
			cout<<"       : "<<wiz[pTurn].name<<" is defeated !"<<endl;
			cout<<"       : "<<wiz[pWait].name<<" Win!"<<endl;
		}
	}
	else
	{
		cout<<"EFFECT : "<<wiz[pWait].name<<" dodge the attack !"<<endl;
		wiz[pTurn].ep -= sk[wiz[pTurn].mov[skill_num-1]].epcon; 
	}
	cout<<"-------------------------------------------"<<endl;
	getch();
}

void battle_scene(int p1, int p2)
{
	int c1=0;
	int c2=0;
	int counter1=0;
	int counter2=0;
	int turn = 1;
	int select;
	int max_Ep1 = wiz[p1].ep;
	int max_Ep2 = wiz[p2].ep;
	int speed1 = wiz[p1].speed;
	int speed2 = wiz[p2].speed;
	int strength1 = wiz[p1].strength;
	int strength2 = wiz[p2].strength;
	int def1 = wiz[p1].defense;
	int def2 = wiz[p2].defense;
	wiz[p1].stuned = 0; wiz[p1].stuned = 0;
	system("CLS");
	while(wiz[p1].hp >0 && wiz[p2].hp>0)
	{
		cout<<"Battle Starts !!! "<<wiz[p1].name<<" VS "<<wiz[p2].name<<endl;
		if(turn == 1)
		{
			if(wiz[p2].stuned > 0)
				wiz[p2].stuned--;
			wiz[p1].defense = def1; //def back to normal
			wiz[p1].speed = speed1; //Back to normal speed
			if(p1 == 12) //August Reg
				wiz[p1].hp += wiz[p1].hpReg;
			if(wiz[p1].ep < max_Ep1) //EP regeneration
				wiz[p1].ep += wiz[p1].epReg;
			if(wiz[p1].ep > max_Ep1)
					wiz[p1].ep = max_Ep1;
			cout<<"HP: "<<wiz[p1].hp<<"	EP: "<<wiz[p1].ep<<" |-----VS-----| HP: "<<wiz[p2].hp<<"	EP: "<<wiz[p2].ep<<endl<<endl;
			cout<<wiz[p1].name<<"'s turn."<<endl<<endl; 
			chooseMove1: //label
			cout<<"Choose a move: "<<endl;
			for(int i=1; i<=4;i++)
				cout<<i<<". "<<sk[wiz[p1].mov[i-1]].name<<endl; 
			cout<<"5. Charge";cout<<endl<<endl;
			cout<<"Your choice: "; cin>>select;
			if(select == 5)
			{
				wiz[p1].ep += (max_Ep1*15)/100;
				cout<<"-------------------------------------------"<<endl;
				cout<<"ACTION : "<<wiz[p1].name<<" use charge! "<<endl;
				cout<<"-------------------------------------------"<<endl;
				cout<<"EFFECT : "<<wiz[p1].name<<"'s EP +"<<(max_Ep1*15)/100<<"!"<<endl;
				cout<<"-------------------------------------------"<<endl;
				getch();
			}
			else if(select == 4 && wiz[p1].mov[3] == 41)
			{
				cout<<"-------------------------------------------"<<endl;
				cout<<"ACTION : "<<wiz[p1].name<<" use Dragon Force! "<<endl;
				cout<<"-------------------------------------------"<<endl;
				cout<<"EFFECT : "<<wiz[p1].name<<" unleash all of his power!"<<endl;
				cout<<"-------------------------------------------"<<endl;
				wiz[13].hp = wiz[p1].hp + 300;
				wiz[13].ep = wiz[p1].ep + 300;
				p1 = 13;
				getch();
			}
			else if(wiz[p1].ep >= sk[wiz[p1].mov[select-1]].epcon)
			{	
				action(p1, p2, select, 0, 0);
			}
			else
			{
				cout<<"You don't have enough magic power!"<<endl; cout<<endl;
				goto chooseMove1;
			}
			cout<<endl;
			if(wiz[p1].powerUp == true)
			{
				counter1++;
				if(counter1 == 2)
				{
					wiz[p1].strength = strength1;
					wiz[p1].powerUp = false;
					counter1 = 0;
				}	
			}
			if(wiz[p2].stuned == 0)
				turn = 2;
			else
				turn = 1;
		}
		else
		{
			if(wiz[p1].stuned > 0)
				wiz[p1].stuned--;
			wiz[p2].defense = def2; //def back to normal
			wiz[p2].speed = speed2; //Back to normal speed
			if(p2 == 12)//August Reg
				wiz[p2].hp += wiz[p2].hpReg;
			if(wiz[p2].ep < max_Ep2)//EP Regeneration
				wiz[p2].ep += wiz[p2].epReg;
			if(wiz[p2].ep > max_Ep2)
				wiz[p2].ep = max_Ep2;	
			cout<<"HP: "<<wiz[p1].hp<<"	EP: "<<wiz[p1].ep<<" |-----VS-----| HP: "<<wiz[p2].hp<<"	EP: "<<wiz[p2].ep<<endl<<endl;
			cout<<wiz[p2].name<<"'s turn."<<endl<<endl;
			chooseMove2: //label
			cout<<"Choose a move: "<<endl;
			for(int i=1; i<=4;i++)
				cout<<i<<". "<<sk[wiz[p2].mov[i-1]].name<<endl;
			cout<<"5. Charge"<<endl<<endl;
			cout<<"Your choice: "; cin>>select;
			if(select == 5)
			{
				wiz[p2].ep += (max_Ep2*15)/100;
				cout<<"-------------------------------------------"<<endl;
				cout<<"ACTION : "<<wiz[p2].name<<" use charge! "<<endl;
				cout<<"-------------------------------------------"<<endl;
				cout<<"EFFECT : "<<wiz[p2].name<<"'s EP +"<<(max_Ep2*15)/100<<"!"<<endl;
				cout<<"-------------------------------------------"<<endl; 
				getch();
			}
			else if(select == 4 && wiz[p2].mov[3] == 41)
			{
				cout<<"-------------------------------------------"<<endl;
				cout<<"ACTION : "<<wiz[p2].name<<" use Dragon Force! "<<endl;
				cout<<"-------------------------------------------"<<endl;
				cout<<"EFFECT : "<<wiz[p2].name<<" unleash all of his power!"<<endl;
				cout<<"-------------------------------------------"<<endl;
				wiz[13].hp = wiz[p2].hp + 300;
				wiz[13].ep = wiz[p2].ep + 300;
				p2 = 13;
				getch();
			}
			else if(wiz[p2].ep >= sk[wiz[p2].mov[select-1]].epcon)
			{	
				action(p2, p1, select, 0, 0);
			}
			else
			{
				cout<<"You don't have enough magic power!"<<endl; cout<<endl;
				goto chooseMove2;
			}
			cout<<endl;
			if(wiz[p2].powerUp == true)
			{
				counter2++;
				if(counter2 == 2)
				{
					wiz[p2].strength = strength1;
					wiz[p2].powerUp = false;
					counter2 = 0;
				}	
			}
			if(wiz[p1].stuned == 0)
				turn = 1;
			else
				turn = 2;
		}
		system("CLS");
	}
}

int main()
{
	start:
	int player1,player2;
	wiz_char();
	wiz_skill();
	cout<<"Grand Wizard Battle - RPG"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	cout<<"Select Your Wizard! "<<endl;
	char_list();
	cout<<endl; cout<<"Player 1: "; cin>>player1;
	cout<<wiz[player1-1].name<<" selected!"<<endl;
	cout<<endl; cout<<"Player 2: "; cin>>player2;
	cout<<wiz[player2-1].name<<" selected!"<<endl;
	cout<<endl<<"---Press enter to continue!---";
	getch();
	battle_scene(player1-1,player2-1);
	cout<<"-----------GAME OVER-------------"<<endl;
	char answer;
	cout<<"Play again? (Y/N): ";cin>>answer;
	if(answer == 'y' || answer == 'Y') {
		system("CLS"); goto start;
	}
	cout<<endl;
	cout<<"Press Enter to Exit!";
	getch();
	return 0;
}
