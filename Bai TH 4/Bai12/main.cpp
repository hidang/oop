#include <iostream>
using namespace std;
class xuat
{
public:
    xuat()
    {
        cout << "Entering the Hello program saying..." << endl;
    }
    ~xuat()
    {
        cout << "Then exiting...";
    }
} xuat1; // <=> xuat xuat1; in main

int main()
{
    cout << "Hello, world.\n";
}
