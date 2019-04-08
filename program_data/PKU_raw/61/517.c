

int f[100],i ,j ,k;

void cal()
{
	f[0]=1;
	f[1]=1;
	f[2]=1;
	int i;
	for(i=3;i<21;i++)
	{
		f[i] = f[i-1] + f[i-2];
	}
}
int main()
{
	int n;
	cin>>n;
	cal();
	while(n--)
	{
		int m;
		cin>>m;
		cout<<f[m]<<endl;
	}
	return 0;
}
