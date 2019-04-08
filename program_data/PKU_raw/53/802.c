int main()
{
	int i,j,k=1,n,result[300],tem[300];
	scanf("%d",&n);
	scanf("%d",&tem[0]);
	result[0]=tem[0];
	for (i=1;i<n;i++)
	{
		scanf("%d",&tem[i]);
		for(j=0;j<i;j++)
		{
			if(tem[i]==result[j])
				break;
			if(j==i-1)
			{
				result[k]=tem[i];
				k++;
			}
		}
	}
	for (i=0;i<k-1;i++)
	{
		printf("%d,",result[i]);
	}
	printf("%d",result[k-1]);
	return 0;
}
