int main()
{
	int a;
	cin>>a;
	while(a!=-1)
	{
		int s[15]={0};
	int l=1,m=0;
	s[0]=a;
	do
	{
		cin>>a;
		s[l]=a;
		l++;
	}while(a!=0);
	for(int i=0;i<15;i++)
		for(int j=0;j<15;j++)
			if(s[j]==2*s[i]&&s[i]!=0)
				m++;
	cout<<m<<endl;
	cin>>a;
	}
	return 0;
}
