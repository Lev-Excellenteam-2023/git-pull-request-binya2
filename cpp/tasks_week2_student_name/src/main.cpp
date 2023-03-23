#include "Vector.h"
#include "Stack.h"

int main()
{
    std::cout<< "vector:\n";
    Vector v;
    if (v.empty())
        for (int i = 0; i <= 10; i++)
            v.push_back(i);

    v.print();
    if (!v.empty())
        for (int i = 0; i <= 5; i++)
            v.pop_back();
    v.print();
    v.clear();
    if (v.empty())
        for (int i = 0; i <= 5; i++)
            v.push_back(i);
    v.print();
    v.resize(10);
    v.print();
    for (int i = 1; i < 10; ++i)
        v.insert(i,i*10);
    v.print();
    for (int i = 1; i < 10; ++i)
        v.erase(1);
    v.print();
    Vector v1;
    if (v1.empty())
        for (int i = 0; i < 10; i++)
            v1.push_back(i);
    v1.print();
    
    cout << "v1: "; v1.print();
    cout << "v: "; v.print();
    int check = v < v1;
    cout << "v<v1: "<< check << endl;
    check = v > v1;
    cout << "v>v1: "<< check << endl;
    check = v == v1;
    cout << "v==v1: "<< check << endl;
    v1.clear();
    for (int i = 0; i < 5; ++i) {
        v1.push_back(i);
    }
    v.clear();
    for (int i = 0; i < 5; ++i) {
        v.push_back(i);
    }
    cout << "v1: "; v1.print();
    cout << "v: "; v.print();
    check = v < v1;
    cout << "v<v1: " << check << endl;
    check = v > v1;
    cout << "v>v1: " << check << endl;
    check = v == v1;
    cout << "v==v1: " << check << endl;
    v1.clear();
    v.clear();
    for (int i = 0; i < 5; ++i) {
        v1.push_back(i);
    }
    for (int i = 0; i <= 10; ++i) {
        v.push_back(i);
    }
    cout << "v1: "; v1.print();
    cout << "v: "; v.print();
    check = v < v1;
    cout << "v<v1: " << check << endl;
    check = v > v1;
    cout << "v>v1: " << check << endl;
    check = v == v1;
    cout << "v==v1: " << check << endl;
    v1.clear();
    v.clear();
    for (int i = 10; i < 20; ++i) {
        v1.push_back(i);
    }
    for (int i = 0; i <= 10; ++i) {
        v.push_back(i);
    }
    cout << "v1: "; v1.print();
    cout << "v: "; v.print();
    check = v < v1;
    cout << "v<v1: " << check << endl;
    check = v > v1;
    cout << "v>v1: " << check << endl;
    check = v == v1;
    cout << "v==v1: " << check << endl;
    v1.clear();
    v.clear();
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
    }
    for (int i = 0; i <= 10; ++i) {
        v.push_back(i);
    }
    v1.push_back(20);
    cout << "v1: "; v1.print();
    cout << "v: "; v.print();
    check = v < v1;
    cout << "v<v1: " << check << endl;
    check = v > v1;
    cout << "v>v1: " << check << endl;
    check = v == v1;
    cout << "v==v1: " << check << endl;
    v1.clear();
    v.clear();
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
    }
    for (int i = 10; i < 15; ++i) {
        v.push_back(i);
    }
    cout << "v1: "; v1.print();
    cout << "v: "; v.print();
    check = v < v1;
    cout << "v<v1: " << check << endl;
    check = v > v1;
    cout << "v>v1: " << check << endl;
    check = v == v1;
    cout << "v==v1: " << check << endl;
    v1.clear();
    v.clear();
/////////////////////////////////////////
    std::cout<< "stakc:\n";
    Stack s;
    if (s.isEmpty())
        for (int i = 10; i > 0; --i)
            s.push(i);
    s.print();
    for (int i = 0; i < 5; ++i)
        s.pop();
    s.print();
    for (int i = 0; i < 5; ++i)
        s.push(5-i);

    s.print();
    s*=10;
    s.print();
    s/=10;
    s.print();
    s+=10;
    s.print();
    s-=10;
    s.print();
    cout<<"==================\n";
    Stack s1;
    for (int i = 10; i <= 20; ++i)
        s1.push(i);
    cout<<"=======s1=========\n";
    s1.print();
    Stack s2;
    s2 = s+s1;
    cout<<"=======s2=s+s1====\n";
    s2.print();
    s+=s1;
    cout<<"======s+=s1=======\n";
    s.print();
    cout << "s==s2: "<< (s==s2) << endl;
    cout << "s1==s2: "<< (s1==s2) << endl;
    cout << "s1==s: "<< (s1==s2) << endl;
    cout << "s1>s: "<< (s1>s2) << endl;
    cout << "s1<s: "<< (s1<s2) << endl;
    return 0;
}