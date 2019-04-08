int hf[30][11];
int work(int m,int n)
{
	if(m==0||m==1)
	{
		hf[m][n]=1;
		return 1;
	}
	if(n==1)
	{
		hf[m][n]=1;
	    return 1;
	}
	if(hf[m][n]!=0)
		return hf[m][n];
	if(m>=n)
	{
		hf[m][n]=work(m-n,n)+work(m,n-1);
		return hf[m][n];
	}
	else
	{
		hf[m][n]=work(m,n-1);
		return hf[m][n];
	}
}
int main()
{
	int n,m,k;
	cin>>k;
	int i,j;
	for(i=1;i<=k;i++)
	{
		cin>>m>>n;
		cout<<work(m,n)<<endl;
	}
	return 0;
}
