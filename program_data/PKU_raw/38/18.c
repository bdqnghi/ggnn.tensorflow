void main()
{
	int k,i,j,n;
	double *S,*a,b;
	scanf("%d",&k);
	S=(double *)malloc(sizeof(double)*k);
	for(i=0;i<k;i++) *(S+i)=0;
	for (i=0;i<k;i++)
	{
		scanf("%d",&n);
		a=(double *)malloc(sizeof(double)*n);
		b=0;
		for (j=0;j<n;j++) 
		{
			scanf("%lf",a+j);
			b+=*(a+j);
		}
		b=b/n;
		for (j=0;j<n;j++) *(S+i)+=(*(a+j)-b)*(*(a+j)-b);
		*(S+i)/=n;
		*(S+i)=sqrt(*(S+i));
		free(a);
	}
	for (i=0;i<k;i++) printf("%.5f\n",*(S+i));
}