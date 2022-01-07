 #include<iostream>
 #include<vector>
#include<climits>

using namespace std;


 int minFlips(int a, int b, int c) {
        int count=0;//for storing result
        for(int i=0;i<32;i++)
        {
        bool x=false,y=false,z=false;//x ,y and z are variables for storing status of ith bit of a,b and //c respectively
        if(a & (1<<i))
            x=true;
        if(b & (1<<i))
            y=true;
        if(c & (1<<i))
            z=true;
        if(z==false)//if ith bit of z is 0
          { 
            if(x==true & y==true)
                count+=2;
        else if(x==true || y==true)
            count+=1;
          }
        else if(z==true)//if ith bit of z is 1
        {
            if(x==false & y==false)
                count+=1;
        }
        }
        return count;
    }

int main()
    {
       int a,b,c;
       cin>>a>>b>>c;
       cout<<minFlips(a,b,c);
       return 0;
    }