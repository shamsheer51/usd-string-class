#include<iostream>
#include<cstring>
using namespace std;
class STRING;
class STRING
{
char *p;
public:
STRING();
STRING(const char*);
STRING(STRING &);
~STRING();
void get_data();
STRING operator =(STRING t);
STRING operator =(const char *t);
STRING operator +(STRING &t);
int len();
char& operator[](int);
friend istream &operator >>(istream &in,STRING &t);
friend ostream &operator <<(ostream &out,STRING t);
friend void mystrcpy(STRING &des,STRING src );
friend void mystrncpy(STRING &des,STRING src,int n);
friend int mystrlen(STRING des);
friend void mystrcat(STRING &des,STRING src);
friend void mystrncat(STRING &des,STRING src,int n);
friend int mystrcmp(STRING des,STRING src);
friend int mystrncmp(STRING des,STRING src,int n);
friend int mystrstr(STRING des,STRING src);
friend int mystrchr(STRING src,char chr);
friend int mystrrchr(STRING src,char chr);
friend void mystrrev(STRING &src);
friend void mystrtoggle(STRING &src);
friend void mystrlower(STRING &src);
friend void mystrupper(STRING &src);
};
