int main()
{
	int n,i,j,num[40]={0},len=1,plus[40]={0};
	num[1]=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=len+1;j++)
		{
			plus[j+1]=num[j]*2/10;
			num[j]=(num[j]*2+plus[j])%10;
		}
		if(num[len+1]>0)
			len++;
	}
	for(i=len;i>=1;i--)
		cout<<num[i];
	return 0;
}