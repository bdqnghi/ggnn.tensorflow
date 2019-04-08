void main()
{
	int max(int b[26]);
	int n,a[100]={0},b[26]={0},i,j,m;
	char zuo[26]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char shu[100][10]={0},c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&a[i],shu[i]);
	}
	for(i=0;i<26;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strchr(shu[j],zuo[i])) b[i]=b[i]+1;
		}
	}
	m=max(b);
	for(i=0;i<26;i++)
	{
		if(b[i]==m)
		{
			printf("%c\n",zuo[i]);
			printf("%d\n",b[i]);
			c=zuo[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(strchr(shu[i],c))
		{
			printf("%d\n",a[i]);
		}
	}
}
int max(int b[26])
{
	int i,m=0;
	for(i=0;i<26;i++)
	{
		if(m<b[i])m=b[i];
	}
	return(m);
}