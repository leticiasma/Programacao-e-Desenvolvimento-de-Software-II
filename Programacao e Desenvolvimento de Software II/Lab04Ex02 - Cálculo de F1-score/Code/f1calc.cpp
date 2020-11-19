#include "f1calc.hpp"
#include <cstdlib>

std::tuple<int,int,int,int,int> F1CALC::processaEntradas(string sTP,string sTN,string sFP,string sFN,string sTotal){

    int v_positivo = atoi(sTP.c_str());
    int v_negativo = atoi(sTN.c_str());
    int f_positivo = atoi(sFP.c_str());
    int f_negativo = atoi(sFN.c_str());
    int total_obs = atoi(sTotal.c_str());
    
    std::string s_v_positivo = to_string(v_positivo);
    std::string s_v_negativo = to_string(v_negativo);
    std::string s_f_positivo = to_string(f_positivo);
    std::string s_f_negativo = to_string(f_negativo);
    std::string s_total_obs = to_string(total_obs);
    
    ASSERT(s_v_positivo==sTP&&std::stoi(sTP)>=0,"Input validation failed");
    ASSERT(s_v_negativo==sTN&&std::stoi(sTN)>=0,"Input validation failed");
    ASSERT(s_f_positivo==sFP&&std::stoi(sFP)>=0,"Input validation failed");
    ASSERT(s_f_negativo==sFN&&std::stoi(sFN)>=0,"Input validation failed");
    ASSERT(s_total_obs==sTotal&&std::stoi(sTotal)>=0,"Input validation failed");
    
    std::tuple<int,int,int,int,int> tupla={v_positivo,v_negativo,f_positivo,f_negativo,total_obs};
    
    return tupla;
}

std::tuple<float,float> F1CALC::calculaPresRecall(int TP,int TN,int FP,int FN,int Total){
    
    ASSERT(Total==TP+TN+FP+FN,"Pre-condition failed");
    ASSERT(TP+FP!=0,"Pre-condition failed");
    ASSERT(TP+FN!=0,"Pre-condition failed");
    
    float precisao = (float)TP/(TP+FP);
    float revocacao = (float)TP/(TP+FN);
    
    ASSERT(precisao+revocacao!=0,"Post-condition failed");
    
    std::tuple<float,float> tupla = {precisao,revocacao};
    
    return tupla;
}

float F1CALC::calculaF1(float p, float r){
    
    float f1 = (2*p*r)/(p+r);
    
    return f1;
}