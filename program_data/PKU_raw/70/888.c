int main()
{
	int n=0,i=0,j=0;
	double x[100],y[100],dis=0,temp=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x[i-1];
		cin>>y[i-1];
	}
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			temp=sqrt((x[i-1]-x[j-1])*(x[i-1]-x[j-1])+(y[i-1]-y[j-1])*(y[i-1]-y[j-1]));
			if(temp>dis)
			{
				dis=temp;
			}
		}
	}
	printf("%.4f\n", dis);
	return 0;
}
