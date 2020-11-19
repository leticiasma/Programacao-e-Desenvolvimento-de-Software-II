#include "List.hpp"

List::List(){
	this->size = 0;
	this->head = nullptr; //Não NULL
}

void List::insert(int value){
    Node* node = new Node(); //INICIALIZAR!
	node->value = value;
	if(this->head==nullptr){
		node->next = nullptr;
		this->head = node;
	} else {
		node->next = this->head;
		this->head = node;
	}
	this->size ++;
}

void List::clearList() {
	this->head = nullptr;
}

void List::print(){
	if (this->size > 0){
		Node* head = this->head;
		while(head != nullptr){ //E não apenas head
			std::cout << head->value << " ";
			head = head->next;
		}
		std::cout<<std::endl;
	}
	else{
	    std::cout<<"-"<<std::endl;
		return;
	}
}

int List::removeFirst(){
	if (this->size > 0){
		int num = 0;
		Node* current = head;
		
		this->head = this->head->next;
		num = current->value;
		delete current;
		
		this->size = this->size-1;
		return num; //Pq? n current->value;?
	} else {
		return -1;
	}
}

int List::indexOf(int value){
	if (this->size > 0){
		Node* head = this->head;
		int index = 0;
		while(head && head->value != value){
			index++;
			head = head->next;
		}
		if (head->value == value)
			return index; 
		return -1;
	}
	else{
		return -1;
	}
}

void List::remove(int value){
	if(this->size == 0){
		return;
	}
	else if(this->head->value == value){
		Node* current = this->head;
		this->head = this->head->next;
		delete current;
		this->size=this->size - 1;
	} else {
		Node* previous = this->head;
		Node* current = head->next;
		while(current != nullptr) {
			if(current->value == value) {
				break;
			} else {
				previous = current;
				current = current->next;
			}
		}
		if(current == nullptr) {
			return;
		} else {
			previous->next = current->next;
			delete current;
			this->size=this->size - 1;
		}
	}
}