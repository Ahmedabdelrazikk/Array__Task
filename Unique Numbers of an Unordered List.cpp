#include <iostream>

using namespace std;

int main()
{


int arr[900]={};


int n ;
cin >> n;

for(int i = 0 ; i < n ; i ++)
    {
        cin>> arr[i];
    }

bool check ;

for(int i = 0 ; i < n ; i ++)
{
    check = true;
    for(int j = 0 ; j<i ; j++)
    {
        if(arr[i]==arr[j])
          check = false ;
    }

    if(check)
       cout << arr[i] << " ";

}



    return 0;
}
