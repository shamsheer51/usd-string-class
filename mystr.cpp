#include"header.h"

void mystrcpy(STRING &des,STRING src )
{
	int i=0;

	while(src[i])
	{
		des[i]=src[i];
		i++;
	}
	des[i]='\0';
}

void mystrncpy(STRING &des,STRING src,int n)
{
	for(int i=0;i<n&&src[i]!='\0';i++)
	{
		des[i]=src[i];
	}
}

int mystrlen(STRING temp)
{
	return strlen(temp.p);
}

void mystrcat(STRING &des,STRING src)
{
	int i=0,n;
	while(src[i])
	{
		des[n=mystrlen(des)]=src[i];
		i++;
	}
}

void mystrncat(STRING &des,STRING src,int n)
{
	int i,l;
	for( i=0;i<n&&src[i]!='\0';i++)
	{
		des[l=mystrlen(des)]=src[i];
	}
}

int mystrcmp(STRING des,STRING src)
{
	int i;
	for(i=0;src[i];i++)
	{
		if(src[i]!=des[i])
			return src[i]-des[i];
	}
	return src[i]-des[i];
}

int mystrncmp(STRING des,STRING src,int n)
{
	int i,l;
	for(i=0;l<n&&src[i];i++)
	{
		if(src[i]!=des[i])
			return src[i]-des[i];
	}
	return src[i]-des[i];
}

int mystrstr(STRING src,STRING sub)
{
int i,j;
for(i=0;src[i];i++)
{
if(src[i]==sub[0])
{
for(j=1;sub[j];j++)
{
if(src[i+j]!=sub[j])
{
	break;
}
}
if(sub[j]=='\0')
	return i;
}
}
return 0;
}

int mystrchr(STRING src,char chr)
{
int i;
for(i=0;src[i];i++)
{
if(src[i]==chr)
return i;
}
return 0;
}

int mystrrchr(STRING src,char chr)
{
int i;
for(i=mystrlen(src);i;i--)
{
if(src[i]==chr)
return i;
}
return 0;
}
void mystrrev(STRING &src)
{
int i,j;
char temp;
for(i=0,j=mystrlen(src)-1;i<j;i++,j--)
{
temp=src[i];
src[i]=src[j];
src[j]=temp;
}
}

void mystrupper(STRING &src)
{
int i;
for(i=0;src[i];i++)
{
if(src[i]>='a'&&src[i]<='z')
{
src[i]=src[i]-32;
}
}
}

void mystrlower(STRING &src)
{
int i;
for(i=0;src[i];i++)
{
if(src[i]>='A'&&src[i]<='Z')
{
src[i]=src[i]+32;
}
}
}

void mystrtoggle(STRING &src)
{
int i;
for(i=0;src[i];i++)
{
if(src[i]>='A'&&src[i]<='Z')
{
src[i]=src[i]+32;
}
else if(src[i]>='a'&&src[i]<='z')
{
src[i]=src[i]-32;
}
}
}


