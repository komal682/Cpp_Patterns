#include<iostream>
using namespace std;
int operation (int,int,int);
int main()
{
    int x,y,ans,i;
    char q='y';
    cout<<"#######CALCULATOR#######\n";
    while(q=='y'||q=='Y')
    {
    cout<<"ENTER ANY NO. TO DO ANY OPERATION\n 1.ADDITION \n 2.SUBTRACTION \n 3. MULTIPLICATION \n 4.DIVISION \n";
    cin>>i;
    if(i<=4)
        cout<<"enter two operands to do ";
    else
    {
        cout<<"YOUR CHOICE IS WRONG";
        cout<<"\nPRESS ANY KEY TO EXIT";
        exit(0);
    }
    if(i==1)
        cout<<"addition:\n";
    else if (i==2)
    {
        cout<<"subtraction:\n";
    }
    else if(i==3)
    {
        cout<<"multiplication:\n";
    }
    else if (i==4)
    {
        cout<<"division:\n";
    }
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    ans=operation(i,x,y);
    cout<<"ans="<<ans;
    cout<<"\n want to calculate an another operation(y/n):";
    cin>>q;
    if(q=='n')
        exit(0);
    }
    return 0;

}
int operation (int i,int x ,int y )
{

    int a;
    switch(i)
    {
    case 1 :
        {
            a=x+y;
            break;
        }
    case 2:
        {
            if(x>y)
                a=x-y;
            else
                a=y-x;
            break;
        }
    case 3:
        {
         a=x*y;
         break;
        }
    case 4:
        {
            if(x>y)
                a=x/y;
            else
                a=y/x;
            break;
        }

    }
    return a;
}


