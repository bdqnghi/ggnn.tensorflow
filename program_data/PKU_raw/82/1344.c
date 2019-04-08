


int main()
{
	int i,n,SBP[100],DBP[100],c[100],temp=0,max=0;
	scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&SBP[i]);
			
		scanf("%d",&DBP[i]);
}
	for(i=0;i<=(n-1);i++)
	{
		if((90<=SBP[i]&&SBP[i]<=140)&&(60<=DBP[i]&&DBP[i]<=90))
			c[i]=1;
		else
			c[i]=0;
	}

	
	for(i=0;i<=(n-1);i++)
	{
		if(c[i]==1)
			temp++;
		if(c[i]==0)
			temp=0;

		max=(temp>max)?temp:max;
	}

	printf("%d",max);
	return 0;
	
}