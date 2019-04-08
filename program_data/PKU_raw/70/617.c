int main(int argc, char* argv[])
{
	int n,i,j;
	double x[9999],y[9999],ls,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&x[i],&y[i]);
	}
	ls=sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]));
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			l=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			if(l>ls) ls=l;
		}
	}
	printf("%.4lf\n",ls);
	return 0;
}