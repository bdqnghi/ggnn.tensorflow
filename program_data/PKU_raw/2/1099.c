

int main()
{
	int *p;
	char q[1000][30];
	int shu[26]={0};
	char zm[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int n,i,j,k;
	int len,max=0;
	scanf("%d",&n);
	p=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		len=0;
		scanf("%d %s", &p[i],q[i]);
		len=strlen(q[i]);
		for(j=0;j<len;j++)
		{
			for(k=0;k<26;k++)
			{
				if(q[i][j]==zm[k])
					shu[k]++;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(shu[i]>max)
		{
			max=shu[i];
			k=i;
		}	
	}	
	printf("%c\n%d\n",zm[k],shu[k]);	
	for(i=0;i<n;i++)
	{
		len=strlen(q[i]);
		for(j=0;j<len;j++)
		{
			if(q[i][j]==zm[k])
				printf("%d\n",p[i]);
		}
	}
	free(p);
	return 0;
}
