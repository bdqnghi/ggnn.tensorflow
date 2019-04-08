void main()
{
	int n,i,j,k=0,name[26]={0},max,a[1000],t=0;
	char word[1000][30];
	scanf("%d",&n);
	for(i=-1;i<n;i++)
	{
		gets(word[i]);
	}
	for(j=0;j<26;j++)
	{
	for(i=0;i<n;i++)
	{
		while(word[i][k]!='\0')
		{
			if(word[i][k]=='A'+j)
			{
				name[j]=name[j]+1;
			}
			k=k+1;
		}
		k=0;
	}
	}
	k=0;
	max=name[0];
	j=0;
	for(i=1;i<26;i++)
	{
		if(name[i]>max)
		{	
		max=name[i];
		j=i;}

	}
	for(i=0;i<n;i++)
	{
		while(word[i][k]!='\0')
		{
			if(word[i][k]=='A'+j)
			{
				
				a[t]=i;
				t=t+1;
				k=0;
				break;
			}
			k=k+1;
		}
		k=0;
	}
	printf("%c\n%d\n",'A'+j,max);
	k=0;
	for(i=0;i<t;i++)
	{
		while(word[a[i]][k]!=' ')
		{
			printf("%c",word[a[i]][k]);
			k=k+1;
		}
		printf("\n");
		k=0;
	}
}