#include "struct.h"

int main()
{
    my_Rectangle* rectangle = new my_Rectangle;
	int* height = new int(5);
	int* width = new int(10);
	rectangle->set_height(height);
	rectangle->set_width(width);
	rectangle->display();
	rectangle->move(5, 5);
	rectangle->moveWithDisplay(1, 1);
	rectangle->moveWithDisplay(1, -1);
	
	cout << endl;
    delete rectangle;
}