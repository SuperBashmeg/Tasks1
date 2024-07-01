#include "struct.h"

void display_points(point* pt1, point* pt2)
{
	char ul = 187, lr = 188, h = 205, v = 186;
	int pt1_x = *pt1->get_pos_x();
	int pt1_y = *pt1->get_pos_y();
	int pt2_x = *pt2->get_pos_x();
	int pt2_y = *pt2->get_pos_y();
	int max_x = max(pt1_x, pt2_x);
	int max_y = max(pt1_y, pt2_y);
	cout << pt1_x << " " << pt1_y << endl;
	cout << pt2_x << " " << pt2_y << endl;
	cout << max_x << " " << max_y << endl;
	for (size_t i = 0; i < max_x+1; i++)
	{
		if (i == 0)
			cout << h;
		else if (i == max_x)
			cout << ul;
		else
			cout << h;
	}
	cout << endl;
	for (size_t i = 0; i < max_y; i++)
	{
		for (size_t j = 0; j < max_x; j++)
		{
			if (j == pt1_x-1 && i == pt1_y-1)
				cout << "1";
			else if (j == pt2_x-1 && i == pt2_y-1)
				cout << "2";
			else
				cout << " ";
		}
		cout << v;
		cout << endl;
	}
	for (size_t i = 0; i < max_x+1; i++)
	{
		if (i == 0)
			cout << h;
		else if (i == max_x)
			cout << lr;
		else
			cout << h;
	}
}

double get_distance(point* pt1, point* pt2)
{
	int x = *pt1->get_pos_x() - *pt2->get_pos_x();
	int y = *pt1->get_pos_y() - *pt2->get_pos_y();
	return sqrt(x * x + y * y);
}

int main()
{
	point* pt1 = new point;
	pt1->move(3, 3);
	point* pt2 = new point;
	pt2->move(15, 2);
	display_points(pt1, pt2);
	cout << endl;
	cout << "Distance between points: " << get_distance(pt1, pt2) << endl;
	
    delete pt1;
	delete pt2;
}