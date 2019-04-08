
struct dian
{
	double x;
	double y;
}dian[100];//????

int main()
{
	int n;
	int xm,ym;
	double d,dmax=0.0000;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>dian[i].x>>dian[i].y;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=1;j<n;j++)
		{
			d=(dian[i].x-dian[j].x)*(dian[i].x-dian[j].x)+(dian[i].y-dian[j].y)*(dian[i].y-dian[j].y);
			d=sqrt(d);
			if(d>dmax)
				dmax=d;
		}
	}
	printf("%.4f\n",dmax);
	return 0;
}