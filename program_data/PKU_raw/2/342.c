void main()
{
	int n,i,j,t[26]={0},k=0,max,h;
	scanf("%d",&n);
    
	struct book
	{
		int a;
		char b[26];
	}book[100]={0,""};


	for(i=0;i<n;i++)
	{
		scanf("%d%s",&book[i].a,book[i].b);
	}

	for(i=0;i<n;i++)
	{
		k=strlen(book[i].b);
		for(j=0;j<k;j++)
		{
			t[book[i].b[j]-65]++;
		}
	}
	max=0;
	for(i=0;i<26;i++)
	{
		//printf("%d ",t[i]);
		if(t[i]>max)
		{	max=t[i];
     		h=i;
		}
	}
	printf("%c\n%d\n",h+65,max);
	for(i=0;i<n;i++)
	{
		k=strlen(book[i].b);
		for(j=0;j<k;j++)
		{
			if(book[i].b[j]==h+65)
				printf("%d\n",book[i].a);
		}
	}

}