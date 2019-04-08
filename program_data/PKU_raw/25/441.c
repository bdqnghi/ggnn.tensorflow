int main(){
	int n,i,j,k=0,t;
	int sum[100]={0};
	sum[99]=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=99;j>=0;j--)
		{
		t=sum[j]*2+k;
		if(t<10)
			{
			sum[j]=t;
			k=0;
			}
		else
			{
			sum[j]=t-10;
			k=1;
			}
		}
	}
	for(i=0;sum[i]==0;i++)
		;
	for(j=i;j<=99;j++)
		cout<<sum[j];
	cout<<endl;
	return 0;
}
