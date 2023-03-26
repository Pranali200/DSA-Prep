//USING RECURSION
//TIME COMPLEXITY=O(N)
// Factorial of n = 1*2*3*...*n
#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int n,res;
    cout<<"Enter non-negative number:\n";
    cin>>n;
    res=fact(n);
    cout<<"Factorial of "<< n <<" is "<<res;;
    return 0;
}
int fact(int n){
    if(n>1){
        return n* fact(n-1);
    }
    else{
        return 1;
    }
}