// Sum of ages across 3 objects

#include <iostream>

class employee
{
	char name[30];
	int age;
	static int s1, x;
public:
	void getdata();
	void putdata();
	void sumage();
};

void employee::getdata()
{
	std::cout << " Enter Name :";
	std::cin >> name;

	std::cout << " Enter age :";
	std::cin >> age;
}

void employee::putdata()
{
	std::cout << " Name : " << name << std::endl;
	std::cout << " Age :" << age << std::endl;
}
void employee::sumage()
{
	s1 = s1 + age;
	x++;
	if (x == 3)
		std::cout <<" Sum of ages across the data :"<< s1 << std::endl;
}

const int m = 3;
int employee::s1;
int employee::x;

int main()
{
	employee manager[m];
	for (int i = 0; i < m; i++)
	{
		std::cout << "\n Details of manager " << i + 1 << std::endl;
		manager[i].getdata();
	}

	std::cout << "\n";

	for (int i = 0; i < m; i++)
	{
		std::cout << "\nManager" << i + 1 << "\n";
		manager[i].putdata();
	}
	
	for (int i = 0; i < m; i++)
	{
		manager[i].sumage();
	}
	std::cin.get();
