#include <iostream>
#include<climits>
using namespace std;

int main()
{


int arr[INT_MAX]={};

int n ,in1,in2;
cin >> n;

for(int i = 0 ; i < n ; i ++)
    {
        cin>> arr[i];
    }

int _min =INT_MAX;

for(int i = 0 ; i < n ; i ++)
{
    if(arr[i]<=_min){
        _min = arr[i];
        in1 = i ;}

}
cout << _min <<" " ;

_min =INT_MAX;

for(int i = 0 ; i < n ; i ++)
{
    if(arr[i]<=_min && arr[i]!=arr[in1]){
        _min = arr[i];
        in2 = i ;}

}
cout << _min <<" " ;

_min =INT_MAX;

for(int i = 0 ; i < n ; i ++)
{
    if(arr[i]<=_min && (arr[i]!=arr[in2] && arr[i]!=arr[in1]))
        _min = arr[i];


}
cout << _min <<" " ;


    return 0;
}
