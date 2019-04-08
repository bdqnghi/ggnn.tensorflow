int main()
{
	int i,j,n,num[1000]={0},sum=0,g[1001][2];        //?????????
	char s[1001][2];
	for(i=1;i<1001;i++)                              //?????????????
	{
		n=i;
		cin>>g[i][0];
		cin.get(s[i][0]);
		if(s[i][0]=='\n')
			break;
	}
	for(i=1;i<=n;i++)                                //??????
	{
		cin>>g[i][1];
		cin.get(s[i][1]);
		if(s[i][1]=='\n')
			break;
	}
	cout<<n<<" ";                                    //??????
	for(i=0;i<1000;i++)                              //???????????
		for(j=1;j<=n;j++)
		{
			if(g[j][0]<=i&&g[j][1]>i)
				num[i]=num[i]+1;
		}
	for(i=0;i<1000;i++)                              //????????
	{
		if(sum<=num[i])
			sum=num[i];
	}
	cout<<sum;
	
	return 0;
}


