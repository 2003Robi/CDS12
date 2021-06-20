#include <iostream>

using namespace std;
void frate (int x, int &y)
{
    int p=1;
    y=0;
    while(x!=0 && y!=-1)
    {
        if(x%10<9)
        {
            y=(x%10+1)*p+y;
            p=p*10;
        }
        else
            y=-1;
        x=x/10;
    }
}
int main()
{
    int y;
    frate(1027,y);
    cout<<y;
    return 0;
}
