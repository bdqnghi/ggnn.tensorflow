//****************************
//?????????
//???2013.12.21
//****************************
int main()
{
	int n=0,i=0,j=0,k=0;
	double x[100],y[100],dis[400],max=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			dis[k++]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
	max=dis[0];
	for(i=0;i<k;i++)
	{
		if(dis[i]>max)
			max=dis[i];
		else
			continue;
	}
	printf("%.4f\n",max);
	return 0;
}