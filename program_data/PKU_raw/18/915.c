int main()
{
	int n,i,j,k;
	cin>>n;
	int n1=n;
while(n1)
{
	int a[n][n],sum=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>*(*(a+i)+j);
	for(i=n;i>1;i--)
	{
		for(j=0;j<i;j++)
		{
			int min=*(*(a+j));
			for(k=1;k<i;k++)
				if(*(*(a+j)+k)<min)
					min=*(*(a+j)+k);
			for(k=0;k<i;k++)
				*(*(a+j)+k)=*(*(a+j)+k)-min;
		}
		for(j=0;j<i;j++)
		{
			int min=*(*a+j);
			for(k=1;k<i;k++)
				if(*(*(a+k)+j)<min)
					min=*(*(a+k)+j);
			for(k=0;k<i;k++)
				*(*(a+k)+j)=*(*(a+k)+j)-min;

		}
		sum=sum+*(*(a+1)+1);
		for(j=2;j<i;j++)
			for(k=0;k<i;k++)
				*(*(a+k)+j-1)=*(*(a+k)+j);
		for(j=2;j<i;j++)
			for(k=0;k<i;k++)
				*(*(a+j-1)+k)=*(*(a+j)+k);

	}
	cout<<sum<<endl;
n1--;
}
}