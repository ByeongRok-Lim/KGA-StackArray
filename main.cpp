#include <iostream>
#define stack_size 100
using namespace std;

struct stack {
    int top = -1;
    int arr[stack_size];
    void push(int data) {
        if (top == stack_size - 1) {
            printf("stack is full\n");
            return;
        }
        arr[++top] = data;
    }
    int pop() {
        if (empty()) {
            printf("stack is empty\n");
            return -1;
        }
        return arr[top--];
    }
    int peek() {
        if (empty()) {
            printf("stack is empty\n");
            return -1;
        }
        return arr[top];
    }
    bool empty() {
        return top <= -1;
    }
};
int main() {
    stack st;
    //현재 스택은 비워져있는 상태
    cout << "is stack empty? " << st.empty() << endl;
    cout << st.pop() << endl;
    cout << st.peek() << endl;

    //for 루프가 돌면 스택은 1개만 저장 가능한 상태
    for (int i = 0; i < stack_size - 1; i++)
        st.push(i + 1);

    cout << endl;
    cout << "after for loop" << endl;
    st.push(15);
    //스택은 전부 채워져 있는 상태
    st.push(120);
    //스택에서 한 개가 비워짐, 1개 채울 수 있는 상태
    st.pop();

    st.push(120);

    cout << endl;
    //스택이 비워지면 while루프 종료
    while (!st.empty())
        cout << st.pop() << endl;

}