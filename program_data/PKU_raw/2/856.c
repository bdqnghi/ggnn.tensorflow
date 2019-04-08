struct info
{
	int nam;
	char aut[27];
}inf[1000];
void main()
{
	int n,i,a[26]={0},k,max=0,sum=0;
	char *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%s",&inf[i].nam,inf[i].aut);
	for(i=0;i<n;i++)
	{
		p=inf[i].aut;
		while(*p!='\0')
		{
			a[*p-65]++;
			p++;
		}
	}
	for(i=0;i<26;i++)
		max=max>a[i]?max:a[i];
	for(i=0;i<26;i++)
	{if(a[i]==max){printf("%c\n",i+65);break;}}
	k=i+65;
	for(i=0;i<n;i++)
	{
		p=inf[i].aut;
		while(*p!='\0')
		{if(*p==k){sum++;break;}p++;}
	}printf("%d\n",sum);
	for(i=0;i<n;i++)
	{
		p=inf[i].aut;
		while(*p!='\0')
		{if(*p==k){printf("%d\n",inf[i].nam);break;}
		p++;
		}
	}
}
