int main()
{
	int n,i,j;
	int re[100];
	for(int x=0;x<100;x++)
		re[x]=0;
	cin>>n;
	if(n==0)
		cout<<"1"<<endl;
	else if(n==1)
		cout<<"2"<<endl;
	else
	{
		re[99]=2;
		for(i=1;i<n;i++)
		{
			j=99;
			while(j!=0)
			{
				re[j]=re[j]*2;
				j--;
			}
			j=99;
			while(j!=0)
			{
				if(re[j]>=10)
				{
					re[j-1]+=re[j]/10;
					re[j]=re[j]%10;
				}
				j--;
			}
		}
		j=0;
		while(re[j]==0)
			j++;
		for(;j<=99;j++)
			cout<<re[j];
		cout<<endl;
	}
	return 0;
}