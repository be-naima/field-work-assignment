#include <iostream>
using namespace std;

class Print
{
public:
    void print()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << i << endl;
        }
    }
};

int main()
{
    Print p;
    p.print();
    return 0;
}