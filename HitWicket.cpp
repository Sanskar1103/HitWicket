#include<iostream>

using namespace std;

int main()
{
     int l, r, f,b;

     cin>>l>>r>>f>>b;

     for(int i=0;i<5;i++)
     {
        l++;
        r++;

        if(b<l-r+b)
        {
            r+=b;
        }

        else if(l>b*f)
        {
            l=l-f;
        }
     }


     return l;
    
}