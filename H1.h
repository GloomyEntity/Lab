#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

//массивы и переменные
bool brutality_c = false;
bool Smoking = false;

class Weed {
public:
    string weed_item = " \" ";
    int Wi_y = 2, Wi_x = 3;
    string weed_item_thing = "wood for smoking";
    bool pick_weed_item = false;
};

string hero_invent[6] = { " 1 ", " 2 ", " 3 ", " 4 ", " 5 ", " 6 " };
string hero_invent_th[6] = { " 1 ", " 2 ", " 3 ", " 4 ", " 5 ", " 6 " };
int hero_inv_i = 0;
int map_number = 0;

class Player {
public:
    bool brutal_mode = false;

    char name[11]{};
    string hero;
    string hero_body = "P";
    char LeftArm = ' ';
    char RightArm = ' ';

    bool life = true;
    int DMG = 2;
    int HP = 10;
    string class_hero = "Солдат  ";
    int hero_x = 1, hero_y = 1;
    string floor = " . ";

    int col_smok;

    string WhyYouDied;
};

class Enemy {
public:
    string enemy_entity = " A ";
    int enemy_entity_HP = 666;
    int enemy_entity_DMG = 2;
    int enemy_x = 4, enemy_y = 3;
    bool fight_for_enemy = false;
    bool enemy_moves = true;
    bool enemy_life = true;
    char name_enemy[10] = { 'У','б','и','й','ц','а',' ',' ' ,' ',' ' };//да,я глиномес
};

string Cyrllius = " C ";
bool Cyrllius_life = true;
int Cyrllius_DMG = 2;
int Cyrllius_x = 2, Cyrllius_y = 1;

bool canSpeak_now = true;
vector <string> HasQuests;
vector <string> MadeQuests;

bool fight = false;
bool hero_moves = false;
bool can_go = true;
bool can_d = true;
bool can_a = true;
bool can_w = true;
bool can_s = true;

string Map[][6][6]{

{ // Map 0 - Создаём карту 1
    {" # ", " # ", " # ", " # ", " # ", " # "},
    {" # ", " . ", " - ", " . ", " - ", " # "},
    {" # ", " - ", " . ", " - ", " . ", " # "},
    {" # ", " . ", " - ", " . ", " - ", " # "},
    {" # ", " - ", " . ", " - ", " . ", " # "},
    {" # ", " # ", " # ", " # ", " # ", " # "}
},

{ // Map 1 - Создаём карту 2
    {" + ", " + ", " + ", " + ", " + ", " + "},
    {" # ", " . ", " . ", " . ", " . ", " # "},
    {" # ", " . ", " . ", " . ", " . ", " # "},
    {" # ", " . ", " . ", " . ", " . ", " # "},
    {" # ", " . ", " . ", " . ", " . ", " # "},
    {" # ", " # ", " # ", " # ", " # ", " # "}
},
{ // Map 2 - Создаём карту 2
    {" # ", " # ", " # ", " # ", " # ", " # "},
    {" # ", " . ", " . ", " . ", " . ", " # "},
    {" # ", " . ", " . ", " . ", " . ", " # "},
    {" # ", " . ", " . ", " . ", " . ", " # "},
    {" # ", " . ", " . ", " . ", " . ", " # "},
    {" + ", " + ", " + ", " + ", " + ", " + "}
},

};


class PitCl {
public:
    string pit_one = " О ";
    int pit_number = 0;
    bool pit_pit = false;
    int pit_x = 1, pit_y = 1;
};

string Pit1[2][6][3]{
    { // Pit1 0
    {" # ", "   "," # "},
    {" [ ", " | "," ] "},
    {" # ", "   "," # "},
    {" [ ", "   "," ] "},
    {" # ", "   "," # "},
    {" [ ", "   "," ] "}
},
 { // Pit1 1
    {" [ ", "   "," ] "},
    {" # ", "| |"," # "},
    {" [ ", "   "," ] "},
    {" # ", "   "," # "},
    {" [ ", "   "," ] "},
    {" # ", "   "," # "}
},
};

PitCl pitone;
Enemy enemy;
Player You;
Weed weed1;Weed weed2;

string Interface[6][4] = {
            {" |#", " # ", " # ", " #  #  #"},
            {"","", "", ""},
            {" | Класс: ", You.class_hero, "", ""},
            {" | HP: ", to_string(You.HP), "        ", " "},
            {" | DMG: ", to_string(You.DMG), "        ", " "},
            {" |#", " # ", " # ", " #  #  #"}
};
string Interface_enemy[6][4] = {
            {" #", " # ", " # ", " #  #  # # #"},
            {"","", "", ""},
            {" | Отношение: ", "враг", "", "# "},
            {" | HP: ", to_string(enemy.enemy_entity_HP), "        ", " # "},
            {" | DMG: ", to_string(enemy.enemy_entity_DMG), "        ", " # "},
            {" #", " # ", " # ", " #  #  # # #"}
};

