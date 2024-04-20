#include<bits/stdc++.h>
using namespace std;


class Node{
public:
	int data;
	Node *next;
	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};

class LinkedList{
	Node *head;
public:
	LinkedList(){
		head = NULL;
	}
	void insertNode(int new_node_data){
		Node *new_node = new Node(new_node_data);
		if(head == NULL){
			head = new_node;
			return;
		}
		Node *current_node = head;
		while(current_node->next != NULL){
			current_node = current_node->next;
		}
		current_node->next = new_node;
		current_node = NULL;
	}
	void deleteNode(int node_position){
		if(head == NULL){
			cout << " The linked list is empty" << endl;
			return;
		}
		Node *current_node = head;
		int current_position = 2;
		while(current_node != NULL){
			if(current_position == node_position){
				break;
			}
			current_node = current_node->next;
			current_position ++;
		}
		if(current_node == NULL || current_node->next == NULL){
			cout << endl << " This position does not exist in the linked list" << endl;
			return;
		}
		current_node->next = current_node->next->next;
	}
	void print_linked_list(){
		Node *current_node = head;
		while(current_node != NULL){
			cout << " " << current_node->data;
			current_node = current_node->next;
		}
		cout << endl;
	}
};

int main(){
	LinkedList l;
	l.insertNode(1);
	l.insertNode(4);
	l.insertNode(2);
	l.insertNode(5);
	l.insertNode(6);
	l.print_linked_list();
	l.deleteNode(6);
	l.print_linked_list();
}