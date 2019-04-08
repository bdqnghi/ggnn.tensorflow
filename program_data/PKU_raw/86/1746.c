int main()
{
	int n;
	cin>>n;
	int k;
	int a[61];
	while(n--)
	{
		cin>>k;
		if(k==0)  {cout<<"60\n";continue;}
		for(int i=1;i<=k;i++)
			cin>>a[i];
		int num=0;
		for(int i=k;i>=1;i--)
		{
			if( a[i]+i*3-3>60 ) continue;
			if(a[i]+i*3>=60) {num=a[i];break;}
			else {num=60-i*3;break;}
		}
		cout<<num<<endl;
	}
  return 0;
}
