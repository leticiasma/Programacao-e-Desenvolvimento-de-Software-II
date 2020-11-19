#include <iostream>

using namespace std;

#define SIZE 5

//1)
long *long_ptr ;

int main(){
    long value1=200000;
    long value2;

//2)    
    long_ptr = &value1;
    
//3) imprima o valor do objeto apontado por long_ptr
    cout << *long_ptr <<" ";

//4)    
    value2 = *long_ptr; 

//5)    
    //Imprima o valor de value2
    cout << value2 <<" ";

//6)   
    //Imprima o endereço de value1
    cout << &value1 << " ";
    
//7) Imprima o endereço armazenado em long_ptr
    cout <<  long_ptr << " ";
//Imprima a comparação entre o endereço de value1 com o endereço armazenado em long_ptr
    cout << (long_ptr == &value1) << " ";
    
//8)
    unsigned int values[5];
    values[0] = 2;
    values[1] = 4;
    values[2] = 6;
    values[3] = 8;
    values[4] = 10;
    
//9)
    unsigned int *v_ptr;

//10) imprimir os elementos do array values usando notação de array subscrito.
    for (int i = 0; i<5; i++){
        cout << values[i] << " ";
    }
    
//11) 
    v_ptr = values;
    v_ptr = &values[0];
    
//12) imprimir os elementos do array values usando notação de array ponteiro/deslocamento.
    for (int i = 0; i<5; i++){
        cout << *(values+i) << " ";
    }
    
//13) imprimir os elementos do array values usando notação de array ponteiro/deslocamento com o nome de array como o ponteiro.
    for (int i=0;i<5;i++){
        cout << *(v_ptr+i) << " "; 
    }
    
//14) imprimir os elementos do array values utilizando subscritos no ponteiro para o array.
    for (int i=0;i<5;i++){
        cout << v_ptr[i] << " "; //PODE ISSO??
    }
    
//15) imprimir o quinto elemento de values utilizando a notação de subscrito de array,
    cout << values[4] << " ";
//a notação de ponteiro/deslocamento com o nome de array como o ponteiro, 
    cout << *(v_ptr+4) << " ";
//a notação de subscrito de ponteiro,
    cout << v_ptr[4] << " ";
//a notação de ponteiro/deslocamento.
    cout << *(values+4) << " ";

//16) "O endereço referenciado por v_ptr+3 é: e o valor armazenado nessa localidade é:
    cout << (v_ptr+3) << " " << *(v_ptr+3) << " "; //E o parênteses na primeira parte???
    

//17) imprimir a comparação entre o valor armazenado em (v_ptr-4) e values[0]
    v_ptr = &values[4];
    cout << (v_ptr-4) << " ";
    cout << *(v_ptr-4) << " ";
    
    return 0;
}