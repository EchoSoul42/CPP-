#include<iostream>
using namespace std;
int main()
{
    int i,j,k,a=65;
    char A;
    
    for(i=1;i<=5;i++)
    {
        for (j=4;j>=i;j--)
        {
            cout<<" ";    
        }
        for (j=1;j<=i;j++)
        {
            
            cout<<char(a+j-1);    
        }
        for (j=1;j<=i-1;j++)
        {
           
           cout<<char(a+i+j-1);
        }
        cout<<endl;
       
    }

}