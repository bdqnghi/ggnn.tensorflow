double av(int,double[]);
double sq(int,double,double[]);
int main()
{   
	int k,i;
	cin>>k;

	for(i=0;i<k;i++)
	{
		int n;
		double x[100];
		cin>>n;
		int j;
		for(j=0;j<n;j++)
			cin>>x[j];

		printf("%.5f\n",sq(n,av(n,x),x));
	}

	return 0;
}
double av(int n,double x[])
{
	int i;
	double sum=0.0;
	for(i=0;i<n;i++)
		sum=sum+x[i];

	return sum/((double)n);
}
double sq(int n,double av,double x[])
{
    int i;
	double sum=0.0;
	
	for(i=0;i<n;i++)
		sum=sum+(av-x[i])*(av-x[i]);
	
	sum=sum/((double)n);

	return sqrt(sum);
}