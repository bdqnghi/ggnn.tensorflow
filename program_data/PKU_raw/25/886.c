int main()
{
	int n,m,i,j,num[101]={0};
	cin>>n;
	num[0]=2;
	if(n==0) cout<<'1'<<endl;
	else
	{
		while(n>1)
		{
			for(i=100;i>=0;i--)
			{
				if(num[i]!=0)
					break;
			}
			for(j=0;j<=i;j++)
			{
				num[j]=num[j]*2;
			}
			for(j=0;j<=i;j++)
			{
				if(num[j]>=10)
				{
					num[j]=num[j]-10;
					num[j+1]=num[j+1]+1;
				}
			}
			n--;
		}
		for(i=100;i>=0;i--)
		{
			if(num[i]!=0)
				break;
		}
		for(j=i;j>=0;j--)
			cout<<num[j];
		cout<<endl;
	}
		return 0;
}

