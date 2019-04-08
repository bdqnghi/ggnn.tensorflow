int main()
{
	int year,m1,m2;
	int md[13]={0,3,3,6,1,4,6,2,5,0,3,5,1};
	int n,i,k;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>year>>m1>>m2;
		if(m1>m2)
		{
			m1^=m2;
			m2^=m1;
			m1^=m2;
		}
		if(((year%400==0)||(year%4==0&&year%100!=0))&&(m1<=2&&m2>2))k=1;
		else k=0;
		if((md[m2-1]-md[m1-1]+k)%7==0)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}