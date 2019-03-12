#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "a" << endl;
	vector<int> a = { 0, 45, 4, 2, 4, 5, 4, 45 };
	double b[] = { 0, 45, 4, 2, 4, 5, 4, 45 };
	double *c = b;
	cout << sizeof(b) << endl;
	system("pause");
	return 0;
}