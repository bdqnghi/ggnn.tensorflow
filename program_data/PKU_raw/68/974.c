

int main()
{
	int sushu[20000]={0},n,i,j,k,count=0,biaoji[50000]={0};
	sushu[0]=2;
	sushu[1]=3;
	k=2;
	biaoji[2]=biaoji[3]=biaoji[5]=1;
	scanf("%d",&n);
	for (i=5;i<n;i=i+2)
	{
		count=0;
		for(j=0;j<k;j++)
		{
			if(i%sushu[j]==0)
			{
				count=1;
				break;
			}
		}
		if (count==0)
		{
			sushu[k]=i;
			biaoji[i]=1;
			k++;
		}
	}
        
	for (i=6;i<=n;i=i+2)
	{
		count=0;
		for (j=0;sushu[j]<=i/2;j++)
		{
			if (biaoji[i-sushu[j]]==1)
			{
				printf("%d=%d+%d\n",i,sushu[j],i-sushu[j]);
				count=1;
				break;
			}
		}
		
	}
        
        
	return 0;
}
