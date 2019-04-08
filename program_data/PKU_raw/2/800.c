void main()
{
	int m,a[1000],l[1000],i,j,k,t,time[26]={0},max,q=0;
	char name[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char b[1000][26];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d %s",&a[i],b[i]);
		l[i]=strlen(b[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<l[i];j++)
		{
			for(k=0;k<26;k++)
			{
				if(b[i][j]==name[k]) time[k]++;
			}
		}
	}
	max=time[0];
	for(i=1;i<26;i++)
	{
		if(time[i]>max) 
		{
			max=time[i];
			t=i;
		}
	}
	printf("%c\n",name[t]);
	printf("%d\n",max);
	for(i=0;i<m;i++)
	{
		for(j=0;j<l[i];j++)
		{
			if(b[i][j]==name[t])
			{
				printf("%d\n",a[i]);
			}
		}
	}
}