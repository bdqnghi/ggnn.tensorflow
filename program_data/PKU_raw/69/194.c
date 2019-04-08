int main()
{
	int i,j,m,n,max;
	char a[250],b[250],c[1000],d[250],e[250];
	for(i=0;i<=249;i++) c[i]=0;
	gets(a);
	gets(b);
	m=strlen(a);
	n=strlen(b);
	for(i=m-1,j=0;i>=0;j++,i--) d[j]=a[i];
	for(;j<=249;j++) d[j]='0';
	for(i=n-1,j=0;i>=0;j++,i--) e[j]=b[i];
	for(;j<=249;j++) e[j]='0';
	max=(m>n)? m:n;
	for(i=0;d[i]>'0'||e[i]>'0'||i<=max;i++)
	{
		c[i]=d[i]+e[i]-'0';
		if(c[i]>'9')
		{
			c[i]=c[i]-10;
			d[i+1]=d[i+1]+1;
	        
		}
	}
	for(i=249;i>=0;i--)
	{
		if(c[i]>'0')
		break;
	}
	
	if(i<0) printf("0\n");
	else
	{
		for(;i>=0;i--)
	    {
		    printf("%c",c[i]);
	    }
	}
	return 0;
}