void main(){
	void f(char *p,int n);
	int i,j,l;
	char a[1000],*p;
	gets(a);
	l=strlen(a);
	p=a;
	for(i=2;i<l+1;i++)
	{
		for(j=0;j<l-i+1;j++)
		{
			f(p+j,i);
		}
	}
	scanf("%d",&i);
}

void f(char *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=*(p+n-1-i)) i=10000;
	}
	if(i==n)
	{
		for(i=0;i<n;i++)
		{
			printf("%c",*(p+i));
		}
		printf("\n");
	}
}