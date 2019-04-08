double b[10];
double Input(double a[],double n)
{
    int i=0;
	for(i=0;i<n;i++)
		scanf("%lf",&a[i]);
	return a[10];
}
double Sum(double a[],double n,double sum)
{
	int i=0;
	for(i=0;i<n;i++)
		sum=sum+a[i];
	//printf("%lf",sum);
	return sum;
}
double GPAI(double a[],double n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>=90&&a[i]<=100)
			a[i]=4;
		else if(a[i]>=85&&a[i]<=89)
			a[i]=3.7;
		else if(a[i]>=82&&a[i]<=84)
			a[i]=3.3;
		else if(a[i]>=78&&a[i]<=81)
			a[i]=3.0;
		else if(a[i]>=75&&a[i]<=77)
			a[i]=2.7;
		else if(a[i]>=72&&a[i]<=74)
			a[i]=2.3;
		else if(a[i]>=68&&a[i]<=71)
			a[i]=2.0;
		else if(a[i]>=64&&a[i]<=67)
			a[i]=1.5;
		else if(a[i]>=60&&a[i]<=63)
			a[i]=1.0;
		else
			a[i]=0;
	}
	return a[10];
}
double GPAII(double a[],double b[],double n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		a[i]=a[i]*b[i];
	}
	return a[10];
}
void check(double a[10],double n)
{
	int i=0;
	for(i=0;i<n;i++)
		printf("%lf  ",a[i]);
}
int main()
{
	double n;
	scanf("%lf",&n);
	double x[10];
	double y[10];
	Input(x,n);
	Input(y,n);
	GPAI(y,n);
	GPAII(y,x,n);
	double p,q;
	double gpa;
	p=0;
	q=0;
	gpa=0;
	p=Sum(x,n,p);
	q=Sum(y,n,q);
	gpa=1.0*q/p;
	printf("%.2lf",gpa);
	return 0;
}
