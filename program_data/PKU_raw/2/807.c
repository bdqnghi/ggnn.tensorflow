void main()
{
	struct book
	{
		int num;
		char w[27];
	};
	struct book b[1000];
	int n,i,j,k,c[26]={0},max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s",&b[i].num,b[i].w);
	}
	for(i='A';i<='Z';i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<strlen(b[j].w);k++)
			{
				if(i==b[j].w[k])
				{
					c[i-65]++;
				}
			}
		}
	}
	max=0;
	for(i=1;i<26;i++)
	{
		if(c[i]>c[max])
			max=i;
	}
	printf("%c\n",max+65);
	printf("%d\n",c[max]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<strlen(b[i].w);j++)
		{
			if(b[i].w[j]==max+65)
			{
				printf("%d\n",b[i].num);
				break;
			}
		}
	}
}



