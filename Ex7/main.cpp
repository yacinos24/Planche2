#include <iostream>

using namespace std;
long u(int n){
    if (n==0)
        return 3;
    else
        return 3*u(n-1)+4;
}
int main()
{
    int n;
    cout<<"Donner un entier n:";
    cin>>n;
    cout<<"U("<<n<<")="<<u(n);
    return 0;
}
