#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "x";
        }
        cout << endl;
    }
};

void print2(int n)
{

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
};

void print3(int &n)
{
    cout << "iam running";

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void print5(int &n)
{ int start = 0;
    for (int i = 0; i < n; i++){
        
        for(int j = 0; j<(n-i-1);j++ ){
         
            cout<<" ";
        }
        

        for (int k = 0; k < (2*i+1); k++)
        {
            cout<<"x";
        }

        

        
        cout<<endl;

        
       
    }
}


int main()
{
    int n = 5;

    print5(n);

    return 0;
}
