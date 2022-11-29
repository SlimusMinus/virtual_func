#include <iomanip>
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

class Dwelling
{
private:
	int time;
	int cash;
	
public:
	virtual void Build() = 0;
	virtual void Print(int time, int cash);
	
};

class Wall : public Dwelling
{
protected:
	int wall;
	string color;
	int a, b;
	int all_time, all_price;
	
public:

	Wall(int wall, string color);
	int Get_w() { return wall; }
	string Det_c() { return color; }
	void Build() override;
	
};

class Door : public Dwelling
{
protected:
	int door;
	string material;
	
public:

	Door(int door, string material);
	int Get_d() { return door; }
	string Get_m() { return material; }
	void Build() override;
};

class Window : public Dwelling
{
protected:
	int window;
	string type;
	
public:

	Window(int window, string type);
	int Get_win() { return window; }
	string Get_t() { return type; }
	void Build() override;
};

class Roof : public Dwelling
{
protected:
	int roof;
	string materials;

public:
	Roof(int roof, string materials);
	int Get_r() { return roof; }
	string Get_t() { return materials; }
	void Build() override;
};

void Print_t_c(int all_time, int all_price);

void show_menu();
