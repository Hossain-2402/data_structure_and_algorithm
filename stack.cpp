#include<bits/stdc++.h>
using namespace std;

#define MAX 1000


struct Stack{
	int top;
	int datas[MAX];
	public:
		Stack(){
			top = -1;
		}
		int pop(){
			if(top < 0){
				cout << "Stack is empty";
			}
			else{
				int item = datas[top];
				top --;
				return item;	
			}
		}
		int push(int data){
			top++;
			datas[top] = data;
		}
		int showStack(){
			for (int i=0;i<=top;i++){
				cout << datas[i] << " " ;
			}
		}
};

int main(){
	class Stack s;
	s.push(1);
	s.push(2);
	s.pop();
	s.push(4);
	s.push(5);
	s.showStack();

}