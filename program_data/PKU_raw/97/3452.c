int main()
{
	int n,i;
	cin>>n;
	int zz[6]={100,50,20,10,5,1};
	int z[6];
	for ( i= 0 ; i < 6 ;i ++ )
	{
		z[i]=n / zz[i];
		n -= z[i]*zz[i];
	}
	for ( i = 0 ; i < 6; i ++ )
		cout<<z[i]<<endl;
}