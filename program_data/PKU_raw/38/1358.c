int main()
{
	int k;//??????
	cin>>k;
	for(int i=0;i<k;i++)
	{
		double x[101],*p=x;//???????
		double n,sum=0;;
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>*(p+j);
			sum+=*(p+j);//????
		}
		double ave,s;
		ave=sum/n;//?????
		sum=0;
		for(int j=0;j<n;j++)	sum+=pow(*(p+j)-ave,2);//????
		s=sqrt(sum/n);
		cout<<fixed<<setprecision(5)<<s<<endl;//??
	}
	return 0;
}