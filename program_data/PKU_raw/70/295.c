
int main(int argc, char* argv[])
{
	int n,i;
	double x[1000],y[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&x[i],&y[i]);
	}
	double d,di=0;
	
	for(i=2;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		    d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])); 
			if(d>di)
			{
				di=d;
			}
		}
	}
	printf("%.4lf",di);


	return 0;
}
