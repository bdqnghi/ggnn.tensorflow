int main()
{
	int m,a[1000],i,n,j,k;
	scanf("%d",&m);
	char b[1000][27];
	int count[26]={0};
	for(i=0;i<m;i++)
	{
		scanf("%d %s",&a[i],b[i]);
	}
	for(i=0;i<m;i++)
	{
		n=strlen(b[i]);
		for(j=0;j<n;j++)
		{
			for(k=0;k<26;k++)
			{
				if(b[i][j]==k+65)count[k]++;
			}
		}
	}
	int max,maxk;
	max=count[0];
	maxk=0;
	for(k=0;k<26;k++)
	{
		if(count[k]>max)
		{
			max=count[k];
			maxk=k;
		}
	}
	char mauthor;
	mauthor=maxk+65;
	printf("%c\n%d\n",mauthor,max);
	for(i=0;i<m;i++)
	{
		n=strlen(b[i]);
		for(j=0;j<n;j++)
		{
				if(b[i][j]==mauthor)
				{
					printf("%d\n",a[i]);
					break;
				}
		
		}
	}
	return 0;
}
