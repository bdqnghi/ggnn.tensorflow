int main()
{
	int a[4],b;
	char cc;
	cin>>b;
	a[0]=b%10;
	b=b/10;
	a[1]=b%10;
	b=b/10;
	a[2]=b%10;
	b=b/10;
	a[3]=b%10;
	b=b/10;
	if(a[3]!=0)
		cout<<a[0]<<a[1]<<a[2]<<a[3];
	else if(a[2]!=0)
		cout<<a[0]<<a[1]<<a[2];
	else if(a[1]!=0)
		cout<<a[0]<<a[1];
	else cout<<a[0];



	return 0;
}

