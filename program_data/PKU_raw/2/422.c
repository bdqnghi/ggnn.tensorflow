void main()
{
	struct b
	{
		int num;
		char str[27];
	}b[100];
	int n,i,m,j,max,nmax;
	int a[26]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&b[i].num,b[i].str);
		m=strlen(b[i].str);
		for(j=0;j<m;j++)
		{
			a[b[i].str[j]-65]++;
		}
	}
	max=a[0];
	nmax=0;
	for(i=0;i<26;i++)
	{
		if(a[i]>max) {max=a[i];nmax=i;}
	}
	printf("%c\n%d\n",nmax+65,max);
	for(i=0;i<n;i++)
	{
		m=strlen(b[i].str);
		for(j=0;j<m;j++)
		{
			if(b[i].str[j]==nmax+65)
				printf("%d\n",b[i].num);
		}
	}
}