#include<iostream>
using namespace std;
main()
{
    int number;
    cout << "enter the number of the weeks he want to make calculation " << endl;
    cin >> number;
    int count=0;
    int rundistance[number];
    for(int idx=0;idx < number;idx++)
    {
        cout << "enter the distance : " << endl;
        cin >> rundistance[idx];
    }
     for(int idx=0;idx < number-1 ;idx++)
    {
        
        if(rundistance[idx+1] > rundistance[idx])
        {
            count++;
        }
    }
    cout << "the number of the progress days " << count ;
}