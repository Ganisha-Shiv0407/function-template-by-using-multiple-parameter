//function template with multiple parameter : -
#include <iostream>
using namespace std;

template <typename T1 , typename T2>
void display(T1 a, T2 b)
{
cout<<"Value 1 : " << a << endl;
cout<<"Value 2 : " << b << endl;
}
int main ()
{
display(10 , 3.14);
display('A', "Hello");
return 0;
}
