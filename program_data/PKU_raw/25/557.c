int main()
{
	int n,ans=2,i,k=0,p;
	char num[1000];
	int m[1000]={0},result[1000]={0};
	
	cin>>n;
	if(n==0)
		cout<<"1"<<endl;
	else if(n<31)
	{
		for(i=1;i<n;i++)
		{
			ans=ans*2;
		}
		cout<<ans<<endl;
	}
	else
	{
		for(i=1;i<30;i++)
		{
			ans=ans*2;
		}
		for(int y=0;y<1000;y++)
		{
			num[k++]=ans%10;
			ans=ans/10;
		}
		for(int l=30;l<n;l++)
		{
			for(i=0;i<1000;i++)
			{
				result[i]=0;
			}
		
			for(i=0;i<1000;i++)
			{
				result[i]=result[i]+num[i]*2;
				if(result[i]>=10)
				{
					result[i]=result[i]%10;
					result[i+1]+=1;
				}
			}
			for(i=0;i<1000;i++)
			{
				num[i]=result[i];
			}
		
		}
		for(i=999;i>=0;i--)
		{
			if(result[i]!=0)
			{p=i;break;}
		}
		for(i=p;i>=0;i--)
		{
			cout<<result[i];
		}
	}

	return 0;
}