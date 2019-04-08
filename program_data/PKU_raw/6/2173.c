int main()
{
	int k;//k??????
	cin>>k;
	int m,n;//m???,n???
	int a[110][110];//????????
	for(int i=0;i<k;i++)
	{
		int sum=0;
		cin>>m>>n;
		if(m>1&&n>1)
		{
			for(int t1=0;t1<m;t1++)
		    {
				for(int t2=0;t2<n;t2++)
				cin>>*(*(a+t1)+t2);//??????
		    }
		    for(int k1=0;k1<n;k1++)
			     sum=sum+*(*(a+0)+k1);//??????
		    for(int k2=0;k2<n;k2++)
			     sum=sum+*(*(a+m-1)+k2);//??m???
		    for(int k3=0;k3<m;k3++)
			     sum=sum+*(*(a+k3)+0);//??1???
		    for(int k4=0;k4<m;k4++)
			     sum=sum+*(*(a+k4)+n-1);//??n???
		   sum=sum-*(*(a+0)+0)-*(*(a+m-1)+n-1)-*(*(a+0)+n-1)-*(*(a+m-1)+0);//????????????
		   cout<<sum<<endl;}
		else if(m==1&&n==1)
		{	
			cin>>sum;
		    cout<<sum<<endl;
		}//?????
		else if(m==1&&n>1)
		{
			for(int p1=0;p1<n;p1++)
			{
				cin>>*(*(a+0)+p1);
				sum=sum+*(*(a+0)+p1);
			}
			cout<<sum<<endl;
		}//??1?
		else if(m>1&&n==1)
		{
			for(int p2=0;p2<m;p2++)
			{
				cin>>*(*(a+p2)+0);
				sum=sum+*(*(a+p2)+0);
			}
			cout<<sum<<endl;
		}//??1?
	}
	return 0;
}