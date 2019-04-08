
double average(int n,double*a)
{
	double*p;
	double sum=0;
	for(p=a;p<a+n;p++)
	{
		sum+=*p;
	}
	return sum/n;
}

double fangcha(int n,double*a)
{
	double*p,sum=0;
	for(p=a;p<a+n;p++)
	{
		sum+=pow((*p-average(n,a)),2);
	}
	return sqrt(sum/n);
}

int main()
{
	int num;
	scanf("%d",&num);
	int i;
	for(i=0;i<num;i++)
	{
		int number;
		scanf("%d",&number);
		double*p;
		double*a=(double*)malloc(sizeof(double)*number);
		for(p=a;p<a+number;p++)
		{
			scanf("%lf",p);
		}
		printf("%.5lf\n",fangcha(number,a));
		free(a);
	}
	return 0;
}