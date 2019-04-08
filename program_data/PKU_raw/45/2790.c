int main()
{
	char s[51],w[51],i,j,m,n,c;
	int a[51]={0};
	scanf("%s %s",s,w);
	m=strlen(s);
	n=strlen(w);
	for(i=0;i<=n-m;i++)
	{
		for(j=i;j<i+m;j++)
		{
			c=w[j]-s[j-i];
			if(c<0) c=(-1)*c;
			a[i]=a[i]+c;
		}
	}
	for(i=0;i<=n-m;i++)
	{
		if(a[i]==0) break;
	}
	printf("%d",i);
	return 0;
}




