// This code submitted By TheRudraBro !!

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fast()
 
 
{
  cin.tie(0);
  cout.sync_with_stdio(0);
 
}
 
int main()
 
{
 
   fast();
   char x;
   cin>>x;
   if(x>='0'&&x<='9')cout<<"IS DIGIT";
   else if (x>='A'&&x<='Z')cout<<"ALPHA"<<endl<<"IS CAPITAL";
   else cout<<"ALPHA"<<endl<<"IS SMALL";
 
 
    return 0;
}