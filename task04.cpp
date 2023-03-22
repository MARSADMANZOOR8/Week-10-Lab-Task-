#include<iostream>
using namespace std;
bool checkcondition(int pre,int curr,int next);
main()
{
    int finalarray[20];
    
    
    int number;
    cout << "enter the number of the you want to make calculation " << endl;
    cin >> number;
    int count=0;
    int greatest[number];
    int rundistance[number];
    for(int idx=0;idx < number;idx++)
    {
        cout << "enter the distance : " << endl;
        cin >> rundistance[idx];
    }
     for(int idx=1;idx < number-1 ;idx++)
    {
        bool flag;
            flag = checkcondition( rundistance[idx-1], rundistance[idx], rundistance[idx+1]);
            if(flag==true)          
        {
            finalarray[count]=rundistance[idx];
            count++;
        }
    }
    if(count>0)
    {
        for(int i=0;i < count ;i++)
        {
        cout << "greatest  " << finalarray[i];
        }
   
    }
    else
    {
        cout << "not found " << endl;
    }
}  
bool checkcondition(int pre,int curr,int next)
{
    bool flag=false;
    if(curr>pre && curr>next)
    {
        flag=true;
    }
    return flag;
}