#include<iostream>
using namespace std;
int main()
{
    int i,j ;
    
    for(i=1;i<=5;i++)
    {
        for (j=4;j>=1;j--)
        {
            cout<<" ";    
        }

        for(j=i;j<=5;j++)
        {
             cout<<"*";
        }
        cout<<endl;
       
    }

}