struct A
{
	char num[1000];
	char B[27];
};
void main()
{
	int n,i,a,k,t;
	int sb[27]={0};
	int sb2[27]={0};
	char x;

	scanf("%d",&n);

	struct A book[999]={0};
	for (i=0;i<n;i++)
	{
		scanf("%s%s",book[i].num,book[i].B);
	}
	for(i=0;i<n;i++)
	{
		for(k=0; ;k++)
		{
			a=book[i].B[k];
			if (book[i].B[k]<='Z'&&book[i].B[k]>='A')
			{
			sb[a-64]++;
			}
			else break;
		}
	}
	for(i=1;i<=26;i++)
	{
		sb2[i]=sb[i];
	}
	for (i=1;i<26;i++)
	{
		if(sb[i]>sb[i+1])
		{
			a=sb[i];
			sb[i]=sb[i+1];
			sb[i+1]=a;
		}
	}

	for(i=1;i<=26;i++)
	{
		if (sb2[i]==sb[26])
		{
			t=i;
		}
	}
	x='A'+t-1;
	printf("%c\n%d\n",x,sb[26]);
	
	for(i=0;i<n;i++)
	{
		for(k=0; ;k++)
		{
			if(book[i].B[k]=='\0')break;

			else if (book[i].B[k]==x)
				printf("%s\n",book[i].num);
		}
	}
}
	

	