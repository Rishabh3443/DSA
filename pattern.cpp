#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
   
    for( int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"x";
        }
        cout<<endl;
    }
};

void print2(int n){

   for( int i =1; i<n; i++){
        for(int j=1; j<i; j++){
            cout<<j;
        }
        cout<<endl;
    }
};

void print3(int n){

   for(int i =n; i<n; i--){
    for(int j = i; j<n; j++){
        cout<<j;
    }
    cout<<endl;
   }
}

void print4(int n){

}

int main()
{
    int n;
    cin >> n; 
    print3(n);

    return 0;
}
