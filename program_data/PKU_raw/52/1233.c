void main()
{
	int i,j,k,m,n,a[100]={15, 3, 76, 67, 84, 87, 13, 67, 45, 34, 45};
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)      /* *(a+i)=rand() % 100; */
		scanf("%d",a+i);
//	for(i=0;i<n;i++)printf("%d ",*(a+i));	printf("\n");
	for(i=0;i<m;i++)
	{
		k=a[n-1];
		for(j=0;j<n-1;j++)a[n-1-j]=a[n-2-j];
		a[0]=k;
	}
	for(i=0;i<n-1;i++)printf("%d ",*(a+i));	printf("%d\n",a[i]);
}