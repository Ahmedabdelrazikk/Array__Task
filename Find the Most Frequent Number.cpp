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




int j =0 ,cnt=0 , mmax=0 , num ;

for(int i = 0 ; i < n ; i ++)
{
    if(arr[j]==arr[i])
       cnt++;


    if(i==n-1)
    {
        if(cnt>mmax)
        {
           mmax=cnt;
           num = arr[j];
        }
        if(j==(n-1) && i == (n-1))
        {
            break;
        }
        j++;
        i=0;
        cnt=0;
    }

}

cout << num << " is repeated "<< mmax << " Times";



    return 0;
}
