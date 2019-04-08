void main()
{
	int n,i,best=0,max=0,a[26]={0},num[100],l,j,k;
	char letter[26]={'A','B','C','D','E','F','G','H','I','J','K',
	'L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},
	writer[100][26];

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&num[i],&writer[i]);
	}
	for(i=0;i<n;i++)
	{
		l=strlen(writer[i]);
		for(j=0;j<l;j++)
		{
			for(k=0;k<26;k++)
			{
				if(writer[i][j]==letter[k]) {a[k]++;break;}
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(max<a[i])
		{
			best=i;max=a[i];
		}
	}
	printf("%c\n",letter[best]);
	printf("%d\n",max);
	for(i=0;i<n;i++)
	{
		l=strlen(writer[i]);
		for(j=0;j<l;j++)
		{
				if(writer[i][j]==letter[best]) 
				{
					printf("%d\n",num[i]);;break;
				}
		}
	}
	
}