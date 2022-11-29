#include "Virtual_func.h"

void gotoxy(short x, short y)
{
	COORD coord = { x, y };
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(h, coord);
}

int main()
{
	srand(time(NULL));
	system("color F0");
	const int num_menu = 5, size_w = 4, size_d_r = 2, size_win = 3;
	int ch = 0, active_menu = 0, a, b, all_time = 0, all_price = 0,
	all_time_build = 0, all_price_build = 0;
	bool q; 
	
	
	cout << "\t\t****************************************************" << endl;
	cout << "\t\tProject your home have: Walls, Doors, Roofs, Windows" << endl;
	cout << "\t\t****************************************************\n" << endl;
	
	system("pause");

	do
	{
		bool exit = false;
		while (!exit)
		{

			show_menu();
			gotoxy(0, active_menu);
			ch = _getch();
			if (ch == 224) ch = _getch();
			switch (ch)
			{

			case 27: exit = true; break;
			case 72: active_menu--; break;
			case 80: active_menu++; break;
			case 13:

				if (active_menu == 0)
				{
					system("cls");
					Dwelling* walls[4]{ new Wall(5, "Gray"),
					new Wall(4, "Blue"), new Wall(2, "Red"), new Wall(1, "Pink") };
					cout << "****************************************************************" << endl;
					for (int i = 0; i < size_w; i++)
					{
						a = rand() % 150 + 50;
						b = rand() % 1000 + 700;
						walls[i]->Build();
						walls[i]->Print(a, b);
						all_price += a;
						all_time += b;
					}
					all_time_build += all_time, all_price_build += all_price;
					Print_t_c(all_time, all_price);
					all_time = all_price = 0;
					system("pause");
				}
				else if (active_menu == 1)
				{
					system("cls");
					Dwelling* doors[size_d_r]{ new Door(2, "wood"),
						new Door(3, "metal") };

					cout << "****************************************************************" << endl;
					for (int i = 0; i < size_d_r; i++)
					{
						a = rand() % 100 + 40;
						b = rand() % 400 + 250;
						doors[i]->Build();
						doors[i]->Print(a, b);
						all_price += a;
						all_time += b;
					}
					all_time_build += all_time, all_price_build += all_price;
					Print_t_c(all_time, all_price);
					all_time = all_price = 0;
					system("pause");

				}
				else if (active_menu == 2)
				{
					system("cls");
					Dwelling* roofs[size_d_r]{ new Roof(1, "shingles"),
					new Roof(1, "cooper") };

					cout << "****************************************************************" << endl;
					for (int i = 0; i < size_d_r; i++)
					{
						a = rand() % 500 + 400;
						b = rand() % 7000 + 5900;
						roofs[i]->Build();
						roofs[i]->Print(a, b);
						all_price += a;
						all_time += b;
					}
					all_time_build += all_time, all_price_build += all_price;
					Print_t_c(all_time, all_price);
					all_time = all_price = 0;
					system("pause");

				}
				else if (active_menu == 3)
				{
					system("cls");
					Dwelling* win[size_win]{ new Window(4, "wood"),
					new Window(2, "plastic"), new Window(1, "aluminum") };
					cout << "****************************************************************" << endl;
					for (size_t i = 0; i < size_win; i++)
					{
						a = rand() % 80 + 48;
						b = rand() % 200 + 100;
						win[i]->Build();
						win[i]->Print(a, b);
						all_price += a;
						all_time += b;
					}
					all_time_build += all_time, all_price_build += all_price;
					Print_t_c(all_time, all_price);
					all_time = all_price = 0;
					system("pause");

				}
				else if (active_menu == 4)
				{
					system("cls");
					Dwelling* walls[4]{ new Wall(5, "Gray"), 
					new Wall(4, "Blue"), new Wall(2, "Red"), new Wall(1, "Pink") };
					cout << "****************************************************************" << endl;
					for (int i = 0; i < size_w; i++)
					{
						a = rand() % 150 + 50;
						b = rand() % 1000 + 700;
						walls[i]->Build();
						walls[i]->Print(a, b);
						all_price += a;
						all_time += b;
					}
					all_time_build += all_time, all_price_build += all_price;
					Print_t_c(all_time, all_price);
					all_time = all_price = 0;

					Dwelling* doors[size_d_r]{ new Door(2, "wood"),
						new Door(3, "metal") };

					for (int i = 0; i < size_d_r; i++)
					{
						a = rand() % 100 + 40;
						b = rand() % 400 + 250;
						doors[i]->Build();
						doors[i]->Print(a, b);
						all_price += a;
						all_time += b;
					}
					all_time_build += all_time, all_price_build += all_price;
					Print_t_c(all_time, all_price);
					all_time = all_price = 0;

					Dwelling* roofs[size_d_r]{ new Roof(1, "shingles"),
					new Roof(1, "cooper") };

					for (int i = 0; i < size_d_r; i++)
					{
						a = rand() % 500 + 400;
						b = rand() % 7000 + 5900;
						roofs[i]->Build();
						roofs[i]->Print(a, b);
						all_price += a;
						all_time += b;
					}
					all_time_build += all_time, all_price_build += all_price;
					Print_t_c(all_time, all_price);
					all_time = all_price = 0;

					Dwelling* win[size_win]{ new Window(4, "wood"),
					new Window(2, "plastic"), new Window(1, "aluminum") };

					for (size_t i = 0; i < size_win; i++)
					{
						a = rand() % 80 + 48;
						b = rand() % 200 + 100;
						win[i]->Build();
						win[i]->Print(a, b);
						all_price += a;
						all_time += b;
					}
					all_time_build += all_time, all_price_build += all_price;
					Print_t_c(all_time, all_price);
					cout << "\n\n****************************************************************" << endl;
					cout << "all_time building your happy home = " << all_price_build << " minutes " << endl;
					cout << "all_price your happy home = " << all_time_build << " $ " << endl;
					cout << "****************************************************************" << endl;

					system("pause");

				}
				break;
			}
			if (active_menu < 0) active_menu = num_menu - 1;
			if (active_menu > num_menu - 1) active_menu = 0;

		}
		system("cls");
		cout << "If you wanna continue press 1, no 0" << endl;
		cin >> q;
		system("cls");
	} while (q == 1);
	system("cls");

	return 0;






	
}