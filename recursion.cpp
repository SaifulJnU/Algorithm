///#include<bits/stdc++.h>
using namespace std;
void fun(int x)
{
    if(x==0) return; ///base case
    x--;
    cout<<x<<endl;
    fun(x);          ///fun() calling itself which is called recursive function
    cout<<x<<endl;   ///this cout will work like backtracking
    // cout<<x<<endl;
}
int main()
{
    fun(3); ///function calling
    return 0;
}
