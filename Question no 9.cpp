#include<iostream>
#include<string.h>
using namespace std;

int main()
{
int k=0;
char str1[200], str[200];
cout<<"Enter the String\n";
cin. getline (str1, 199) ;
for(int j=0;j<200;j++)
{
if(str1[j]=='\0')
{
break;
}
k++;
}
for(int i=0,j=k;i<200;i++,j--)
{
str[i]=str1[j];
cout<<str[i];
if(str1[i]=='\0')
{
break;
}
}
    return 0;
}