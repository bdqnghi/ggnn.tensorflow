int main()
{
	int n,i,j,max=1;
	char x[600]={0},y[600][600]={0};
	scanf("%d%s",&n,x);
	int len=strlen(x);
	for(i=0;i<len-n+1;i++)
	{
		for(j=0;j<n;j++)
			y[i][j]=x[i+j];
	}
	int flag[600]={0};
	int time[600];
	for(i=0;i<600;i++)
		time[i]=1;
	for(i=0;i<len-n;i++)
	{
		if(flag[i]==1)continue;
		for(j=i+1;j<len-n+1;j++)
		{
			if(strcmp(y[i],y[j])==0)
			{
				time[j]++;
				time[i]++;
				flag[j]=1;
			}	
		}
		if(time[i]>max)
			max=time[i];
	}
	if(max==1)printf("NO\n");
	else
	{
		printf("%d\n",max);
		for(i=0;i<=len-n;i++)
		{
			for(j=i-1;j>=0;j--)
			{
				if(strcmp(y[j],y[i])==0)
					goto L;
			}
			if(max==time[i])
				printf("%s\n",y[i]);
L:;
		}
	}
	return 0;
}