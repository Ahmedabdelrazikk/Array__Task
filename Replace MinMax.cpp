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


int _max = arr[0], _min = arr[0], max_in, min_in;


for(int i =0 ; i < n ; i ++)

    {
        if(arr[i]<=_min)
        {
            _min = arr[i];
//            min_in = i;

        }
        else if(arr[i]>=_max)
        {
             _max = arr[i];
//             max_in = i;

        }


    }



for(int i = 0 ; i < n ; i ++)
    {
        if(arr[i]==_min)
           arr[i]=_max;

        else if(arr[i]==_max)
           arr[i]=_min;

    }


    for(int i = 0 ; i < n ; i ++)
    {
        cout<< arr[i] <<" ";
    }

    return 0;
}
