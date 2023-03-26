//space complexity=o(1)
#include <iostream>
using namespace std;
void fun(int n){
    while(n>0){
        cout<<n<<"\n";
        n--;
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