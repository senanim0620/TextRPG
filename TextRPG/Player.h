#pragma once
#include <iostream>
#include <string>
#include <assert.h>
#include <windows.h>

#include "Map.h"

using namespace std;

class Player
{
public:

    void Print()
    {
        cout << "이름 :" << name << endl;
        cout << "보유 메이플 빵 ;" << MapleBread << endl;
        cout << "탈 것 :" << ride << endl;
        cout << "현금 :" << cash << endl;
    }
    int GetPlayerPositionX()
    {
        return x;
    }
    int GetPlayerPositionY()
    {
        return y;
    }



    void SetPlayerX(int locationX)
    {
        x = locationX;
    }

    void SetPlayerY(int locationY)
    {
        y = locationY;
    }


private:
    string name = "이세나";
    string ride = "두 다리";
    int MapleBread = 0;
    int cash = 30000;
    int x = 1;
    int y = 1;

};