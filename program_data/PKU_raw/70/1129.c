float max(float*d)
{
	float maxd=0;
	for(int i=0;i<1000;i++)
	{
		if(d[i]>maxd)
			maxd=d[i];
	}
	return maxd;
}
main()
{
	int n;
	scanf("%d",&n);
	float p[100][2];
	float d[1000];
	int i,j,k=0;
	for(i=0;i<1000;i++)
		d[i]=0;
	for(i=0;i<n;i++)
		scanf("%f %f",&p[i][0],&p[i][1]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			d[k]=sqrt((p[i][0]-p[j][0])*(p[i][0]-p[j][0])+(p[i][1]-p[j][1])*(p[i][1]-p[j][1]));
			k++;
		}
	}
	float maxd;
	maxd=max(d);
	printf("%.4f",maxd);
}