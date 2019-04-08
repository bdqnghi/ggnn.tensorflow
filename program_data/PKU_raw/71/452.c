int main()
{
	int n,i,j,y,m1,m2,sum,sum1,sum2;
	int a[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	int b[12]={0,31,29,31,30,31,30,31,31,30,31,30};
	cin>>n;
    for(i=1;i<=n;i++)
	{
		sum1=0;
		sum2=0;
		cin>>y>>m1>>m2;
        if(y%4==0&&y%100!=0||y%400==0)
		{
			for(j=0;j<=m1-1;j++)
				sum1+=b[j];
		    for(j=0;j<=m2-1;j++)
				sum2+=b[j];
			sum=sum2-sum1;
			if(sum%7==0)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else
		{
            for(j=0;j<=m1-1;j++)
				sum1+=a[j];
		    for(j=0;j<=m2-1;j++)
				sum2+=a[j];
			sum=sum2-sum1;
			if(sum%7==0)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}

return 0;
}