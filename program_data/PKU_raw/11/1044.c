int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int sum=0;
	int i;
	int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	if (a%4!=0)
	{
		if (b==1)
		{
			cout<<c<<endl;
		}
		if (b>1){
		for (i=0;i<b-1;i++)
			sum=sum+m[i];
		sum=sum+c;
		cout<<sum<<endl;}
	}

	if (a%4==0) {
		if (a%100!=0){
		if (b==1)
			cout<<c<<endl;
		if (b>1){
		for (i=0;i<b-1;i++)
			sum=sum+n[i];
		sum=sum+c;
		cout<<sum<<endl;
	}}
	if (a%100==0&&a%400!=0)
	{
		if (b==1)
				{
					cout<<c<<endl;
				}
				if (b>1){
				for (i=0;i<b-1;i++)
					sum=sum+m[i];
				sum=sum+c;
				cout<<sum<<endl;}
	}
	if (a%400==0)
	{
		if (b==1)
					cout<<c<<endl;
				if (b>1){
				for (i=0;i<b-1;i++)
					sum=sum+n[i];
				sum=sum+c;
				cout<<sum<<endl;
			}
	}
	}
	return 0;
}
