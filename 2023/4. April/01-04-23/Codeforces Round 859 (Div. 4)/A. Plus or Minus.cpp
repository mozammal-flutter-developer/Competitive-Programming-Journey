#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void solution()
{
    int a,b,c;

    cin >> a >> b >> c;


    if(a+b == c)
     cout<<"+"<<endl;
    else
      cout<<"-"<<endl;
    
}


int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        solution();
    }
}