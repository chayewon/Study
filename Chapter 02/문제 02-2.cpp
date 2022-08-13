#include <iostream>
using namespace std;
int main(void)
{
	const int num = 12;
	const int* ptr = &num;
	const int* (&pointer) = ptr;
	cout << *ptr << endl << *pointer << endl;
	return 0;
}
