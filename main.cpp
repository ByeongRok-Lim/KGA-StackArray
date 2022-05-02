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
    //���� ������ ������ִ� ����
    cout << "is stack empty? " << st.empty() << endl;
    cout << st.pop() << endl;
    cout << st.peek() << endl;

    //for ������ ���� ������ 1���� ���� ������ ����
    for (int i = 0; i < stack_size - 1; i++)
        st.push(i + 1);

    cout << endl;
    cout << "after for loop" << endl;
    st.push(15);
    //������ ���� ä���� �ִ� ����
    st.push(120);
    //���ÿ��� �� ���� �����, 1�� ä�� �� �ִ� ����
    st.pop();

    st.push(120);

    cout << endl;
    //������ ������� while���� ����
    while (!st.empty())
        cout << st.pop() << endl;

}