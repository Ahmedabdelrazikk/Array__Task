#include <iostream>

using namespace std;

int main()
{


int arr[1000]={};

int n ;
cin >> n;

for(int i = 0 ; i < n ; i ++)
    {
        cin>> arr[i];
    }

for(int i = 0 ; i < n ; i ++)
{

    if(arr[i]!=arr[i+1])
    {
        cout << arr[i] << " " ;
    }

}


    return 0;
}
