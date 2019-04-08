int main()
{
	int n,i,j,k;
	cin>>n;
	double x,y,z=0,l,a[100],b[100];
	for (i=0;i<n;i++)
	{
		cin>>x>>y;
		a[i]=x,b[i]=y;
	}
	for (j=0;j<n;j++)
	{
		for (k=0;k<n;k++)
		{
			l=pow((a[j]-a[k]),2)+pow((b[j]-b[k]),2);
			if (l>z)
				z=l;
		}
	}
	printf("%.4f\n",pow(z,0.5));
	return 0;
}