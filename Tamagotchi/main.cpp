#include <iostream>
#include <windows.h>
#include <conio.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono_literals;

struct Components
{
    bool isOver;
    int health = 100;
    int hunger = 100;
    int mood = 100;
};

Components c;

void Start()
{
    c.isOver = false;
}


void Screen()
{
    system("cls");
    cout << endl;
    cout << endl;
    cout << "                               +--------------+--------------+--------------+\n";
    cout << "                               | HEALTH: "<<c.health<<"% | MOOD: "<<c.mood<<"%   | HUNGER: "<<c.hunger<<"%  |\n";
    cout << "                               +--------------+--------------+--------------+\n";
    cout << "                               |                                            |\n";
    cout << "                               |                   $$            $$         |\n";
    cout << "                               |                  $   $        $   $        |\n";
    cout << "                               |                  $     $$$$$$     $        |\n";
    cout << "                               |                  $    sss   sss    $       |\n";
    cout << "                               |                  $     @     @      $      |\n";
    cout << "                               |                 $       $$$        $       |\n";
    cout << "                               |     $$$$$$$$     $       $        $        |\n";
    cout << "                               |   $$        $       $$         $$          |\n";
    cout << "                               |    $         $     $   $$$$$$   $          |\n";
    cout << "                               |       $      $    $  $        $  $         |\n";
    cout << "                               |       $     $    $  $          $  $        |\n";
    cout << "                               |      $    $   $$$$  $          $  $$$$     |\n";
    cout << "                               |     $   $    $    $  $        $   $   $    |\n";
    cout << "                               |     $  $     $    $  $        $  $    $    |\n";
    cout << "                               |      $  $      $    $   $ $     $   $      |\n";
    cout << "                               |       $   $$$$$ $ $     $ $    $   $       |\n";
    cout << "                               |          $$$$$ $    $    $     $    $      |\n";
    cout << "                               |                $$$ $     $      $ $$$      |\n";
    cout << "                               |                     $$$$   $$$$$           |\n";
    cout << "                               |                                            |\n";
    cout << "                               +--------------------------------------------+\n";
    cout << "                                                 HOW TO PLAY?                \n";
    cout << "                                  Z - FEED | X - PLAY | C - HEAL | V - EXIT  \n";
    cout << "                                                                               ";

}

void GameOver()
{
    cout << endl;
    cout << endl;
    cout <<"                                $$$$    $$$$   $$   $  $$$$$ \n";
    cout <<"                               $$      $$  $$  $$$ $$  $$    \n";
    cout <<"                               $$ $$$  $$$$$$  $$ $ $  $$$$  \n";
    cout <<"                               $$  $$  $$  $$  $$   $  $$    \n";
    cout <<"                                $$$$   $$  $$  $$   $  $$$$$ \n";
    cout <<"                                                             \n";
    cout <<"                                $$$$   $$  $$  $$$$$   $$$$$ \n";
    cout <<"                               $$  $$  $$  $$  $$      $$  $$\n";
    cout <<"                               $$  $$  $$  $$  $$$$    $$$$$ \n";
    cout <<"                               $$  $$   $$$$   $$      $$  $$\n";
    cout <<"                                $$$$     $$    $$$$$   $$  $$\n";
}

void Input()
{
    if (_kbhit()) {
        switch (_getch())
        {
        case 'z':
            c.hunger += 10;
            break;
        case 'x':
            c.mood += 6;
            c.hunger -= 7;
            break;
        case 'c':
            c.health += 9;
            break;
        case 'v':
            c.isOver = true;
            system("cls");
            GameOver();
            break;
        }
    }
}

void Logic()
{

    if (!c.isOver) {
        std::this_thread::sleep_for(5s);
        --c.hunger;
    }

    if (c.health == 0) {
        c.isOver = true;
        system("cls");
        GameOver();
    }

    if (c.hunger < 75 && c.hunger > 50) {
        std::this_thread::sleep_for(3s);
        c.mood -= (rand() % 3);
        c.health -= 1;
    }

    if (c.hunger <= 50 && c.hunger > 25) {
        std::this_thread::sleep_for(2s);
        c.mood -= (rand() % 4);
        c.health -= 3;
    }

    if (c.hunger <= 25) {
        std::this_thread::sleep_for(1s);
        c.mood -= (rand() % 5);
        c.health -= 4;
    }

}

void Check()
{
    if (c.hunger > 100)
        c.hunger = 100;

    if (c.mood > 100)
        c.mood = 100;

    if (c.health > 100)
        c.health = 100;

    if (c.hunger < 0 )
        c.hunger = 0;

    if (c.mood < 0)
        c.mood = 0;

    if (c.health < 0)
        c.health = 0;
}



int main()
{
    Start();
    while (!c.isOver) {
        Screen();
        Input();
        Logic();
        Check();
    }
}






