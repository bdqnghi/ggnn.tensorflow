void main()
{
	char quene[500]={'\0'},boy,girl;
	int i,n,g=0,pair;
	gets(quene);
	n=strlen(quene);
	pair=n/2;
	boy=quene[0];
	for(i=0;i<n;i++)
	{
		if(quene[i]!=boy)
		{
			girl=quene[i];
			break;
		}
	}
	while(pair>0)
	{
		for(i=g;i<n;i++)
		{
			if(quene[i]==girl)
			{
				g=i;
				break;
			}
		}
		for(i=g;i>=0;i--)
		{
			if(quene[i]==boy)
			{
				printf("%d %d\n",i,g);
				pair--;
				quene[i]='a';
				quene[g]='a';
				break;
			}
		}
	}
}