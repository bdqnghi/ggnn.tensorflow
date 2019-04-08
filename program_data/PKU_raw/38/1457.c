int main()
{
	int k,n;
	double x[100];
	cin>>k;
	for(int i=0;i<k;i++)
	{
		double sum1=0,aver,sum2=0,result;
		double *p;
		cin>>n;
		for(p=x;p<x+n;p++)
		{
			cin>>*p;
			sum1+=*p;
		}
		aver=sum1/n;
		for(p=x;p<x+n;p++)
		{
			sum2+=(*p-aver)*(*p-aver);
		}
		result=sqrt(sum2/n);
		cout<<fixed<<setprecision(5)<<result<<endl;
	}
	return 0;
}