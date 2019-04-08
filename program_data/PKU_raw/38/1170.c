void main()
{
	int n,*pm,i,j,k;
	double *pa[100],*psum,*pave,s,t;
	scanf("%d",&n);
	pm=(int*)malloc(sizeof(int)*n);
	psum=(double*)malloc(sizeof(double)*n);
	pave=(double*)malloc(sizeof(double)*n);
	for(k=0;k<n;k++)
	{
		*(psum+k)=0;
		scanf("%d",pm+k);
		pa[k]=(double*)malloc(sizeof(double)*(*(pm+k)));
		for(i=0;i<*(pm+k);i++)
		{
			scanf("%lf",pa[k]+i);
			*(psum+k)=*(psum+k)+*(pa[k]+i);
		}
		*(pave+k)=*(psum+k)/(*(pm+k));
	}
//	printf("%lf",ave);
	for(k=0;k<n;k++)
	{
		*(psum+k)=0;
		for(i=0;i<*(pm+k);i++)
		{
			*(psum+k)=*(psum+k)+(*(pa[k]+i)-*(pave+k))*(*(pa[k]+i)-*(pave+k));
		}
		s=sqrt(*(psum+k)/(*(pm+k)));
		printf("%.5lf\n",s);
	}
}



