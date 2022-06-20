#include <iostream>
#include <string>
#include <assert.h>
#include <windows.h>
#include "GameManager.h"


using namespace std;


int main()
{
    cout << "이 나이 먹고 메이플 빵 구하는 거 난 안 쪽팔려\n";
    cout << "___________________________________\n";
    cout << "1. 게임시작        2. 종료하기\n";

    int a;

    cin >> a;

    if (a == 1)
    {
        system("cls");
    }
    else if (a == 2)
        return 0;
    else
        return 0;

    cout << "새벽 탈출을 한 이세나.\n";
    Sleep(1000);
    cout << "그녀에게 주어진 제한 시간은 단 1시간!.\n";
    Sleep(1000);
    cout << "그 안에 메이플 빵 6개를 구하고 집까지 잘 들어가야 한다!\n";
    Sleep(1000);


    // 여기서 모든 Init 다 실행하자

    GameManager _gamemanager;
    _gamemanager.Init();


    string input;
    system("cls");
    _gamemanager.GetPlayer();
    cout << "___________________________\n";
    _gamemanager.PrintMap();

    cout << "어디로 갈까? : ";

    cin >> input;

    _gamemanager.PlayerMove(input);

    _gamemanager.Init();

    _gamemanager.PrintMap();


    cin >> input;

    return 0;
}
