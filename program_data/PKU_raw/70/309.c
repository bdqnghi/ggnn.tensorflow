void main()
{
	int i,j,p=0;
	double m;
	double b[50]={0};
	float a[10][2]={0};
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f%f",&a[i][0],&a[i][1]);
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			b[p]=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
			p=p+1;
		}
		m=b[0];
		for(i=1;i<50;i++)
		{
			if(b[i]>m)m=b[i];
		}
		printf("%.4f\n",m);

}
