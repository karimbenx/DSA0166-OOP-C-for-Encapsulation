#include <iostream>
string same(string a,string b)
{
if (a.equals(b))
{
return "It is same";
}
}
int main()
{
string a,b;
cout<<"Enter the string a: ";
cin>>a;
cout<<"Enter the string b: ";
cin>>b;
cout<<same(a,b);
}
