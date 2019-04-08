int main()
{
	int i,j,n;
	float x[100],y[100];
	double max=0.0,z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f %f",&x[i],&y[i]);
	for(j=0;j<n;j++)
	{
		for(i=0;i<j;i++){
		z=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		if(z>max)
			max=z;}
	}
	printf("%.4f\n", max);
}
		