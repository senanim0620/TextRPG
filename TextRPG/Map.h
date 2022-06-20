#pragma once

#include <iostream>
#include <string>
#include <assert.h>
#include <windows.h>
#include <iomanip>
#include "BikeStation.h"
#include "ConvenienceStore.h"

using namespace std;



class Map
{
public:


	void Init(int playerX, int playerY)
	{
		//bikestation.Init(); // 버이크 스테이션 초기화
		
		for (int i = 0; i < 6; i++)
		{
			store[i].Init();
		}


		for(int i=0;i<20;i++)
			for (int j = 0; j < 20; j++)
			{
				map[i][j] = "□";
			}

		for (int i = 0; i < 20; i++)
			map[0][i] = "■";
		for (int i = 0; i < 20; i++)
			map[19][i] = "■";
		for (int i = 0; i < 20; i++)
			map[i][0] = "■";
		for (int i = 0; i < 20; i++)
			map[i][19] = "■";

		for (int i = 0; i < 6; i++) // 편의점 배치
		{
			map[store[i].GetStorePositionX()][store[i].GetStorePositionY()] = "C";
			map[store[i].GetStorePositionX()][store[i].GetStorePositionY()].append(to_string(store[i].GetStoreNumbering()));
		}
		map[bikestation.GetStationPositionX()][bikestation.GetStationPositionY()] = "B1";

		map[playerX][playerY] = "SN";

	}


	int GetMapPositionX(string position)
	{
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				if (position == map[i][j])
				{
					return i;
				}
			}
		}
	}

	int GetMapPositionY(string position)
	{
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				if (position == map[i][j])
				{
					return j;
				}
			}
		}
	}

	string GetMapstring(string position)
	{
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				if (position == map[i][j])
				{
					return map[i][j];
				}
			}
		}
	}

	void PrintMap()
	{
		for (int i = 0; i < 20; i++) 
		{
			for (int j = 0; j < 20; j++)
			{
				cout << map[i][j];
			}
			cout << endl;
		}
		
	}



private:
	string map[20][20]; // 진짜 맵
	 
	BikeStation bikestation;
	ConvenienStore store[6];
};