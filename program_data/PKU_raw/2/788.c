int ismax(int l[],int a)
{
	int i;
	for(i=0;i<26;i++)
	{
		if(l[i]>l[a]) return(0);
	}
	return(1);
}

void main()
{
	int i,j,k,n,p,l[26]={0};
	struct shu
	{
		int num;
		char auth[100];
	} book[999];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&book[i].num,book[i].auth);
	}
	for(i=0;i<26;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<100;k++)
			{
				if(book[j].auth[k]==i+65)
					l[i]++;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(ismax(l,i)==1)
		{
			printf("%c\n%d\n",i+65,l[i]);
			p=i;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<100;j++)
		{
			if(book[i].auth[j]==p+65)
				printf("%d\n",book[i].num);
		}
	}
}