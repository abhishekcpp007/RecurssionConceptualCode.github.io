#include<iostream>
using namespace std;
int count(int n,int val)
{
    int ans = 0;
    if (n == 1 && val >=0) //base case
        return 1;
 
    // iterate the loop till equal the val
    for (int i = 0;i <= val; i++){
        ans += count(n-1, val-i);
    }
     
    // return the total no possible solution
    return ans;
}
int main()
{
    int n,val;
    cout<<"Enter n and val : ";
    cin>>n;
    cin>>val;
    cout<<count(n,val);
}