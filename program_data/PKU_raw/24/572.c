int main()
{
	struct word{
		char a[50];
	}words[50];
	int i,j;int e[50];
	char f[2600];
	gets(f);
	char *o;
	o=f;
	for(;*o!='\0';o++)
	{
		if(*o==' ')
		{j++;}
	}
    j=j+1;
	char *p=f;
	char *q;
    for(i=0;i<j;i++)
	{
		q=words[i].a;
		for(;*p!=' '&&*p!='\0';p++,q++)
		{
			*q=*p;
		}
		*q='\0';
		if(*p!='\0'){p++;}
		else {break;}
	}
	for(i=0;i<j;i++)
	{
		e[i]=strlen(words[i].a);
	}
	int c=0;int d=50;
	for(i=0;i<j;i++)
	{
		if(e[i]>c)
		{c=e[i];}
		if(e[i]<d)
		{d=e[i];}
	}
	for(i=0;i<j;i++)
	{
		if(e[i]==c)
		{printf("%s\n",words[i].a);break;}
	}
	for(i=0;i<j;i++)
	{
		if(e[i]==d)
		{printf("%s\n",words[i].a);break;}
	}
	return 0;
}

