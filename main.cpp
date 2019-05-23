#include <fstream>
#include <iostream>

using namespace std;

ifstream fin("nr1.txt");
ifstream fon("nr2.txt");

int main()
{
    int x , y , v[10005] , v1[10005] , k , k1;
    int i , j , v_t[10005] , k2;
    k = 0;
    k1 = 0;
    k2 = 0;
    while(fin>>x)
    {
        if(x%2==0)
        {
            v[++k] = x;
        }
    }
    while(fon >> y)
    {
        if(y%2==0)
        {
            v1[++k1] = y;
        }
    }
    i = 1;
    j = 1;
    while(i<=k&&j<=k1)
    {
        if(v[i]>v1[j])
        {
            j++;
        }
        else if(v[i]<v1[j])
        {
            i++;
        }
        else if(v[i]==v1[j])
        {
            v_t[++k2] = v[i];
            i++;
            j++;
        }
    }
    while(i<=k)
    {
        v_t[++k2] = v[i];
    }
    while(j<=k1)
    {
        v_t[++k2] = v1[j];
    }
    for(i=1;i<=k2;i++)
        cout << v_t[i] << " ";
    return 0;
}
