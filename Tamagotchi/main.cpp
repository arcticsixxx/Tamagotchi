#include <iostream>
#include <windows.h>

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
}

void Logic()
{

    Sleep(100);
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

void Input()
{

}

void Start()
{
    isOver = false;
}

int main()
{

    Start();
    while (!isOver) {
        Screen();
        Logic();
    }
}
