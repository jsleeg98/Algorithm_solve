#include <iostream>

using namespace std;

void print_1_to_n(int n)
{
    if (n != 1)
    {
        print_1_to_n(n - 1);
    }

    cout << n << '\n';
}

int main()
{
    int a;
    scanf_s("%d", &a);
    print_1_to_n(a);
}