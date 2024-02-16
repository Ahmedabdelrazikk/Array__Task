#include <iostream>
#include<climits>
using namespace std;

int main()
{


int arr1[200]={};

int n ;
cin >> n;

for(int i = 0 ; i < n ; i ++)
{
    cin>> arr1[i];
}

 ///////////////////////////////////////

int arr2[200]={};

int q ;
cin >> q;

for(int i = 0 ; i < q ; i ++)
{
    cin>> arr2[i];
}

///////////////////////////////////////

int last_index;

for(int i = 0 ; i < q ; i ++)
{
   last_index=500 ;
   for(int j = 0 ; j < n ; j ++)
   {
       if(arr2[i] == arr1[j])
        last_index=j;
       else if(last_index==500)
        last_index=-1;
   }
    cout << last_index<<" ";
}



    return 0;
}
