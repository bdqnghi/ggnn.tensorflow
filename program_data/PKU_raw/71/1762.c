
int main()
{
	const int a1[12]={1,4,4,7,2,5,7,3,6,1,4,6},a2[12]={1,4,5,1,3,6,1,4,7,2,5,7};
	int n,i,year,mon1,mon2;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>year>>mon1>>mon2;
		if(year%4!=0||year%100==0&&year%400!=0)
			if(a1[mon1-1]==a1[mon2-1])cout<<"YES";
			else cout<<"NO";
		else if(a2[mon1-1]==a2[mon2-1])cout<<"YES";
		     else cout<<"NO";
		if(i<n-1)cout<<endl;
	}
	return 0;
}