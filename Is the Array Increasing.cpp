#include <iostream>

using namespace std;

int main()
{


int arr[200]={};

bool check =true;

int n ;
cin >> n;

for(int i = 0 ; i < n ; i ++)
    {
        cin>> arr[i];
    }


for(int i =0 ; i < n-1 ; i ++)
    {
       if(arr[i]>arr[i+1])
            check=false;
    }


if(check)
    cout<<"Yes";
else
    cout<<"No";


    return 0;
}
