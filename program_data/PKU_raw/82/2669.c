int main()
{
	int a[100][2],i,j,sum=0,n,sum_max=0;
	scanf("%d",&n);
	printf("\n");
	for(i =0;i<n;i++)
	{          
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}	            
	}
	for(i=0;i<n;i++)
	{
		if(((a[i][0] >= 90) && (a[i][0] <= 140)) && ((a[i][1] <= 90) && (a[i][1] >= 60)))
		{		
			sum+=1;
		}
		else 
		{
			if(sum>sum_max)sum_max = sum;
			sum = 0;
		}
	}
	if(sum>sum_max)sum_max=sum;
	printf("%d",sum_max);
	return 0;
}
