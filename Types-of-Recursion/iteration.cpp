//using iteration
//time complexity=O(N)
// Factorial of n = 1*2*3*...*n
#include <iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter non-negative number:\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial of "<< n <<" is "<<fact;
}