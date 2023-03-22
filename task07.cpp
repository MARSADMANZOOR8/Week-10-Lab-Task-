#include<iostream>
using namespace std;
main()
{
    int number[10];
    int temp;
    for(int idx=0;idx<10;idx++)
    {
        cout << "enter the number " <<idx+1 << "position " << endl;
        cin >> number[idx];
    }
     for(int idx=0;idx<10;idx++)
    {
        for(int j=idx+1;j<10;j++)
        {
          if(number[idx]>number[j])
          {
            temp=number[idx];
            number[idx]=number[j];
            number[j]=temp;
          }
        }
   }
     for(int idx=0;idx<10;idx++)
    {
        cout << number[idx] << endl ;

    }
}