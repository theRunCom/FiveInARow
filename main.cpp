#include <iostream>
#include "Panel.h"
#include "Player.h"
#include <string>

int main()
{
	Panel p;
	p.initial();

	std::cout << "�����p1������: " << std::endl;
	std::string A;
	std::cin >> A;
	std::cout << "�����p2������: " << std::endl;
	std::string B;
	std::cin >> B;

	Player p1(A, -1, &p);
	Player p2(B, 1, &p);

	while (1)
	{
		// Print empty board.
		p.print();

		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "�����" << p1.Name << "����: " << std::endl;
		p1.set();
		p.print();
		// Determine whether player P1 wins after placing a piece.
		if (p1.Judgment())
		{
			p.print();
			std::cout << "���" << p1.Name << "��ʤ" << std::endl;
			std::cout << "��һ����Ϸ�밴c,�˳��밴����" << std::endl;

			// To determine whether or not to proceed to the next game.
			char c;
			std::cin >> c;
			if (c != 'c')
			{
				break;
			}
			else
			{
				p.initial();
			}
		}

		std::cout << "�����" << p2.Name << "����: " << std::endl;
		p2.set();
		p.print();

		if (p2.Judgment())
		{
			p.print();
			std::cout << "���" << p2.Name << "��ʤ" << std::endl;
			std::cout << "��һ����Ϸ�밴c,�˳��밴����" << std::endl;

			char c;
			std::cin >> c;
			if (c != 'c')
			{
				break;
			}
			else
			{
				p.initial();
			}
		}
	}
	return 0;
}
