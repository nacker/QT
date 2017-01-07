#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class man
{
public: // 共有的
    char name[100];
    int age;
    int sex;

//private: // 私有的
//    int age;
//    int sex;
};

void myswap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

template <class T>
T myadd(T a, T b){
    return a + b;
}

//template <class T>
//T myadd(T a = 0){
//    return a;
//}

namespace test1 {
void func(int i){
    cout << "test1" << endl;
}
}

namespace test2 {
void func(int i){
    cout << "test2" << endl;
}
}

int main()
{
//    cout << "Hello World!" << endl;

//    int i = 0;
//    cin >> i;
//    cout << "i = " << i << endl;

//    man m;
//    strcpy(m.name,"tom");
//    m.age = 20;
//    m.sex = 1;
//    cout << m.name << m.age << m.sex << endl;


//    int *p = new int(10);
//    cout << *p << endl;
//    delete p;


//    int *p = new int[10];
//    for (int i = 0; i < 10; i++){
//        p[i] = i;
//        cout << p[i] << endl;
//    }
//    delete p;

//    int a = 5;
//    int b = 10;
//    myswap(a,b);
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;

//    char a = 12;
//    char b = 30;
//    cout << myadd(a,b) << endl;

    test1 :: func(10);

    return 0;
}
