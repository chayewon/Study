#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str1[50] = "Hello World!";
	char str2[50] = "Hi";
	char str3[50];


	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;

	strcat(str1, str2);
	strcpy(str1, str3);

	if (strcmp(str3, str2) == 0)
		cout << "same" << endl;
	else
		cout << "different" << endl;

	return 0;
}