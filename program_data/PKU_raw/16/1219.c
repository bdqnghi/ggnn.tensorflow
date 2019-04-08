int main()
{
	int a[4];
	int n;
	cin>>n;
	a[0]=n/1000;
	a[1]=(n-a[0]*1000)/100;
	a[2]=(n-a[0]*1000-a[1]*100)/10;
	a[3]=n%10;
	if (a[0]==0)
	{
		if (a[1]==0)
		{
			if (a[2]==0)
				cout<<a[3]<<endl;
			else cout<<a[3]<<a[2]<<endl;
		}
		else cout<<a[3]<<a[2]<<a[1]<<endl;
	}
	else cout<<a[3]<<a[2]<<a[1]<<a[0]<<endl;

return 0;

}
