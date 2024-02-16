#include <iostream>

using namespace std;

int main()
{


int arr[200]={};
int arr2[10]={};

int n ;
cin >> n;

for(int i = 0 ; i < n ; i ++)
    {
        cin>> arr[i];
    }


for(int i = 0 ; i < n ; i ++)
{

    while(arr[i])
    {
        arr2[arr[i]%10]++;
        arr[i]/=10;

    }


}

for(int i = 0 ; i < 10 ; i++)
{
    cout << i <<" --> "<< arr2[i]<<endl;
}

    return 0;
}
