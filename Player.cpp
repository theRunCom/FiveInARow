#include "Player.h"
#include <iostream>

Player::Player(std::string name, int type, Panel* p)
{
	this->Name = name;
	this->Type = type;
	this->P = p;
}

bool Player::Judgment()
{
	int UR, R, DR, D;

	for (int i = 0; i < this->P->P_size; i++)
	{
		for (int j = 0; j < this->P->P_size; j++)
		{
			UR = 0, R = 0, DR = 0, D = 0;
			int k = 0;
			for (k = 0; k < 5; k++)
			{
				if (j + k < P->P_size && this->P->size[i][j + k] == this->Type)
					R++;
				if (i + k < P->P_size && this->P->size[i + k][j] == this->Type)
					D++;
				if (j + k < P->P_size && i + k < P->P_size && this->P->size[i + k][j + k] == this->Type)
					DR++;
				if (i - k > -1 && i - k < this->P->P_size && j + k>-1 && j + k < this->P->P_size && this->P->size[i - k][j + k] == this->Type)
					UR++;
			}

			if (UR == 5 || R == 5 || DR == 5 || D == 5)
			{
				return true;
			}
		}
	}
	return false;
}


void Player::set()
{
	int x, y;
	while (true)
	{
		std::cin >> x;
		std::cin >> y;
		if (x > -1 && x<this->P->P_size && y>-1 && y < this->P->P_size)
		{
			if (this->P->size[x][y] != 0)
			{
				std::cout << "该处已经落子！！！,请重新输入: " << std::endl;
				continue;
			}

			this->P->size[x][y] = this->Type;
			break;
		}
		std::cout << "输入有误,请重新输入: " << std::endl;
	}
}


Player::~Player()
{

};
