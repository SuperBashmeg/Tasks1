#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;


struct point
{
private:
	int* pos_x = nullptr;
	int* pos_y = nullptr;

    void show_create_log()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 10);
        cout << "Call Constructor point()" << endl;
        SetConsoleTextAttribute(hConsole, 7);
    }

    void show_destroy_log()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 12);
        cout << "Call Destructor ~point()" << endl;
        SetConsoleTextAttribute(hConsole, 7);
    }
public:
	point() //default 
    {
        show_create_log();
    }

    //getters
    int* get_pos_x() {
		if (this->pos_x != nullptr)
			return this->pos_x;
		else
			return new int{ 0 };
    }
    int* get_pos_y() {
		if (this->pos_y != nullptr)
			return this->pos_y;
		else
			return new int{ 0 };
    }


    //setters
	void set_pos_x(int* pos_x) {
		if (pos_x != nullptr)
		    this->pos_x = pos_x;
	}
    void set_pos_y(int* pos_y) {
		if (pos_y != nullptr)
			this->pos_y = pos_y;
    }

	void move(int x, int y) {
		if (pos_x == nullptr) pos_x = new int{ 0 };
		if (pos_y == nullptr) pos_y = new int{ 0 };
		*pos_x += x;
		*pos_y += y;
	}

    void about()
    {
		cout << "Position X: " << *this->get_pos_x() << " inches" << endl;
		cout << "Position Y: " << *this->get_pos_y() << " inches" << endl;
    }

    ~point()
    {
        show_destroy_log();
		if (pos_x != nullptr) delete pos_x;
		if (pos_y != nullptr) delete pos_y;
    }
};