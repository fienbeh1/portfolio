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
cout << "Tamaño de int: "
<< sizeof(int) << endl;
cout << "Tamaño de char: "
<< sizeof(char) << endl;
cout << "Tamaño de estructura A: "
<< sizeof(A) << endl;
cout << "Tamaño de estructura B: "
<< sizeof(B) << endl;
cin.get();
return 0;
}
