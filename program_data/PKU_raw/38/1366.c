

int days(int m1,int m2,int e[])
{
	int sum=0;
	for(int i=m2;i<m1;i++)
		sum+=e[i];
	cout<<sum<<endl;
	return sum+1;
}


int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int k;
		cin>>k;
		double a[200];
		for(int i=0;i<k;i++)//????
			cin>>a[i];
		double sum=0,average;
		for(int i=0;i<k;i++)//?????
			sum+=a[i];
		average=sum/k;
		sum=0;
		for(int i=0;i<k;i++)
			sum+=(a[i]-average)*(a[i]-average);
		sum=sum/k;//????
		cout<<fixed<<setprecision(5)<<sqrt(sum)<<endl;
	}
 return 0;

}


