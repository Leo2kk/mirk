#include <fstream>
#include <iostream>

using namespace std;

ifstream fin("nr1.txt");
ifstream fon("nr2.txt");

int main()
{
    int x , y;
    fon >> y;
    while(fin>>x)
    {
        if(x==y&&x%2==0)
            cout << x << " ";
        else while(x>y&&!fon.eof()){
            fon >> y;
            if(x==y&&x%2==0)
                cout << x << " ";
        }
    }
    return 0;
}
