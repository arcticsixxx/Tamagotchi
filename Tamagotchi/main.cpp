#include <iostream>
#include <conio.h>
#include <thread>
#include "config.h"


State start {false};
Pet cat {100, 100, 0};

bool timer(int n)
{
    long int lastTime = clock();
    long int lastTimer = lastTime;
    while(1)
    {
        long int currTime = clock();
        long int timeDelta = currTime - lastTime;
        long int timerDelta = currTime - lastTimer;
        if ( timeDelta >= n) {
            return true;
            lastTime = currTime;
        }
    }
}

void Input()
{
    if (_kbhit()) {
        switch (_getch())
        {
        case 'z':
            cat.hunger -= 10;
            break;
        case 'x':
            cat.mood += 6;
            cat.hunger += 7;
            break;
        case 'c':
            cat.health += 9;
            break;
        case 'v':
            start.isOver = true;
            system("cls");
            start.gOver();
            break;
        }
    }
}

void Logic()
{
    if (!start.isOver) {
        timer(1500);
        ++cat.hunger;
    }

    if (cat.hunger > 25 && cat.hunger < 50) {
        timer(1500);
        cat.mood -= (rand() % 3);
        cat.health -= 1;
    }

    if (cat.hunger >= 50 && cat.hunger < 75) {
        timer(1000);
        cat.mood -= (rand() % 4);
        cat.health -= 3;
    }

    if (cat.hunger >= 75) {
        timer(500);
        cat.mood -= (rand() % 5);
        cat.health -= 4;
    }
}

void Check()
{
    if (cat.health == 0) {
        start.isOver = true;
        system("cls");
        start.gOver();
    }

    if (cat.hunger > 100)
        cat.hunger = 100;

    if (cat.mood > 100)
        cat.mood = 100;

    if (cat.health > 100)
        cat.health = 100;

    if (cat.hunger < 0 )
        cat.hunger = 0;

    if (cat.mood < 0)
        cat.mood = 0;

    if (cat.health < 0)
        cat.health = 0;
}

int main()
{
    while (!start.isOver) {
        cat.screen();
        std::thread th(Input);
        if (th.joinable()) th.join();
        Logic();
        Check();
    }
}






