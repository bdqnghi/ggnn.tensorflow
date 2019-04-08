//****************************
//???????????
//???2013.12.17
//****************************
int main()
{
	int n=0;
	cin>>n;
	while(n)
	{
		int i=0,k=0,year=0,m1=0,m2=0,sum=0,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		cin>>year>>m1>>m2;
		if(year%400==0||(year%100!=0&&year%4==0))
			a[1]=29;
		if(m1>m2)
		{
			k=m1;
			m1=m2;
			m2=k;
		}
		for(i=m1-1;i<m2-1;i++)
		{
			sum=sum+a[i];
		}
		if(sum%7==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	  n--;
    }
	return 0;    
}
