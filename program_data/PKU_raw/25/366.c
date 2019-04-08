int main()
{
	int flag=0;
    int k,i,j,sum[100001];
	cin>>k;
	memset(sum,0,sizeof(sum));
    sum[0]=1;
	for(i=0;i<k;i++)
	{
		for(j=0;j<=100000;j++)
		{
		   sum[j] *= 2;
		}
		for(j=0;j<=100000;j++)
		{
		   if(sum[j]>=10)
		   {
               sum[j]-=10;
		   	   sum[j+1]+=1;
		   }
		}

	}
	for(i=100000;i>=0;i--)
	{
		if(flag==0&&sum[i]==0)
			continue;
		else if(flag==0&&sum[i]!=0)
		{
			flag=1;
			cout<<sum[i];
		}
		else
			cout<<sum[i];
	}
	return 0;
}