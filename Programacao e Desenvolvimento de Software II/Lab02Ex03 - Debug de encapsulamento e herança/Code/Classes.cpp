#include "Classes.hpp"
#include <iostream>

using namespace std;

//ClasseBase
int ClasseBase::get_var_public(){
    return this->var_public;
}
int ClasseBase::get_var_private(){
    return this->var_private;
}
int ClasseBase::get_var_protected(){
    return this->var_protected;
}
void ClasseBase::set_var_public(int n){
    this->var_public = n;
}
void ClasseBase::set_var_private(int n){
    this->var_private = n;
}
void ClasseBase::set_var_protected(int n){
    this->var_protected = n;
}

//A2
int A2::get_var_public2(){
    return this->var_public2;
}
int A2::get_var_private2(){
    return this->var_private2;
}
int A2::get_var_protected2(){
    return this->var_protected2;
}
void A2::set_var_public2(int n){
    this->var_public2 = n;
}
void A2::set_var_private2(int n){
    this->var_private2 = n;
}
void A2::set_var_protected2(int n){
    this->var_protected2 = n;
}
//
int A2::get_var_public(){
    return this->var_public;
}
void A2::get_var_private(){
   cout<<"Inacessivel"<<endl;
}
int A2::get_var_protected(){
    return this->var_protected;
}
void A2::set_var_public(int n){
    this->var_public = n;
}
void A2::set_var_private(int n){}
void A2::set_var_protected(int n){
    this->var_protected = n;
}

//A3
int A3::get_var_public3(){
    return this->var_public3;
}
int A3::get_var_private3(){
    return this->var_private3;
}
int A3::get_var_protected3(){
    return this->var_protected3;
}
void A3::set_var_public3(int n){
    this->var_public3 = n;
}
void A3::set_var_private3(int n){
    this->var_private3 = n;
}
void A3::set_var_protected3(int n){
    this->var_protected3 = n;
}
//
//int A3::get_var_public2();
void A3::get_var_private2(){
    cout<<"Inacessivel"<<endl;
}
//int A3::get_var_protected2();

//void A3::set_var_public2(int n);
//void A3::set_var_private2(int n);
//void A3::set_var_protected2(int n);
    
void A3::get_var_public(){
    cout<<"Inacessivel"<<endl;
}
void A3::get_var_private(){
    cout<<"Inacessivel"<<endl;
}
void A3::get_var_protected(){
    cout<<"Inacessivel"<<endl;
}

void A3::set_var_public(int n){}
void A3::set_var_private(int n){}
void A3::set_var_protected(int n){}

//ClassePublica
int ClassePublica::get_var_public3(){
    return this->var_public3;
}
int ClassePublica::get_var_private3(){
    return this->var_private3;
}
int ClassePublica::get_var_protected3(){
    return this->var_protected3;
}
void ClassePublica::set_var_public3(int n){
    this->var_public3 = n;
}
void ClassePublica::set_var_private3(int n){
    this->var_private3 = n;
}
void ClassePublica::set_var_protected3(int n){
    this->var_protected3 = n;
}
//
void ClassePublica::get_var_private(){
    cout<<"Inacessivel"<<endl;
}

//ClassePrivada
int ClassePrivada::get_var_public(){ //Será que isso tem a ver com aquilo que vai procurando na hierarq até achar?
    return this->var_public;
}
void ClassePrivada::get_var_private(){
    cout<<"Inacessivel"<<endl;
}
int ClassePrivada::get_var_protected(){
    return this->var_protected;
}

void ClassePrivada::set_var_public(int n){
    this->var_public = n;
}
void ClassePrivada::set_var_private(int n){}
void ClassePrivada::set_var_protected(int n){
     this->var_protected = n;
}

//OverloadPrivada
int OverloadPrivada::get_var_public(){
    return this->var_public;
}
int OverloadPrivada::get_var_private(){
    return this->var_private;
}
int OverloadPrivada::get_var_protected(){
    return this->var_protected;
}
void OverloadPrivada::set_var_public(int n){
    this->var_public = n;
}
void OverloadPrivada::set_var_private(int n){
    this->var_private = n;
}
void OverloadPrivada::set_var_protected(int n){
    this->var_protected = n;
}
//
void OverloadPrivada::get_var_public_pai(){
    cout<<"Inacessivel"<<endl;
}
void OverloadPrivada::get_var_private_pai(){
    cout<<"Inacessivel"<<endl;
}
void OverloadPrivada::get_var_protected_pai(){
    cout<<"Inacessivel"<<endl;
}
void OverloadPrivada::set_var_public_pai(int n){}
void OverloadPrivada::set_var_private_pai(int n){}
void OverloadPrivada::set_var_protected_pai(int n){}