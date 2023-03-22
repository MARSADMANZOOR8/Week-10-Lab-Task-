#include<iostream>
using namespace std;
main()
{
    int arraylength;
    cout << "enter the length of the array :: " << endl;
    cin >> arraylength;
    int number;
    cout << "enter the number   of the cycle :  " << endl;
    cin >> number;
    int count=0;
    int array[arraylength];
    for(int idx=0 ; idx<arraylength;idx++)
    {
    cout << "enter the number in array " << endl;
    cin >> array[idx];
    }
      for(int idx=0;idx<arraylength;idx++)
     {
        if(array[idx+number]==array[idx])
        {
            count++;
        }
     }
        if(count>=2)
       {
        cout << "true" << endl;
       }
       else
       {
        cout << "false"<< endl;
       }

}