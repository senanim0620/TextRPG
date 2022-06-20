#pragma once
#include <iostream>
#include <string>
#include <assert.h>
#include <windows.h>
#include<iomanip>

using namespace std;

int con_num = 0;
int buf[6][2] = { {18,18},{7,7},{9,10},{11,14},{3,7},{18,5} };

class ConvenienStore
{
public:
	void Init()
	{
		numbering = con_num;
		x = buf[con_num][0];
		y= buf[con_num][1];
		con_num++;
	}

	int GetStorePositionX()
	{
		return x;
	}
	int GetStorePositionY()
	{
		return y;
	}
	int GetStoreNumbering()
	{
		return numbering;
	}
	

private:
	int numbering=0;
	int x;
	int y;

};