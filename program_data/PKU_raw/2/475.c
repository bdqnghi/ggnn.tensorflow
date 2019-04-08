int main()
{
	struct books
	{
		int book;
		char writer[20];
	}bk[1000];
	int n,i,j,m,max,k,maxw=0,flag=0,a[26]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&bk[i].book,bk[i].writer);
	}
	for(i=0;i<n;i++)
	{
		m=strlen(bk[i].writer);
		for(j=0;j<m;j++)
		{
			k=bk[i].writer[j];
			a[k-65]++;
		}
	}
	max=a[0];
	for(i=1;i<26;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxw=i;
		}
	}
	printf("%c\n%d\n",maxw+65,max);
	for(i=0;i<n;i++)
	{
		m=strlen(bk[i].writer);
		for(j=0;j<m;j++)
		{
			if(maxw+65==bk[i].writer[j])
				printf("%d\n",bk[i].book);

		}
	}
	return 0;
}







	








