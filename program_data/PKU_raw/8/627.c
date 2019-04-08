void main()
{  
	int i,j,m,n,a[200]={0},b[200]={0},tem,*p,*q;
	p=a;
	q=b;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);


	for(i=0;i<m-1;i++)
		for(j=0;j<m-i-1;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				tem=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=tem;
			}
		}
	printf("%d",a[0]);
	for(i=1;i<m;i++)
		printf(" %d",a[i]);
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(*(q+j)>*(q+j+1))
			{
				tem=*(q+j);
				*(q+j)=*(q+j+1);
				*(q+j+1)=tem;
			}
		}
	for(i=0;i<n;i++)
		printf(" %d",b[i]);
}