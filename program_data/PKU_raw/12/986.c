int main()
{
	int a[16],i,k,j,sum=0,m;
	
	for(k=1; ;k++)
	{
		sum=0;
		scanf("%d",&a[0]);
		if(a[0]==-1) break;
		if(a[0]!=-1)
		{
			for(i=1; ;i++)
			{
				scanf("%d",&a[i]);
				if(a[i]==0) 
				{
					m=i;
					break;
				}
			}
		}
		for(i=0;i<m-1;i++)
		{
			for(j=i+1;j<m;j++)
			{
				if(a[i]==2*a[j]||a[j]==2*a[i])
					sum=sum+1;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}