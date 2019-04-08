int main()
{
	int n;
	cin>>n;
	int zz[6]={100,50,20,10,5,1};
	int z[6];
	z[0]=n / zz[0];
	n -= z[0]*zz[0];
	z[1]=n / zz[1];
	n -= z[1]*zz[1];
	z[2]=n / zz[2];
	n -= z[2]*zz[2];
	z[3]=n / zz[3];
	n -= z[3]*zz[3];
	z[4]=n / zz[4];
	n -= z[4]*zz[4];
	z[5]=n / zz[5];
	for ( int i = 0 ; i < 6; i ++ )
		cout<<z[i]<<endl;
}