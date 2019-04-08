int prime(int);
int main()
{
	int n,i,j;
	cin>>n;
	for(i=6;i<=n;i=i+2)
	{
		for(j=3;j<=i/2;j=j+2)
			if(prime(j)&&prime(i-j))
			{
				cout<<i<<'='<<j<<'+'<<i-j<<endl;
				break;
			}
	}
	return 0;
}
int prime(int k)
{
	int i;
	if(k==3||k==5||k==7)return 1;
	else
	{
		for(i=3;i<=sqrt(k);i=i+2)
			if(k%i==0)
				return 0;
		return 1;
	}
}