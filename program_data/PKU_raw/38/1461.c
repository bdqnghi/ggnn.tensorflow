
int main()
{
	int m,j;
	scanf("%d",&m);
	for (j=0;j<m;j++)
	{
	int n;
	scanf("%d",&n);
	double *num=(double*)malloc(sizeof(double)*n);

	double sum=0;
	int i;
	for (i=0;i<n;i++)
	{
	    scanf("%lf",num+i);
		sum=sum+num[i];
	}

    
    double E,D,SUM=0;
	E=sum/n;

	for(i=0;i<n;i++)
	{
		num[i]=num[i]-E;
		SUM=SUM+num[i]*num[i];
	}
	D=SUM/n;
    
	printf("%.5lf\n",sqrt(D));
	
	free(num);
}
	return 0;
}