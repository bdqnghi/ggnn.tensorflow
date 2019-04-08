int main()//???
{
	int N,a ,b[501],c[501],j=0,i;//????
	cin>>N;//??N
	for( i=1;i<=N;i++)//????
	{
		cin>>b[i];
	}
	for( i=1;i<=N;i++)//??????
	{
		if(b[i]%2!=0)
		{
			j++;
			c[j]=b[i];
		}

	}
	int t=0;
	for( i=1;i<=j;i++)//????
		for(int m=1;m<=j-1;m++)
		{
			if(c[m]>c[m+1])
			{
				t=c[m];
				c[m]=c[m+1];
				c[m+1]=t;
			}
		}
		for( i=1;i<=j;i++)//??
		{
			if(i==1)
			    cout<<c[1];
			else
				cout<<","<<c[i];
		}
		return 0;//??
}