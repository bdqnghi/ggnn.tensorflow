int main(int argc, char* argv[])
{
	int n ,i,j,t=0;
	double x[99],y[99],s[999],max,h[999],z[999];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&x[i],&y[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			h[t]=x[i]-x[j];
			z[t]=y[i]-y[j];
			s[t]=sqrt(pow(h[t],2)+pow(z[t],2));
			t++;
		}
	}
	for(i=0;i<t;i++)
	{
		if(i==0)max=s[i];
		else if(s[i]>max)max=s[i];
	}
	printf("%.4lf",max);
	return 0;
}


		
		






