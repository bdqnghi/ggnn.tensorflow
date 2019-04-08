int main(int argc, char* argv[])
{
	int n,i,t,k;
	double a[100],b[100],max=0,c;
	scanf("%d",&n);
	for (k=0;k<n;k++)
	{
		double x,y;
		scanf("%lf%lf",&x,&y);
		a[k]=x,b[k]=y;
	}
	for(i=0;i<n;i++)
	{
		for(t=0;t<n;t++)
		{
			c=sqrt((a[t]-a[i])*(a[t]-a[i])+(b[t]-b[i])*(b[t]-b[i]));
			if(c>max)
				max=c;
		}
	}


		printf("%.4lf\n",max);
	return 0;
}
