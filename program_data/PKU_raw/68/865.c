int main()
{
	int n,i=0,j=0,m[100]={0},t,k,flag[2]={0,0};
	cin>>n;
	for(i=6;i<=n;i+=2)
	{
		for(j=3;j<=i/2;j+=2)
		{
			flag[0]=0;
			for(t=3;t<=sqrt(j);t+=2)
			{
				if(j%t==0)
				{
					flag[0]=1;
					break;
				}
			}
			if(flag[0]==1)
			{
				continue;
			}
			flag[1]=0;
			for(k=3;k<=sqrt(i-j);k+=2)
			{
				if((i-j)%k==0)
				{
					flag[1]=1;
					break;
				}
			}
			if(flag[1]==1)
				continue;
			else
			{
				cout<<i<<'='<<j<<'+'<<i-j<<endl;
				break;
			}
		}
	}
	return 0;
}


	