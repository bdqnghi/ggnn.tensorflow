int main()
{
	int i, number;
	cin>>number;//???
	for(i=0;i<number;i++)
	{
		int m,n;
		cin>>m>>n;//hang lie
		int a[100][100];//????
		int *p=NULL,*q=NULL,i;
	      for(p=*a;p<*a+n*m;p++)//input
		{
			cin>>*p;
		}
		int sum=0;
		for(p=*a;p<*a+n;p++)//add hang
		{
			sum=sum+*p;
		}
		if(m!=1)//??????
		{
		for(p=*a+(m-1)*n;p<*a+m*n;p++)//add hang
		{
			sum=sum+*p;
		}
		}
		for(p=*a+n;p<*a+(m-1)*n;p=p+n)//add lie
		{
			sum=sum+*p+*(p+n-1);
		}
		cout<<sum<<endl;//output
	}
	
	return 0;
}