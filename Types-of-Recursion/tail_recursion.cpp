//space complexity=o(n)
#include <iostream>

using namespace std;
void fun(int n){
    if(n>0){
        cout<<n<<"\n";
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