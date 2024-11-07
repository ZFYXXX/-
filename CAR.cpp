#include <iostream>
#include <cmath>
using namespace std;

class Vector
{
private:
	double x;
	double y;
public:
	Vector(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
	}
	Vector add(const Vector& v)const
	{
		return Vector(this->x + v.x, this->y + v.y);
	}
	void print()const
	{
		cout <<"(" << x << ", " << y << ")" << endl;
	}
	void dir()const
	{
		double length = sqrt(x * x + y * y);
		cout  << length << endl;

	}
};

int main()
{
	Vector v1(1.0, 2.0);
	Vector v2(3.0, 4.0);

	cout<<"����1��"<<endl;
	v1.print();
	cout << "����2��" << endl;
	v2.print();

	Vector v3 = v1.add(v2);
	cout << "��Ӻ�" << endl;
	v3.print();

	cout << "����3ģ����" << endl;
	v3.dir();

	return 0;
}