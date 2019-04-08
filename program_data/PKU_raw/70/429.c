struct dian 
{
	double x;
	double y;

};	
struct dian dian[100];
void main()
{   
	double max(double a[1000],int n);
	int n,i,j,m=0;
	double k[1000];

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&dian[i].x,&dian[i].y);
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{	k[m]=(dian[i].x-dian[j].x)*(dian[i].x-dian[j].x)+(dian[i].y-dian[j].y)*(dian[i].y-dian[j].y);
		m++;}
	printf("%.4lf",sqrt(max(k,m)));
}
double max(double a[1000],int n)
{
	int i,j;
	double t;

		for(i=0;i<n-1;i++)
			for(j=0;j<n-1-i;j++)
        if(a[j]<a[j+1])
		{	t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;}
       return a[0];
}