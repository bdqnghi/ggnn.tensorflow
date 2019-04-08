int main()
{
	void kuo(char c[]);
	void pipei(char c[],char a[]);
	int n,i;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		char c[200]={'\0'},a[200]={'\0'};
		gets(c);
		printf("%s\n",c);
		kuo(c);
		pipei(c,a);
	}
	return 0;
}
void pipei(char c[],char a[])
{
	char *p,*q;
	for(p=c,q=a;*p!='\0';p++,q++)
	{
		if(*p!='('&&*p!=')')
			*q=' ';
		if(*p==')')
			*q='?';
		if(*p=='(')
			*q='$';
	}
	*q=*p;
	printf("%s\n",a);
}
void kuo(char c[])
{
	char *p,*q,*i,*t;
	int s;
    for(;;)
	{
		s=0;
		for(i=c;*i!='\0';i++)
			for(p=i;*p!='\0';p++)
			{
				if(*p=='(')
					for(q=p+1;*q!='\0';q++)
					{
						if(*q=='(')
							break;
						else
							if(*q==')')
							{
								*p='a';
								*q='a';
								break;
							}
					}
			}
		for(q=c;*q!='\0';q++)
		{
			for(t=q;*t!='\0';t++)
			{
				if(*q=='('&&*t==')')
					s=1;
			}
		}
		if(s==0)
		break;
	}
	
}