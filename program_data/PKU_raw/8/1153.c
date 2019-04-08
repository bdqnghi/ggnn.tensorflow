void changeplace(int n,int a[])
{
	int i,j,x;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>=a[j+1])
			{
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
		
	}
}
main()
{
	int n1,n2,k;
	scanf("%d%d",&n1,&n2);
	int *p=(int*)malloc(n1*sizeof(int));
	int *q=(int*)malloc(n2*sizeof(int));
	for(k=0;k<n1;k++)
	scanf("%d",&p[k]);
	for(k=0;k<n2;k++)
	scanf("%d",&q[k]);
	changeplace(n1,p);
	changeplace(n2,q);
	for(k=0;k<n1;k++)
	printf("%d ",p[k]);
	for(k=0;k<n2-1;k++)
	printf("%d ",q[k]);
	printf("%d",q[n2-1]);
	
	
}