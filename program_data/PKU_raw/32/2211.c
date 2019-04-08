int main()
{
	const int ma=200,mx=50;
	int i,n,k,j;
	int len1[ma]={0},len2[ma]={0};
	int zs1[mx][ma]={0},zs2[mx][ma]={0},ans[mx][ma]={0};
	char num1[mx][ma]={0},num2[mx][ma]={0};
	cin>>n;
	for(k=0;k<n;k++)
	{
		cin.get();
		cin.getline(num1[k],ma);
		cin.getline(num2[k],ma);
		len1[k]=strlen(num1[k]);
		len2[k]=strlen(num2[k]);
	}
	for(k=0;k<n;k++)
	{
		j=0;
		for(i=len1[k]-1;i>=0;i--)
			zs1[k][j++]=num1[k][i]-'0';
		j=0;
		for(i=len2[k]-1;i>=0;i--)
			zs2[k][j++]=num2[k][i]-'0';
		for(i=0;i<len1[k];i++)
		{
			if(i<len2[k])
			{
				if(zs1[k][i]<zs2[k][i])
				{
					zs1[k][i]=zs1[k][i]+10;
					zs1[k][i+1]=zs1[k][i+1]-1;
					ans[k][i]=zs1[k][i]-zs2[k][i];
				}
				else
					ans[k][i]=zs1[k][i]-zs2[k][i];
			}
			else
				ans[k][i]=zs1[k][i]-zs2[k][i];
		}
	}
		for(k=0;k<n;k++)
		{
			if(ans[k][len1[k]]==0)
				len1[k]=len1[k]-1;
			for(i=len1[k];i>=0;i--)
			{
				cout<<ans[k][i];
			}
			cout<<endl;
		}
		return 0;
}