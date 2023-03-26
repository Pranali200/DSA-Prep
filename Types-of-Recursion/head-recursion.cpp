//space complexity=o(n)
#include <iostream>

using namespace std;
void fun(int n){
    if(n>0){
        
        fun(n-1);
        cout<<n<<"\n";
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
/* o/p=Enter non-negative number
       5
       1
       2
       3
       4
       5