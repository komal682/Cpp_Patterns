
#include<iostream>

using namespace std;

int main()
{
    int a,i,j;
    cout<<"\t\t\t\t input:";
    cin >> a;
    for(i=0;i<a;i++)
    {
        for( j=i;j<a;j++)
        {
            cout << " ";
        }
        if(i<3)
        {
            for(int j=0;j<=i;j++)
                cout << "* ";

        }
        else
        {
            cout << "*";
            for(j=0;j<i-1;j++)
                cout << " ";
            cout << "*";
            for(j=0;j<i-1;j++)
                cout << " ";
            cout << "*";
        }
        cout <<"\n";
    }
    return 0;
}
