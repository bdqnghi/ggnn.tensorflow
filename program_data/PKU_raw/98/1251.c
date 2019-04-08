int main()
{
	int i, n;//???
	cin>>n;
	char a[50];//??
	int sum=0;//?????
	int num=0;//????
	char *p=NULL;
	cin>>a;
	cout<<a;
	num=strlen(a);
	sum=num;
	for(i=0;i<n-1;i++)
	{
		cin>>a;//??????????????
		num=strlen(a);
		sum=num+sum+1;
		if(sum==num+1)
		{
			for(p=a;p<num+a;p++)//??????
			{
			 cout<<*p;
			}
			sum--;
		}
		else
		{
			if(sum<80&&sum!=num+1)
		{
			cout<<' ';
			for(p=a;p<num+a;p++)//??????
			{
			 cout<<*p;
			}
			
		}
		
		if(sum==80)
		{
			cout<<' ';
			for(p=a;p<num+a;p++)//??????
			{
			 cout<<*p;
			}
			cout<<endl;
			sum=0;
		}
		if(sum>80)//??
		{
			sum=num;
			
			cout<<endl;
			for(p=a;p<num+a;p++)
			{
			 cout<<*p;
			}
		}
		}
	}

	
	return 0;
}