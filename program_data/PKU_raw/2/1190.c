struct Book
{
	int number;
	char author[30];
};

void main()
{
	int max=0,len;
	int sum[30]={0};
	int m,i,j;
	struct Book book[999];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d %s",&book[i].number,book[i].author);
		len=strlen(book[i].author);
		for(j=0;j<len;j++)
			sum[book[i].author[j]-65]++;
	}
	for(i=0;i<26;i++)
	{
		if(sum[i]>sum[max])
			max=i;
	}
	printf("%c\n%d\n",max+65,sum[max]);
	for(i=0;i<m;i++)
	{
		len=strlen(book[i].author);
		for(j=0;j<len;j++)
		{
			if(book[i].author[j]==max+65)
			{
				printf("%d\n",book[i].number);
				break;
			}
		}
	}
}