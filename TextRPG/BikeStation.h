#pragma once

#include <iostream>
#include <string>
#include <assert.h>
#include <windows.h>
#include <iomanip>

struct Bike
{
	int numbering ; // ����ũ �ѹ���
	bool _ishere= true; // �ִ��� Ȯ���ϴ� �Լ�
	//string Biketype;

};


using namespace std;

class BikeStation 
{
public:
/*	void Init()
	{

		_bike[0].numbering = 0;
		_bike[0].Biketype = "�Ϲ� ������";

		_bike[1].numbering = 1;
		_bike[1].Biketype = "���� ������";

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
	
	int x =5; // ����ũ �����̼� ��ġ
	int y=	5	; // ����ũ �����̼� ��ġ
	//Bike _bike[2]; // �ȿ� �ִ� ����ũ

};