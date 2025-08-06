#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l1,b1,l2,b2,l3,b3;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;
        int total_area = l1 * b1 + l2 * b2 + l3 * b3;

        int side = sqrt(total_area);
        if (side * side != total_area)
        {
            cout<<"NO"<<endl;
            continue;
        }
        
        if(l1==l2 and l2==l3 and l3==side and (b1+b2+b3)==side)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(b1==b2 and b2==b3 and b3==side and (l1+l2+l3)==side)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(l1==l2+l3 and b2==b3 and l1==b1+b2)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(b1==b2+b3 and l2==l3 and b1==l1+l2)
        {
            cout<<"YES"<<endl;
            continue;
        }
        
        cout<<"NO"<<endl;
        
        
    }
}