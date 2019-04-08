int main()
{
	int sum,q=0,f,s;//???sum?????q,f?????,s??????
	int n=1,m=1;
	int a[300];
	while(n!=0||m!=0)
	{
		for(int i=1;i<=300;i++)//?????
		{
			a[i-1]=i;
		}
		cin>>n>>m;
		if(n!=1)
		{
			sum=((1+n)*n)/2;
			q=0;
			f=m;
			s=n;
			do
			{
				if(f%s==0)
				{
					f=s;
				}else{
					f%=s;
				}
				sum-=a[f-1];//????
				for(int i=f;i<=s;i++)//??????f??????????????????
				{
					a[i-1]=a[i];
				}
				q++;	
				s--;
				f+=(m-1);
			}while(q<n-1);
			cout<<sum<<endl;
		}else{
			cout<<n<<endl;
		}
	}
	return 0;
}