#include <iostream>

using namespace std;

int main()
{


int arr[200]={};

int n ;
cin >> n;

for(int i = 0 ; i < n ; i ++)
    {
        cin>> arr[i];
    }

bool check = true;

for(int i = 0 ; i < n ; i ++)
{

    if(arr[i]!=arr[n-1-i])
        check=false;

}

if(check)
   cout << "Yes" ;
else
   cout << "No" ;


    return 0;
}
