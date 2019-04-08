
int main(int argc, char* argv[])
{
	int n,i,j;
	cin>>n;
	double ju,o;
	double a[100],b[100];
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	double juli(double m,double n,double x,double y);
	double max(double m,double n);
	ju=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			o=juli(a[i],b[i],a[j],b[j]);
			ju=max(o,ju);
		}
	}
	cout<<fixed<<setprecision(4)<<ju<<endl;
	return 0;
}


double juli(double m,double n,double x,double y)
{
	double z;
	z=pow(m-x,2)+pow(n-y,2);
	z=pow(z,0.5);
	return z;
}
double max(double m,double n)
{
	double z;
	if(m>n) z=m;
	else z=n;
	return z;

}