int main() {
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int n,year,month1,month2,l,sum;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
	    cin>>year>>month1>>month2;
		sum=0;
		if(month1>month2)
		{
			l=month2;
			month2=month1;
			month1=l;
		}
		if (year%400==0||(year%4==0&&year%100!=0))
		{
			for (int j=month1;j<month2;j++)
			{
				sum+=b[j-1];
			}
		}
		else 
		{
			for (int j=month1;j<month2;j++)
			{
				sum+=a[j-1];
			}
		}
		if (sum%7==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}