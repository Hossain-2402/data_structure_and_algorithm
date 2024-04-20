#include<bits/stdc++.h>
using namespace std;

#define MAX 5


struct Queue{

	int head = 0;
	int tail = 0;
	int datas[MAX];

	void dequeue(){
		cout << datas[head] << endl;
		head = (head+1) % MAX;
	}
	void enqueue(int data){
		if((tail+1) % MAX == head){
			cout << " Queue is full" << endl;
			return;
		}
		datas[tail] = data;
		tail = (tail+1) % MAX;
	}

};

int main(){

	class Queue q;
	q.enqueue(1);
	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(16);
	q.enqueue(42);
	q.dequeue();
	q.enqueue(22);
	q.enqueue(12);
	q.dequeue();
	q.dequeue();
	q.enqueue(77);
}