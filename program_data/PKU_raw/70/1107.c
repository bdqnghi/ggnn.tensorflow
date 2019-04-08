int main()
{
	int n,i,j,k,m,p;
	scanf("%d",&n);

	float a[100];
	float b[100];
	float c[5000];
	double q;
	float max;

	for (i=0;i<n;i++)
		scanf("%f%f",&a[i],&b[i]);


	m=0;
	for(j=0;j<n;j++)
	{
		for(k=j+1;k<n;k++)
		{
			c[m]=(a[j]-a[k])*(a[j]-a[k])+(b[j]-b[k])*(b[j]-b[k]);
			m++;
		}
	}



	max=c[0];

	for(p=1;p<m;p++)
	{
		if(max<c[p])
			max=c[p];
	}

	q=sqrt(max);

	printf("%.4f",q);

	return 0;
}

		