#include<iostream>
#include<cstdio>
#include<memory>
#include<stack>
#include<iterator>
#include<vector>
using namespace std;

struct ListNode {
    weak_ptr<ListNode> _pre;
    weak_ptr<ListNode> _next;
};

template<class Type>
class DelArry {
public:
    void operator() (const Type* arry) {
        cout << "delete []" << endl;
        delete[] arry;
    }
};


class test_class
{
friend void freindly_show(test_class& t);
private:
    /* data */
    const int pr_data1;
protected:
    int pr_data2;
public:
    int pu_data;
    test_class();
    test_class(int n1, int n2, int n3);
    ~test_class();
    void showdata();
    test_class operator-() {
        this->pu_data--;
        return *this;
    }
};
test_class::test_class():pr_data1(10), pr_data2(10), pu_data(8) {}
test_class::test_class(int n1, int n2, int n3):pr_data1(n1), pr_data2(n2), pu_data(n3) {}
test_class::~test_class() {}
void test_class::showdata() {
    cout << "pr_data1 = " << pr_data1 << endl;
    cout << "pr_data2 = " << pr_data2 << endl;
    cout << "pu_data = " << pu_data << endl;
}

class test_class_2 : public test_class {
public:
    test_class_2():test_class(2,4,6) {};
    ~test_class_2(){};
};

void freindly_show(test_class& t) {
    cout << "private: " << t.pr_data1 << endl;
}


int main(){
    printf("hello world\n");

    // shared_ptr<int> ptr1(new int(2));
    // cout << ptr1.get() << endl;
    // shared_ptr<int> ptr2(ptr1);
    // cout << ptr2.get() << endl;

    // shared_ptr<ListNode> ptr1(new ListNode[10], DelArry<ListNode>());

    // stack<int> stk;
    // stk.push(1);
    // stk.push(2);
    // stk.push(3);
    // vector<int> vt(3,8);
    // vector<int>::iterator ptr1 = vt.begin();
    // for(ptr1 = vt.begin(); ptr1 != vt.end(); ptr1++) {
    //     cout << *ptr1 << endl;
    // }

    test_class t(10, 0, 0);
    // t.showdata();
    // -t;
    // t.showdata();
    freindly_show(t);
    // test_class_2 t2;
    // t2.showdata();
    
    // system("pause");
    return 0;
}