/* if recursion function calling itself more than one time then it is called as tree recusion.*/
#include <iostream>

using namespace std;
void fun(int n){
    if(n>0){
        cout<<n<<"\n";
        fun(n-1);
        fun(n-1);
    }
    return;
}

int main()
{
    int n;
    cout<<"Enter non-negative number \n";
    cin>>n;
    fun(n);
    return 0;
}

/*
Output:
Enter non-negative number 
5
5432112113211211432112113211211 
* it is just for practice purpose no need to more focus.
*/