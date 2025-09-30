#include <iostream>

using namespace std;

/*
- 우리는 세상을 알고 잇습니다.
- 세상은 벽과 바닥으로 이루어져 있습니다.
- 벽은 통과 할 수 없습니다.
- 세상은 크기는 10x10 입니다.
- 세상에는 플레이어와 몬스터와 목적지가 있습니다.
- 플레이어는 상하좌우로 이동합니다.
- 몬스터도 상하좌우로 이동합니다.
- 목적지에 플레이어가 도착하면 게임 끝납이다.
*/

//World
//	Wall
//		dont go
//	Floor
//
//Player
//	PlayerMove
//
//Monster
//	MonsterMove
//
//Goal
//	GameOver

int Map[10][10] = { 0, };

class Engine
{
public:
	World MyWorld;

	void Run()
	{
		while (true)
		{
			Input();
			Tick();
			Render();
		}
	}
	void Input()
	{

	}
	void Tick()
	{

	}
	void Render()
	{

	}
};

class World
{
public:
	Wall Walls[100];
	Floor Floors[100];
	Player CharacterPlayer;
	Monster CharacterMonster;
	Goal Goalin;

	void GameOver()
	{
		
	}
};

class Wall
{
public:

};

class Floor
{
public:

};

class Player
{
public:
	int PlayerX;
	int PlayerY;

	void Move(char KeyInput)
	{
		
	}
	void DontGoWall(int CheakWall)
	{

	}
};

class Monster
{
public:
	int MonsterX;
	int MonsterY;

	void Move()
	{

	}
};

class Goal
{
public:
	int GoalX;
	int GoalY;
};

int main()
{
	Engine* MyEngine = new Engine();
	MyEngine->Run();
	delete MyEngine;
	MyEngine = nullptr;

	return 0;
}