double average(double *p,int n)
{
	int i;double sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+*(p+i);
	}
	return sum/n;
}
double add(double *p,double x,int n)
{
	int i;double sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+(*(p+i)-x)*(*(p+i)-x);
	}
	sum=sqrt(sum/n);
	return sum;
}
int main()
{
	int n,m,i,j;
	cin>>m;
	double a[1500],x,y;
	for(j=1;j<=m;j++)
	{
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		x=average(a,n);
		y=add(a,x,n);
		cout<<fixed<<setprecision(5)<<y<<endl;
	}
	return 0;
}



	