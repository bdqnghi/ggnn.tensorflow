//??:??????
int main()
{
	int i,j,k,num,n,time1,time2,a[100];//????
	cin>>n;//????????
	for(i=0;i<n;i++)
	{
		cin>>num;//??????
		if(num==0)//???????????
			cout<<"60"<<endl;
		else
		{
			for(j=1;j<=num;j++)
				cin>>a[j];//????
			if((a[num]+3*num)<=60)
			{
				cout<<60-3*num<<endl;
				continue;
			}
			for(k=1;k<=num;k++)
			{
				time1=a[k]+3*(k-1);//?????????
				time2=a[k]+3*k;
			
				if(time1>=60)
				{
					cout<<60-3*(k-1)<<endl;//?????????
					break;
				}
				if(time2>=60)
				{
					cout<<a[k]<<endl;
					break;
				}
			}
		}
	}
	return 0;
}