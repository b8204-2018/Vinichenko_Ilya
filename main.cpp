#include <iostream>
#include "func.h"
using namespace std;

int main()
{
    float start,pull,x1,y1,c=0;
    int result;
    start=radius(100,100);
    cin>>x1>>y1;
    pull=radius(x1,y1);
    if (pull<=start)
    {
        if (pull==0)
        {
            result=5;
            cout<<"Your score: "<<result;
        }

        else
        {
             c=start/5;
            cout<<"Your score: "<<(int)(5-pull/c);
        }
    }
    else
    {
        cout<<"Outside of circle\n";
    }
}