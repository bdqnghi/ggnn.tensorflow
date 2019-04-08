int main(){
	int n,a,b,i,m;
	double x,z;
	double y[100];
	double sz[100];
	scanf("%d%d%d",&n,&a,&b);
	x=1.0*b/a;
	m=2*n-2;
	for(i=0;i<m;i++)
	{
		scanf("%lf",&(sz[i]));
	}
	for(i=0;i<m;i=i+2)
	{
		y[i]=sz[i+1]/sz[i];
	}
	for(i=0;i<m;i=i+2)
	{
		z=y[i]-x;
		if(z>0.05)
		{
			printf("better\n");
		}
		else if(-z>0.05)
		{
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	
	}
	return 0;
}