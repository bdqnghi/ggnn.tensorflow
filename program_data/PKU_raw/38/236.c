int main()
{
	int k;
	cin>>k;
	for(int time=0;time<k;time++)
	{
		long double a[1001]={0},*p, sum=0;
	int n;
	cin>>n;
	p=a;
	for(int i=0;i<n;i++)
		cin>>*p++;
	p=a;
	for(int i=0;i<n;i++)
		sum+=*p++;
	long double aver=sum/n,squ=0;
	p=a;
	for(int i=0;i<n;i++)
	squ+=((*p++) -aver)*((*p)-aver);
	long double result=sqrt(squ/n*1.0);

 
	cout<<setprecision(5)<<fixed<<result<<endl;
  
  } 

 return 0;
}