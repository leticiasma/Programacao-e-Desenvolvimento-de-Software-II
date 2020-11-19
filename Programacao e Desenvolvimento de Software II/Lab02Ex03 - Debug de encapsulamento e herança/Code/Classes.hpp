#ifndef CLASSES_H
#define CLASSES_H

class ClasseBase
{
public:
    int var_public;
private:
    int var_private;
protected:
    int var_protected;

public:
    int get_var_public();
    int get_var_private();
    int get_var_protected();

    void set_var_public(int n);
    void set_var_private(int n);
    void set_var_protected(int n);
};


class A2 : private ClasseBase 
{
public:
	int var_public2;
private:
	int var_private2;
protected:
	int var_protected2;

public:
    int get_var_public2();
    int get_var_private2();
    int get_var_protected2();

    void set_var_public2(int n);
    void set_var_private2(int n);
    void set_var_protected2(int n);
    
    int get_var_public();
    void get_var_private();
    int get_var_protected();

    void set_var_public(int n);
    void set_var_private(int n);
    void set_var_protected(int n);
};


class A3 : public A2 //Deixa como está
{
public:
	int var_public3;
private:
	int var_private3;
protected:
	int var_protected3;

public:
    int get_var_public3();
    int get_var_private3();
    int get_var_protected3();

    void set_var_public3(int n);
    void set_var_private3(int n);
    void set_var_protected3(int n);

    //int get_var_public2();
    void get_var_private2();
    //int get_var_protected2();

    //void set_var_public2(int n);
    //void set_var_private2(int n);
    //void set_var_protected2(int n);
    
    void get_var_public();
    void get_var_private();
    void get_var_protected();

    void set_var_public(int n);
    void set_var_private(int n);
    void set_var_protected(int n);
}; 


class ClassePublica : public ClasseBase
{
public:
	int var_public3;
private:
	int var_private3;
protected:
	int var_protected3;
	
public:
    //ClassePublica()
    //{
    //    var_public = 0; 
    //    var_private = 0; 
    //    var_protected = 0; 
    //}

    int get_var_public3();
    int get_var_private3();
    int get_var_protected3();

    void set_var_public3(int n);
    void set_var_private3(int n);
    void set_var_protected3(int n);

    void get_var_private();
}; 


class ClassePrivada : private ClasseBase //Não consigo acessar nem set e get
{
public:
   // ClassePrivada()
    //{
    //    var_public = 0; 
    //    var_private = 0; 
    //    var_protected = 0; 
    //}
    
    int get_var_public();
    void get_var_private();
    int get_var_protected();

    void set_var_public(int n);
    void set_var_private(int n);
    void set_var_protected(int n);
};

class OverloadPrivada : private ClasseBase //SOBRECARGA
{
	public:
    	int var_public;
	private:
    	int var_private;
	protected:
    	int var_protected;

public:
    int get_var_public();
    int get_var_private();
    int get_var_protected();

    void set_var_public(int n);
    void set_var_private(int n);
    void set_var_protected(int n);

    void get_var_public_pai();
    void get_var_private_pai();
    void get_var_protected_pai();

    void set_var_public_pai(int n);
    void set_var_private_pai(int n);
    void set_var_protected_pai(int n);
};

#endif