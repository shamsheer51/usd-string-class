#include"header.h"
STRING::STRING()
{
        p=0;
	cout<<"default"<<endl;
}

STRING::STRING(const char *s)
{
	p=new char[strlen(s)+1];
	strcpy(p,s);
	//cout<<"pr"<<endl;
}

STRING::STRING(STRING &s1)
{
	p=new char[strlen(s1.p)+1];
	strcpy(p,s1.p);
	//cout<<"cpy"<<endl;
}

STRING::~STRING()
{
	delete []p;
	//cout<<"dest"<<endl;
}

void STRING::get_data()
{
	printf("%s\n",p);
}

STRING STRING::operator =(STRING t)
{
	if(p!=NULL)
		delete []p;
	p=new char[strlen(t.p)+1];
	strcpy(p,t.p);
	return *this;
}

STRING STRING::operator =(const char *t)
{
	if(p!=NULL)
		delete []p;
	p= new char[strlen(t)+1];
	strcpy(p,t);
	return *this;
}

STRING STRING::operator +(STRING &t)
{
	char *temp;
	temp=new char[strlen(p)+strlen(t.p)+1];
	strcpy(temp,p);
	strcat(temp,t.p);
	if(p!=NULL)
		delete []p;
	p=temp;
	return *this;
}

int STRING::len()
{
	return strlen(p);
}

char& STRING::operator [](int i)
{
	return p[i];
}

istream &operator >>(istream &in,STRING &t)
{
	t.p=new char[200];
	scanf("%s",t.p);
	return in;
}

ostream &operator<<(ostream &out,STRING t)
{
	printf("%s",t.p);
	return out;
}

