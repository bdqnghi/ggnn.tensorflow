int main()
{
	int n,mm,maxj,i,j,k,max;
	scanf("%d",&n);
	int * height=(int*)malloc(sizeof(int)*n);
	int * amount=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&height[i]);
		amount[i]=1;
	}
	max=1;
		for(j=n-1;j>=0;j--)
		{
			maxj=1;
			for(k=j+1;k<n;k++)
			{
				
				if(height[j]>=height[k])
				{					
					amount[j]=amount[k]+1;
					if(amount[j]>=maxj)
					{
						maxj=amount[j];
					}
				}
			}
			amount[j]=maxj;
			if(maxj>=max)
			{
				max=maxj;
			}
	}
	printf("%d",max);
	return 0;
}
