void main()
{
	int i,j,k,n;
	double s,temp,a;
	double *p[1000];

	for (i=0;i<=999;i++) *(p+i)=(double *)malloc(sizeof(double));

	scanf("%d",&k);
	for (i=0;i<=k-1;i++)
	{
		scanf("%d",&n);
		for (j=0;j<=n-1;j++) 
			scanf("%lf",*(p+j));
		a=0;
		for (j=0;j<=n-1;j++)
			a=a+**(p+j);
		a=a/n;
		temp=0;
		for (j=0;j<=n-1;j++)
			temp=temp+pow((**(p+j)-a),2);
		s=sqrt(temp/n);
		printf("%.5f\n",s);
	}
}