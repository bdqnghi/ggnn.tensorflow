int main()
{
	int n,k;
	cin>>n>>k;
	int a[n+1];
	memset(a,0,sizeof(a));
	a[n]=n+k;
	for(int i=1;;i++)
		{
		for(int j=n;j>=2;j--)
			{if((a[j]*n)%(n-1)!=0)
				{a[n]+=n;break;}
			else
				a[j-1]=a[j]*n/(n-1)+k;}
		if(a[1]!=0)
			break;
		}
	cout<<a[1]<<endl;
return 0;
}
