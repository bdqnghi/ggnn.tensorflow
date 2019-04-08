void main()
{
	int n,m,i,j,k;
	int (*p)[200];
	p=(int (*)[200])malloc(200*200*sizeof(int));
	for(i=0;i<200;i++)
		for(j=0;j<200;j++)
		{
			*(*(p+i)+j)=-32767;
		}
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			scanf("%d",*(p+i)+j);
		}
	for(k=0;k<=n+m-2;k++)
		for(i=0;i<=k && i<n;i++)
		{
			j=k-i;
			if(*(*(p+i)+j)>-32767)
			printf("%d\n",*(*(p+i)+j));
		}
}
