
int main()
{
	int a[104][104];
	int h,l;
	cin>>h>>l;
	for(int i=0;i<104;i++)
		for(int k=0 ;k<104 ;k++)
			a[i][k]=-999;
	for(int i=1;i<=h;i++)
		for(int k=1 ;k<=l ;k++)
			cin>>a[i][k];
	int printer=a[1][1];
	for(int i=1;i<=l;i++)
	{
        int k=0;
		printer=a[1+k][i-k];
		while(printer!=-999)
		{
			cout<<printer<<endl;;
			k++;
			printer=a[1+k][i-k];
		}
	}
	for(int i=2;i<=h;i++)
	{
        int k=0;
		printer=a[i+k][l-k];
		while(printer!=-999)
		{
			cout<<printer<<endl;;
			k++;
			printer=a[i+k][l-k];
		}
	}
	return 0;
}

