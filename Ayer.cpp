#include <iostream>
using namespace std;
struct A {
int x;
char a;
int y;
char b;
};
struct B {
int x;
int y;
char a;
char b;
};
int main()
{
cout << "Tama�o de int: "
<< sizeof(int) << endl;
cout << "Tama�o de char: "
<< sizeof(char) << endl;
cout << "Tama�o de estructura A: "
<< sizeof(A) << endl;
cout << "Tama�o de estructura B: "
<< sizeof(B) << endl;
cin.get();
return 0;
}
