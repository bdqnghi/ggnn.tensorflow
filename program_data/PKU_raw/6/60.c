int main()
{
	int k,n,m,i,*p;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d %d",&m,&n);
		int j,sum=0;
		p=(int *)malloc(sizeof(int)*m*n);
		for(j=0;j<m*n;j++)
		{
			scanf("%d",p+j);
		    if(j<n||(j<n*m&&j>=(m-1)*n)||j%n==0||(j+1)%n==0)
				sum+=*(p+j);
		}
		printf("%d\n",sum);

	}
}