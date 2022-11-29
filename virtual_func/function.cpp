#include "Virtual_func.h"


Wall::Wall(int wall, string color)
{
	this->wall = wall;
	this->color = color;
}

void Wall::Build()
{
	cout << wall << " wall " << " color " << color << "  ";
}


Door::Door(int door, string material)
{
	this->door = door;
	this->material = material;
}

void Door::Build()
{
	cout << "door " << door << " material " << material << "  ";
}

Window::Window(int window, string type)
{
	this->window = window;
	this->type = type;
}


void Window::Build()
{
	cout << "window " << window << " type " << type << "  ";
}

Roof::Roof(int roof, string materials)
{
	this->roof = roof;
	this->materials = materials;
}

void Roof::Build()
{
	cout << "roof " << roof << " materials " << materials << "  ";
}


void Dwelling::Print(int time, int cash)
{
	cout << time << " minutes for building "
		<< "price " << cash << " $" << endl;
}

void Print_t_c(int all_time, int all_price)
{
	cout << "****************************************************************" << endl;
	cout << "all_time building  = " << all_price  << " minutes ";
	cout << "all_price = " << all_time << " $ " << endl;
	cout << "****************************************************************" << endl;
}

void show_menu()
{
	system("cls");
	cout << "Walls" << endl;
	cout << "Doors" << endl;
	cout << "Roofs" << endl;
	cout << "Windows" << endl;
	cout << "All your home" << endl;
	cout << "****************" << endl;
	cout << "Press ESC to exit" << endl;
}