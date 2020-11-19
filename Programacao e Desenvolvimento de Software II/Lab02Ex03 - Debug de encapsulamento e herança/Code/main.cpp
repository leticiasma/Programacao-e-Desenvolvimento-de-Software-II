#include <iostream>
#include "Classes.hpp"

using namespace std;

int main()
{
    ClasseBase base;
    base.set_var_public(1); 
    base.set_var_private(2); 
    base.set_var_protected(3); 
 
    ClassePublica pub;
    pub.set_var_public(1); 
    pub.set_var_private(2); 
    pub.set_var_protected(3); 
    
    ClassePrivada pri; //priv
    pri.set_var_public(1); 
    pri.set_var_private(2); 
    pri.set_var_protected(3); 
    
    OverloadPrivada over; //priv
    over.set_var_public(1); 
    over.set_var_private(2); 
    over.set_var_protected(3);
    
    A2 a2; //priv
    a2.set_var_public(1);
    a2.set_var_private(2); 
    a2.set_var_protected(3);
    a2.set_var_public2(1);
    a2.set_var_private2(2);
    a2.set_var_protected2(3);
    
    A3 a3; //priv
    a3.set_var_public(1);
    a3.set_var_private(2); 
    a3.set_var_protected(3);
    a3.set_var_public2(1);
    a3.set_var_private2(2);
    a3.set_var_protected2(3);
    a3.set_var_public3(1);
    a3.set_var_private3(2);
    a3.set_var_protected3(3);
    
    cout << base.get_var_public() << endl; 
    cout << base.get_var_private() << endl; 
    cout << base.get_var_protected() << endl; 
 
    cout << pub.get_var_public() << endl; 
    pub.get_var_private();
    cout << pub.get_var_protected() << endl;

    cout << pri.get_var_public() << endl;
    pri.get_var_private(); 
    cout << pri.get_var_protected() << endl;
    
    cout << over.get_var_public() << endl; 
    cout << over.get_var_private() << endl; 
    cout << over.get_var_protected() << endl; 

    cout << a2.get_var_public() << endl;
    a2.get_var_private(); 
    cout << a2.get_var_protected() << endl;
    cout << a2.get_var_public2() << endl;
    cout << a2.get_var_private2() << endl;
    cout << a2.get_var_protected2() << endl;

    a3.get_var_public();
    a3.get_var_private();
    a3.get_var_protected();
    cout << a3.get_var_public2() << endl;
    a3.get_var_private2();
    cout <<  a3.get_var_protected2() << endl;
    cout << a3.get_var_public3() << endl;
    cout << a3.get_var_private3() << endl;
    cout << a3.get_var_protected3() << endl;
    
}
