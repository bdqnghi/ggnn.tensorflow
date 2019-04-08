int main()
{
	char c[2000]={0},tc[2000][20]={0};
	int n,i,j,count[2000]={1},max=0;
	scanf("%d",&n);
	scanf("%s",c);
	for(i=0;c[i+n-1]!=0;i++)
	{
		for(j=0;j<n;j++)
		{
			tc[i][j]=c[i+j];
		}
	}
	for(i=1;tc[i][0]!=0;i++)
	{
		for(j=0;j<i;j++)
		{
			if(!strcmp(tc[i],tc[j])) {count[j]++;break;}
			if(j==i-1) count[i]++;
		}
	}
	for(i=0;tc[i][0]!=0;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
		}
	}
	if(max==1) printf("NO\n");
	else
	{
		printf("%d\n",max);
		for(i=0;tc[i][0]!=0;i++)
		{
			if(count[i]==max)
			{
				printf("%s\n",tc[i]);
			}
		}
	}	
	return 0;
}