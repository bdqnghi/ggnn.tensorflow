//?????

void main()
{
	int n,i,j,k=0;
	double dot[100][2],dis[4950],t,m;
	double max(double a[],int n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&dot[i][0],&dot[i][1]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			t=(dot[i][0]-dot[j][0])*(dot[i][0]-dot[j][0])+(dot[i][1]-dot[j][1])*(dot[i][1]-dot[j][1]);
			dis[k]=sqrt(t);
			k++;
		}
	}
	m=max(dis,k-1);
	printf("%.4lf\n",m);
}

double max(double a[],int n)
{
	double t;
	int i;
	t=a[0];	
	for(i=1;i<n;i++)
	{
		if(a[i]>t)
			t=a[i];
	}
	return(t);
}