#include <iostream>
#include <list>
#include "List.hpp"

int main(){
    List *L = new List(); //OQ NA VDD ISSO FAZ?
    int N, K;
    
	//1)
    std::cin >> N;
    std::cin >> K;
	
	//2)
    for (int i = 0; i <= N; i++) {
        L->insert(i);
    }
	
	//3)
    L->print();
	
	//4)
	std::cout << L->size << std::endl;
	
	//5)
	for (int i=0; i<K; i++){
		L->removeFirst();
	}
	
	//6)
	L->print();
	
	//7)
	std::cout << L->size << std::endl;
	
	//8)
	for(int i = N-K; i>=0; i--){
		if(i%2==0){
			L->remove(i);
		}
	}
	
	//9)
	L->print();
	
	//10)
	std::cout << L->size << std::endl;
    
	while(L->head!=nullptr){
        L->removeFirst();
    }
	
    delete L;
	return 0;
}