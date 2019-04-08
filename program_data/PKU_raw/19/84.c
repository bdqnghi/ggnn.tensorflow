int main()
{
	char s[101],a[101],b[101],x[101]={0};
	int i,j,n,m;
	gets(s);
	gets(a);
	gets(b);
	n=strlen(a);
	m=strlen(b);
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]==a[0]&&s[i-1]==' ')||s[0]==a[0])
		{
			for(j=0;j<n;j++)
				if(s[i+j]!=a[j]) break;
				if(n==j) x[i]=1;
		}
	}
	for(i=0;s[i]!='\0';i++)
	{
		if(x[i]==0) printf("%c",s[i]);
		else if(x[i]==1)
		{
			for(j=0;j<m;j++) printf("%c",b[j]);
			i+=n-1;
		}
	}
	printf("\n");
	return 0;
}
		
	
