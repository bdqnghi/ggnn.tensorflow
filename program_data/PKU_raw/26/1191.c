void main()
{int i=0,len,w=0;
char a[101]={'\0'};
gets(a);
len=strlen(a);
while(i<len)
{ if(w!=1||a[i]!=' ')
		printf("%c",a[i]);
   if(a[i]==' ')
		w=1;
	else
		w=0;
i++;}
}