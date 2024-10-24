//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//};
//
//int main() {
// 
//    Node* header = new Node;
//    header->next = header; 
//    
//  
//    Node* first = new Node;
//    first->data = 10;
//    first->next = header;  
//    header->next = first;  
//
//
//    Node* second = new Node;
//    second->data = 20;
//    second->next = header;  
//    first->next = second;    
//   
//    Node* third = new Node;
//    third->data = 30;
//    third->next = header;   
//    second->next = third;    
//
//  
//    Node* temp = header->next;  
//    while (temp != header) {
//        cout << temp->data << " -> ";
//        temp = temp->next;
//    }
//    cout << "NULL" << endl;
//
//   
//    return 0;
//}


#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* prev;
	Node* next;
};
int main()
{
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	
	head->data = 1;
	head->prev = null;
	head->next = second;
	
	second->data = 2;
	second->prev = head;
	second->next = third;
	
	third->data = 3;
	third->prev = second;
	third->next = null;
	
	cout << "Traversal in forward direction: " << endl;
	Node* temp = head;
	while (temp!=nullptr){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
	
	cout << "Traversal in backward direction:" << endl;
	temp=third;
	while(temp!=nullptr){
		cout << temp->data << " ";
		temp = temp->prev;
		
	}
	cout << endl;
}

