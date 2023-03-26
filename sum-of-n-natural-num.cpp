#include <stdio.h>
#include <iostream>
 
using namespace std;
int sum(int n);
int main()
{
    int n,res;
    cout<<"Enter your Number: \n";
    cin>>n;
    res=sum(n);
    cout<<res;

    return 0;
}
//time Complexity=o(1)
 //sum of n natural numbers using formula: n*(n+1)/2
int sum(int n){
    return n*(n+1)/2;
}

//time Complexity=o(n)
 //sum of n natural numbers using iteration
int sum(int n){
    int addition=0;
    for(int i=1;i<=n;i++){
        addition=addition+i;
    }
    return addition;
}
//using recursion
//time Complexity=o(n), space complexity is more
int sum(int n){
    while(n>0){
    return sum(n-1)+n;
}
  return 0;
}

