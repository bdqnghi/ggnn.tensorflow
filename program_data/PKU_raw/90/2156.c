
int function(int m,int n,int min)
{
	if(n==1)return 1;
	int a=0;
	for(int i=min;i<=m/n;i++)                    //bug :??min
		a+=function(m-i,n-1,i);
	return a;
}

int main()
{
	int t,m,n;
	cin>>t;
	for(int w=0;w<t;w++)
	{
		cin>>m>>n;
		cout<<function(m,n,0)<<endl;
	}
	return 0;
}