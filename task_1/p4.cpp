#include<iostream>
using namespace std;
int main()
{
    int a,i,j,m;
    cout<<"\t\t\t\t input:";
    cin>>a;
    m=a;
    for(i =a;i>0;i--)
    {
        for( j=m;j<=a;j++)
        {
           cout<<j;
        }
        cout<<"\n";
        m--;
    }
    return 0;
}
