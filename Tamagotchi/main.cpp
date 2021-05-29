#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

bool isOver;
int health = 100;
int hunger = 100;
int mood = 100;

void Screen()
{
    system("cls");
    cout << endl;
    cout << endl;
    cout << "                               +--------------+--------------+--------------+\n";
    cout << "                               | HEALTH: "<<health<<"% | MOOD: "<<mood<<"%   | HUNGER: "<<hunger<<"%  |\n";
    cout << "                               +--------------+--------------+--------------+\n";
    cout << "                               |                    $$            $$        |\n";
    cout << "                               |                   $   $        $   $       |\n";
    cout << "                               |                   $     $$$$$$     $       |\n";
    cout << "                               |                   $    sss   sss    $      |\n";
    cout << "                               |                   $    ³³     ³³     $     |\n";
    cout << "                               |                  $       $$$        $      |\n";
    cout << "                               |      $$$$$$$$     $       $        $       |\n";
    cout << "                               |    $$        $       $$         $$         |\n";
    cout << "                               |     $         $     $   $$$$$$   $         |\n";
    cout << "                               |        $      $    $  $        $  $        |\n";
    cout << "                               |        $     $    $  $          $  $       |\n";
    cout << "                               |       $    $   $$$$  $          $  $$$$    |\n";
    cout << "                               |      $   $    $    $  $        $   $   $   |\n";
    cout << "                               |      $  $     $    $  $        $  $    $   |\n";
    cout << "                               |       $  $      $    $   $ $     $   $     |\n";
    cout << "                               |        $   $$$$$ $ $     $ $    $   $      |\n";
    cout << "                               |           $$$$$ $    $    $     $    $     |\n";
    cout << "                               |                 $$$ $     $      $ $$$     |\n";
    cout << "                               |                      $$$$   $$$$$          |\n";
    cout << "                               |                                            |\n";
    cout << "                               +--------------------------------------------+\n";
    cout << "                                                 HOW TO PLAY?                \n";
    cout << "                                     Z - FEED X - PLAY C - HEAL V - EXIT     \n";
}

void Start()
{
    isOver = false;
}

void Input()
{
    if (_kbhit()) {
        switch (_getch())
        {
        case 'z':
            hunger += 10;
            break;
        case 'x':
            mood += 6;
            break;
        case 'c':
            health += 9;
            break;
        case 'v':
            isOver = true;
            system("cls");
            cout << "GAMEOVER";
            break;
        }
    }
}

void Logic()
{

    Sleep(1000);
    hunger -= 1;

    if (health == 0 || health < 0) {
        isOver = true;
        system("cls");
        cout << "GAMEOVER";
    }

    if (hunger < 75 && hunger > 50) {
        Sleep(1000);
        mood -= 1;
        health -= 1;
    }

    if (hunger <= 50 && hunger > 25) {
        Sleep(1000);
        mood -= 2;
        health -= 3;
    }

    if (hunger <= 25) {
        mood -= 5;
        health -= 4;
    }

}

int main()
{
    Start();
    while (!isOver) {
        Screen();
        Input();
        Logic();
    }
}
