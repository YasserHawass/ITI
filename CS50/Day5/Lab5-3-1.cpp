#include <iostream>
using namespace std;

class X
{
public:
      static int count;
};
int X::count = 10;

int main ()
{
      int X = 0;
      cout << X::count << endl;
}
