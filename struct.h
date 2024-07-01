#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;


struct my_Rectangle
{
private:
    int* height = nullptr;
    int* width = nullptr;
	int* pos_x = nullptr;
	int* pos_y = nullptr;

    void show_create_log()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 10);
        cout << "Call Constructor Rectangle()" << endl;
        SetConsoleTextAttribute(hConsole, 7);
    }

    void show_destroy_log()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 12);
        cout << "Call Destructor ~Rectangle()" << endl;
        SetConsoleTextAttribute(hConsole, 7);
    }
public:
	my_Rectangle() //default 
    {
        show_create_log();
    }

    //getters
    int* get_height() {
        if (this->height != nullptr)
            return this->height;
        else
            return new int{ 0 };
    }
    int* get_width() {
		if (this->width != nullptr)
			return this->width;
		else
			return new int{ 0 };
	}
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
    void set_height(int* height) {
        if (height != nullptr)
            this->height = height;
    }
	void set_width(int* width) {
		if (width != nullptr)
		    this->width = width;
	}
	void set_pos_x(int* pos_x) {
		if (pos_x != nullptr)
		    this->pos_x = pos_x;
	}
    void set_pos_y(int* pos_y) {
		if (pos_y != nullptr)
			this->pos_y = pos_y;
    }


	void display() {
		char upper_left = 201;
		char upper_right = 187;
		char lower_left = 200;
		char lower_right = 188;
		char horizontal = 205;
		char vertical = 186;

		if (pos_x == nullptr) pos_x = new int{ 0 };
		if (pos_y == nullptr) pos_y = new int{ 0 };
	
		for (size_t ey = 0; ey < *pos_y; ey++) {
			cout << endl;
		}
        for (size_t i = 0; i < *height; i++)
		{
			for (size_t ex = 0; ex < *pos_x; ex++) {
				cout << ' ';
			}
			for (size_t j = 0; j < *width; j++)
			{
				if (i == 0 && j == 0)
					cout << upper_left;
				else if (i == 0 && j == *width - 1)
					cout << upper_right;
				else if (i == *height - 1 && j == 0)
					cout << lower_left;
				else if (i == *height - 1 && j == *width - 1)
					cout << lower_right;
				else if (i == 0 || i == *height - 1)
					cout << horizontal;
				else if (j == 0 || j == *width - 1)
					cout << vertical;
				else
					cout << " ";
			}
			cout << endl;

        }
	}

	void move(int x, int y) {
		if (pos_x == nullptr) pos_x = new int{ 0 };
		if (pos_y == nullptr) pos_y = new int{ 0 };
		*pos_x += x;
		*pos_y += y;
	}

	void moveWithDisplay(int x, int y) {
		if (pos_x == nullptr) pos_x = new int{ 0 };
		if (pos_y == nullptr) pos_y = new int{ 0 };
		*pos_x += x;
		*pos_y += y;
		for (size_t i = 0; i < *width + *pos_x * 2; i++)
		{
			cout << "_";
		}
		display();
	}

    void about()
    {
        cout << "Height: " << *this->get_height() << " inches" << endl;
		cout << "Width: " << *this->get_width() << " inches" << endl;
		cout << "Position X: " << *this->get_pos_x() << " inches" << endl;
		cout << "Position Y: " << *this->get_pos_y() << " inches" << endl;
    }

    ~my_Rectangle()
    {
        show_destroy_log();
        if (height != nullptr) delete height;
		if (width != nullptr) delete width;
		if (pos_x != nullptr) delete pos_x;
		if (pos_y != nullptr) delete pos_y;
    }
};