#include <iostream>

using namespace std;

/*
- �츮�� ������ �˰� �ս��ϴ�.
- ������ ���� �ٴ����� �̷���� �ֽ��ϴ�.
- ���� ��� �� �� �����ϴ�.
- ������ ũ��� 10x10 �Դϴ�.
- ���󿡴� �÷��̾�� ���Ϳ� �������� �ֽ��ϴ�.
- �÷��̾�� �����¿�� �̵��մϴ�.
- ���͵� �����¿�� �̵��մϴ�.
- �������� �÷��̾ �����ϸ� ���� �����̴�.
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