#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node *next;
	Node *prev;
	Node(int data){
		this->data = data;
		this->next = NULL;
		this->prev = NULL;
	}
};

class douballyLinkedList{
public:
	Node *head;
	douballyLinkedList(){
		head = NULL;
	}
	void insertNode(int data){
		Node *new_node = new Node(data);
		if(head == NULL){
			head = new_node;
			return;
		}
		Node *current_node = head;
		while(current_node->next != NULL){
			current_node = current_node->next;
		}
		current_node->next = new_node;
		new_node->prev = current_node;
		current_node = NULL;
	}
	void print_dll(){
		Node *current_node = head;
		while(current_node != NULL){
			if(current_node->prev != NULL && current_node->next != NULL){
				cout << current_node->prev->data  << " <- "<< current_node->data << " -> " << current_node->next->data << endl;
			}
			current_node = current_node->next;
		}
	}
};

int main(){
	douballyLinkedList dll;
	dll.insertNode(1);
	dll.insertNode(10);
	dll.insertNode(100);
	dll.insertNode(1000);
	dll.insertNode(10000);
	dll.insertNode(100000);
	dll.print_dll();
}