#pragma once

#include <iostream>
#include <string>
#include <assert.h>
#include <windows.h>
#include <iomanip>

struct Bike
{
	int numbering ; // 바이크 넘버링
	bool _ishere= true; // 있는지 확인하는 함수
	//string Biketype;

};


using namespace std;

class BikeStation 
{
public:
/*	void Init()
	{

		_bike[0].numbering = 0;
		_bike[0].Biketype = "일반 자전거";

		_bike[1].numbering = 1;
		_bike[1].Biketype = "전동 자전거";

	}
	*/
	int GetStationPositionX() 
	{
		return x;
	}

	int GetStationPositionY()
	{
		return y;
	}

private:
	
	int x =5; // 바이크 스테이션 위치
	int y=	5	; // 바이크 스테이션 위치
	//Bike _bike[2]; // 안에 있는 바이크

};