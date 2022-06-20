#pragma once

#include <iostream>
#include <string>
#include <assert.h>
#include <windows.h>
#include "Player.h"
#include "Map.h"

using namespace std;

class GameManager
{
public:

    void Init()
    {

        _map.Init(_player.GetPlayerPositionX(), _player.GetPlayerPositionY());
    }


    void GetPlayer()
    {
        _player.Print();
    }
    void PrintMap()
    {
        _map.PrintMap();
    }

    void PlayerMove(string location)
    {
        if (location == _map.GetMapstring(location))
        {
            _player.SetPlayerX(_map.GetMapPositionX(location));
            _player.SetPlayerY(_map.GetMapPositionY(location));
        }
    }


private:
    Player _player;
    Map _map;

};
