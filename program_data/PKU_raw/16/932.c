int main()
{
	int n,i,j,k;
	cin>>n;
	int a[4];
	if(n==10000) cout<<"00001"<<endl;
	else if(n/10==0) j=0;
	else if(n/100==0) j=1;
	else if(n/1000==0) j=2;
	else j=3;
	for(i=j;i>=0;i--)
		{a[i]=n/pow(10,(double)i);
	     n=n-pow(10,(double)i)*a[i];}
	for(k=0;k<=j;k++)
	{cout<<a[k];}
	return 0;
}