int main()
{
    int t;
    cin>>t;
    for(int i = 0 ; i < t ; i++)
    {
            int n,m;
            cin>>m>>n;
            int num[110][110];
            for(int j = 0 ; j < m ; j++)
                    for(int k = 0 ; k < n ; k++)cin>>num[j][k];
            int sum=0;
			if(m==1 && n!=1)
		{
				for(int j = 0 ; j < n ; j++)sum=sum+num[0][j];
				cout<<sum<<endl;
		}
		else if(m!=1 && n==1)
	{
			for(int j = 0 ; j < m ; j++)sum=sum+num[m][0];
			cout<<sum<<endl;
	}
            else if(m==1 && n==1)cout<<num[0][0]<<endl;
			else
		{for(int j = 0 ; j < n ; j++)sum=sum+*(*num+j);
            for(int j = 0 ; j < n ; j++)sum=sum+*(num[m-1]+j);
            for(int j = 1 ; j < m-1 ; j++)sum=sum+**(num+j);
            for(int j = 1 ; j < m-1 ; j++)sum=sum+*(*(num+j)+n-1);
            cout<<sum<<endl;
		}
    }    return 0;
}
