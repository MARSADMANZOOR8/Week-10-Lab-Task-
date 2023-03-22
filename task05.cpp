#include<iostream>
using namespace std;
int globally[50];
bool  repeatingcycle(int globally[50],int size);
main()
{
    int number;
    cout <<"enter the number after which cycle  starts :: " << endl;
    int size;
    cout << "enter the size of the repeating cycle " << endl;
    cin >> size;
    int repeatingcycle;
    cout << " enter the cycle number  " << endl;
   bool flag = repeatingcycle(globally[50],size);
   cout << flag;
}
bool repeatingcycle(int globally[50],int size)
{
    bool flag=false;
    for(int idx=0;idx<size;idx++)
    {
        cout << " enter the number want to check out : " << endl;
        cin >> globally[idx]; 
    }
     for(int idx=0;idx<size;idx++)
     {
        if(globally[idx+number]==globally[idx])
        {
            flag=true;
        }
        else
        {
            flag=false;
        }
     }
     return flag;

}
