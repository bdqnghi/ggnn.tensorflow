int main()
{
	int n,year,moon1,moon2,p,q,i,sum;
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	for(n;n>0;n--)
	{
		cin>>year>>moon1>>moon2;
		p=(moon1>moon2)?moon1:moon2;
		q=(moon1<moon2)?moon1:moon2;
		sum=0;
		day[1]=(year%4==0&&year%100!=0||year%400==0)?29:28;
		for(i=q;i<=p-1;i++)
			sum+=day[i-1];
		if(sum%7==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
