    #include <iostream>
    #include<string.h>
    using namespace std;
    int main() 
    {
       char str[100], temp;
       int i, j = 0;
       cout<<"\nEnter the string";
       cin>>str;
       i = 0;
       j = strlen(str) - 1;
       while (i < j) {
          temp = str[i];
          str[i] = str[j];
          str[j] = temp;
          i++;
          j--;
       }
       cout<<"\nReverse string is "<<str;
       return (0);
    }
