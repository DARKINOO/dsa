#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a; // yaha pr pointer declare kra h  
    int **pptr = &ptr;
    cout << sizeof(ptr) << "\n"; //size
    cout << &a << "=" << ptr << "\n";
    cout << &ptr << "=" << pptr << "\n";
    cout << *(&a) <<"\n"; // dereferencing operator

    int *ptrr = NULL; //null pointers
    cout << ptrr << "\n";
    cout << *ptrr << "\n"; //segmentation fault i.e null pointer deference ne hoga
    
    return 0;
}