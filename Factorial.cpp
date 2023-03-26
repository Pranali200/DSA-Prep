#include <stdio.h>
#include <iostream>
 
using namespace std;
int fact(int n);
int main()
{
    int n,res;
    cout<<"Enter your Number: \n";
    cin>>n;
    res=fact(n);
    cout<<res;

    return 0;
}
//using Recursion
//time and space complexity=o(n)
int fact(int n){
    while(n>0){
    return n*fact(n-1);
}
  return 1;
}

//using iteration
//time complexity=o(n) and space complexity=o(1)
int fact(int n){
int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;

}