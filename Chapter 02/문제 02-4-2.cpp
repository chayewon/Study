#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 5; i++)
	{
		cout << "³­¼ö : " << i << rand() % 100 << endl;
	}

	return 0;
}