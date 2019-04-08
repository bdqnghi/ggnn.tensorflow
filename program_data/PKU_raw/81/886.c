int a[5]={0,1,2,3,4};
int change(int m,int n)
{
	int t;
	if(m<5&&m>-1&&n<5&&n>-1)
	{
		t=a[m];
		a[m]=a[n];
		a[n]=t;
		return 1;
	}
	else	return 0;
}
int main()
{
	int num[5][5],m,n;
	for(m=0;m<5;m++)
		for(n=0;n<5;n++)	cin>>num[m][n];
	cin>>m>>n;
	if(change(m,n))
	{
		for(m=0;m<5;m++)
		{
			cout<<num[a[m]][0];
			for(n=1;n<5;n++)
			{
				cout<<" "<<num[a[m]][n];
			}
			cout<<endl<<endl;
		}
	}
	else cout<<"error"<<endl;
	return 0;
}