#include <iostream>
using namespace std;
class Example{
int x;
public:
void setX(int x){
this->x=x;
int *ptr=&x;
}
void display()
{
cout<<"x="<<x<<endl;
}
};
int main()
{
Example obj;
obj.setX(20);
obj.display();
return 0;
}
