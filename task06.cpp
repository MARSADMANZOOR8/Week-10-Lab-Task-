#include<iostream>
using namespace std;
main()
{
    int number;
    cout <<"enter the three elements range  of the each quanttiy :: " << endl;
    cin >> number;
    int box=0;
    int array[number];
    for(int idx=0 ; idx<number ;idx++)
    {
     cout << "enter measurment of the each side " << endl;
     cin >>array[idx];
    }
      for(int idx=0 ; idx<number;idx=idx+3)
    {
        box= box + array[idx] * array[idx+1] * array[idx+2];
            
    }
    cout << box;
}