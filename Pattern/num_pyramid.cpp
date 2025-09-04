#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    
    for(i=1;i<=5;i++)
    {
        for (j=4;j>=i;j--)
        {
            cout<<" ";    
        }
        for (j=1;j<=i;j++)
        {
            cout<<i+j-1;    
        }
        for (j=1;j<=i-1;j++)
        {
            k=i*2-1;
            cout<<k-j;
            
            
        }
        cout<<endl;
       
    }

}