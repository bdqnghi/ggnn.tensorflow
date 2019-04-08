char c[100];
void putcc(char a[],char b[])
{
	int A,B,i;
	A=strlen(a);
	B=strlen(b);
    for(i=B-1;i>=0;i--)
	{
		if(b[i]<=a[i-B+A]) c[i-B+A]=a[i-B+A]-b[i]+48;
		else
		{
			c[i-B+A]=a[i-B+A]+10-b[i]+48;
			a[i-B+A-1]=a[i-B+A-1]-1;
		}
	}
	for(i=A-B-1;i>=0;i--)
	{
		c[i]=a[i];
	}
}
int main()
{
	int n,i,l,A;
	char d[100][100];
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		char a[100],b[100];
	    scanf("%s",a);
		scanf("%s",b);
		if(i!=n-1) scanf("\n");
		A=strlen(a);
		putcc(a,b);
		for(l=0;l<A;l++)
		{
			d[i][l]=c[l];
		}
		d[i][l]='\0';
	}
	for(i=0;i<n;i++)
	{
		l=0;
		while(d[i][l]!='\0')
		{
			printf("%c",d[i][l]);
			l=l+1;
		}
		printf("\n");
	}
	return 0;
}
