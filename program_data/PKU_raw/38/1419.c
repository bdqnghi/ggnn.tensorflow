//???????????
int main()
{
	int k,n,i,j;
	double x[1000],*p,average,s;
	p=&x[0];
	cin>>k;
	for (i=0;i<k;i++)
	{
		s=0.0;
		average=0.0;
		cin>>n;
		for (j=0;j<n;j++)
		{
			cin>>*(p+j);
			average+=(*(p+j))/n;//???
		}
		for (j=0;j<n;j++)
			s+=((*(p+j))-average)*((*(p+j))-average)/n;
		s=sqrt(s);//???
		printf("%.5f\n", s);
	}
	return 0;
}