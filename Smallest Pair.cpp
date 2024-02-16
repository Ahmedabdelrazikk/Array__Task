#include <iostream>
#include<climits>
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

int _min = INT_MAX;

for(int i = 0 ; i < n ; i ++)
{

   for(int j = 0 ; j < n ; j ++)
   {
        if( i<j && (arr[i] + arr[j] + j - i)<_min )

            _min = (arr[i] + arr[j] + j - i);

   }

}


cout << _min;

    return 0;
}
