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
        cout << "�̸� :" << name << endl;
        cout << "���� ������ �� ;" << MapleBread << endl;
        cout << "Ż �� :" << ride << endl;
        cout << "���� :" << cash << endl;
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
    string name = "�̼���";
    string ride = "�� �ٸ�";
    int MapleBread = 0;
    int cash = 30000;
    int x = 1;
    int y = 1;

};