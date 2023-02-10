#include<iostream>
using namespace std;
int main()
{
    int a[5] = {5,4,-1,7,8};
    for(int i =0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            for(int k =i;k<=j;k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}