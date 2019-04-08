int main()
{
	int n,i,j,k,w=0;
	int maxzm,maxbk=0;
	char c1;
	int zimu[26]={0};
	int lm[100];
	struct{
		int num;
		char a[100];
	}book[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	   scanf("%d %s",&book[i].num,book[i].a);
	for(i=0;i<n;i++)
	{
		for(j=0;book[i].a[j];j++)
		{
			for(k=65;k<91;k++)
			{
				if(book[i].a[j]==k)
					zimu[k-65]++;
			}
		}
	}
	for(i=0;i<26;i++)
	{
         if(zimu[i]>maxbk)
		 {
			 maxbk=zimu[i];
			 maxzm=i;
		 }
	}
	c1=maxzm+65;
	printf("%c\n",c1);
	printf("%d\n",maxbk);
	for(i=0;i<n;i++)
	{
		for(j=0;book[i].a[j];j++)
		{
			if(book[i].a[j]==c1)
			{
				lm[w]=book[i].num;
				w++;
				continue;
			}

		}
	}
	for(i=0;i<w;i++)
		printf("%d\n",lm[i]);

		
		

	return 0;
}