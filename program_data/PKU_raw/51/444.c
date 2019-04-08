int n,k[510]={0};
char a[510],b[510][5];
void main()
{
	void ch(char a[],char b[][5]);
	void compare(char b[][5]);
	scanf("%d",&n);
	scanf("%s",a);
	ch(a,b);
	compare(b);
	
}
void ch(char a[],char b[][5])
{
	int i,j,k;
	for(i=0;i<=strlen(a)-n;i++)
	{
		for(j=i,k=0;j<i+n;j++,k++)
		{
			b[i][k]=a[j];
		}
		b[i][k]='\0';
	}
}
void compare(char b[][5])
{
	int i,j,l,e=0,o=strlen(a);
	char c[510][5];
	for(i=0;i<=o-n;i++)
	{
		for(j=0;j<=o-n;j++)
		{
			if(strcmp(b[i],b[j])==0)
				k[i]++;
		}
	}
	l=k[0];
	for(i=0;i<=o-n;i++)
	{
		if(k[i]>l)
		{
			l=k[i];
		}
	}
	strcpy(c[0],b[0]);
	for(i=0;i<=o-n;i++)
	{
		if(k[i]==l)
		{
			for(j=0;j<e;j++)
			{
				if(strcmp(b[i],c[j])==0)
					break;
			}
			if(j==e)
			{
				strcpy(c[e],b[i]);
				
				e++;
			}
		}
	}
if(l==1)printf("NO");
else
{
printf("%d\n",l);
	for(i=0;i<e;i++)
	{
		printf("%s\n",c[i]);
	}
}
}