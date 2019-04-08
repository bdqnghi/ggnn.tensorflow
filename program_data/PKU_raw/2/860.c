int main()
{
	struct book
	{
		int num;
		char writer[26];
	}book[999];
	int m,i,n,j,max;
	char a[26],c[26];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d %s",&book[i].num,&book[i].writer);
	}
	for(i=0;i<26;i++)
	{
		a[i]=i+65;
		c[i]=0;
	}
	for(i=0;i<26;i++)
	{
		for(j=0;j<m;j++)
		{
			for(n=0;n<26;n++)
			{
				if(a[i]==book[j].writer[n])
				{
					c[i]++;
				}
			}
		}
	}
	max=0;
	for(i=0;i<26;i++)
	{
		if(c[i]>c[max])
		{
			max=i;
		}
	}
	printf("%c\n%d\n",a[max],c[max]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<26;j++)
		{
			if(book[i].writer[j]==a[max])
			{
				printf("%d\n",book[i].num);
			}
		}
	}
	return 0;
}