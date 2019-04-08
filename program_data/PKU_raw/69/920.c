

int main()
{
	int i,j,n,afirst,bfirst;
	char a[max], b[max],c[max],A[max],B[max];
	for(i=0;i<max;i++)
	{
		a[i]='0';
		b[i]='0';
		c[i]='0';
		A[i]='0';
		B[i]='0';
	}
	
	scanf("%s\n%s",a,b);
	for (i=0;i<max;i++)
	{
		if(a[i]=='\0')
		
			break;
		
	}
	afirst=i-1;
	for (i=0;i<max;i++)
	{
		if(b[i]=='\0')
			break;
	}
	bfirst=i-1;
	if(afirst>bfirst)
		n=afirst;
	else
		n=bfirst;
	for(i=afirst,j=0;i>=0;i--,j++)
	{
		A[n+1-j]=a[i];
	}
	for(i=bfirst,j=0;i>=0;i--,j++)
	{
		B[n+1-j]=b[i];
	}
	for(i=n+1;i>=1;i--)
	{
		c[i]+=A[i]+B[i]-'0'-'0';
		if(c[i]-'0'>=10)
		{
			c[i]-=10;
		    c[i-1]++;
		}
	}
	for (i=0;c[i]=='0'&&i<=n+1;i++);
	if(i==n+2)
		printf("0");
	else 
	{
			for(;i<=n+1;i++)
		{
			printf("%c",c[i]);
		}
	}
	return 0;
}