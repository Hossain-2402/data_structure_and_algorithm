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
		if(node_position == 1){
			head = head->next;
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
			cout << " This position does not exist in the linked list" << endl;
			return;
		}
		current_node->next = current_node->next->next;
	}
	void print_linked_list(){
		Node *current_node = head;
		cout << endl << " The current LinkedList is : " << endl;
		while(current_node != NULL){
			cout << " " << current_node->data;
			current_node = current_node->next;
		}
		cout << endl;
	}
	void reverse_linked_list(){
		Node *current_node = head;
		Node *prev_node = NULL;
		Node *next_node;
		while(current_node != NULL){
			next_node = current_node->next;
			current_node->next = prev_node;
			prev_node = current_node;
			if(next_node == NULL)
				head = current_node;
			current_node = next_node;
			
		}
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

	l.deleteNode(1);
	l.print_linked_list();

	l.reverse_linked_list();
	l.print_linked_list();
	
	l.deleteNode(2);
	l.print_linked_list();
}



/*
1 -> 2 -> 3 -> 4 -> 5

prev = NULL;
current = head;
next = NULL;
inside loop :
	next = current->next
	current->next = prev;
	prev = currnet;
	currnet = next;


*/