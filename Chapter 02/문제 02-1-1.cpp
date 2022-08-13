#include <iostream>

using namespace std;

void increase(int& num1)
{
    num1 += 1;
}

void change(int& num2)
{
    num2 *= -1;
}

int main(void)
{
    int num = 1;
    increase(num);

    cout << num << endl;
    change(num);
    cout << num << endl;

    return 0;
}