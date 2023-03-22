#include<iostream>
using namespace std;

void reversewords(string);
main()
{
string reverse;
cout <<"enter the string you want to reverse : " ;
getline(cin,reverse);
int count = 1;
    int length = reverse.length();  
   for(int i = 0;i<length;i++)
   {
        if(reverse[i] == ' ')
            count++;
   }
    string req[count];
    int j = 0;
    int z = 0;
    string temp;
    for(int i = 0;i<length;i++)
   {
        if(reverse[i] != ' ')
        {
            temp[i] = reverse[i];
        }

            
   }
   req[0]  = temp;
   cout << temp[0];
    for(int z = 0;z<count;z++)
    {
        cout << req[z];
    }
}


void reversewords(string reverse)
{
    
}