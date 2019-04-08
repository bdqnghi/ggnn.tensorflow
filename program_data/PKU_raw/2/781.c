struct book
{
	int num;
	char writer[26];
}book[1000];
void main()
{
	int n,i,j,e,max=0;
	scanf("%d",&n);
	char da,c;
	int temp[27]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d%s",&book[i].num,book[i].writer);
	}	
	for(i=0;i<n;i++)
	{
		for(da='A';da<='Z';da++)
		{
			for(j=0;j<26;j++)
			{
				if(book[i].writer[j]==da)
					temp[da-'A'+0]++;
			}
		}
	}
	for(j=0;j<26;j++)
	{
		if(temp[j]>max)
		{
			max=temp[j];
		}
	}
	for(j=0;j<26;j++)
	{
		if(temp[j]==max)
		{
			c=j+65;
        printf("%c\n%d\n",c,temp[j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<26;j++){
			if(book[i].writer[j]==c)
				printf("%d\n",book[i].num);
		}
	}
}
