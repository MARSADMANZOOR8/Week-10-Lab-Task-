#include<iostream>
using namespace std;
main()
{
    int number;
    cout <<"enter the number of string you want to take :: " << endl;
    cin >> number;
    string word[number];
    char character;
    cout << "enter the character you want to check out " << endl;
    cin >> character;
    int count=0;
     for(int idx=0;idx<number ; idx++)
    {
        cout <<" enter the string at " << idx << "position " << endl;
        cin >> word[idx];
    }
    for(int idx=0;idx<number ; idx++)
    {
        string temporary;
        temporary=word[idx];
        int count1=temporary.length();
        
            for(int i=0;i<count1;i++)
            {
                if(character==temporary[i])
                {
                    count++;
                }
            }
        
        
    }
    cout << character << "is repeated " << count << "times" ;
} 
