void main()
{
	int a[25],A[25]={0},n,i,j,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	A[n-1]=1;
	for(i=n-2;i>=0;i--)
	{
		for(j=i;j<n;j++)
			if(a[i]>=a[j])
			{
				if(A[i]<=A[j])
					A[i]=A[j]+1;
			}
			if (A[i]==0)
				A[i]=1;
	}
	max=A[0];
	for(i=0;i<n;i++)
	{
		if(A[i]>max)
			max=A[i];
	}
	printf("%d",max);
}
