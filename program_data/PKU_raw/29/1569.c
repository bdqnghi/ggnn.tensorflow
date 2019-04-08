int main()
{
	int m,n,i,j;
	double f1=1,f2=1,f;
	double sum=0;
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>n;//??n?
		for(j=1;j<=n;)//???j?1-n
		{
			f1=f1+f2;
			sum=sum+f1/f2;//?????
			f2=f2+f1;
			sum=sum+f2/f1;//?????
			j=j+2;
		}
		if(n%2!=0)//??n???
			sum=sum-f2/f1;//?????????
		printf("%.3f",sum);//??
		cout<<endl;
		sum=0;
		f1=f2=1;//???
	}
	
	return 0;
}