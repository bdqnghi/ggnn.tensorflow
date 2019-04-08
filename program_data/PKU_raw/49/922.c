int main()
{
	char c[500],d[500];
	int f(char d[]),n,i,j,k,l;
	scanf("%s",c);
	n=strlen(c);
	for(i=2;i<=n;i++)
	{
		for(j=0;j<n+1-i;j++)
		{
			for(k=0;k<500;k++) d[k]='\0';
			for(k=j;k<j+i;k++)
			{
				d[k-j]=c[k];
			}
			if(f(d)==1) printf("%s\n",d);
		}
	}
	scanf("%d",&l);
	return 0;
}
int f(char d[])
{
	int m,t,s=0,ans;
	m=strlen(d);
	for(t=0;t<m;t++)
	{
		if(d[t]==d[m-1-t]) s=s+1;
	}
	if(s==m) ans=1;
	else ans=0;
	return ans;
}