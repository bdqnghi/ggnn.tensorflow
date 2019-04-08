
int main()
{
	int n,a[120][120]={0},i,N,j,sum,k,ii,jj,all,zhong=999;
	cin>>n;
	N=n;
	all=N;
for(jj=1;jj<=N;jj++)
{
	n=N;sum=0;
	for(i=1;i<=N;i++)
			for(j=1;j<=N;j++)
				cin>>*(*(a+i-1)+j-1);
	for(k=1;k<=N-1;k++)
	{

		
		
		for(ii=0;ii<=n-1;ii++)
		{
			zhong=999;

			for(i=0;i<=n-1;i++)
			{
				if(*(*(a+ii)+i)<=zhong)
					zhong=*(*(a+ii)+i);
			}
			for(i=0;i<=n-1;i++)
				*(*(a+ii)+i)-=zhong;
		}
				for(ii=0;ii<=n-1;ii++)
		{
			zhong=999;

			for(i=0;i<=n-1;i++)
			{
				
				if(*(*(a+i)+ii)<=zhong)
					zhong=*(*(a+i)+ii);
			}
			for(i=0;i<=n-1;i++)
				*(*(a+i)+ii)-=zhong;
		}
				sum+=*(*(a+1)+1);
			for(i=1;i<=n-1;i++)
				for(j=0;j<=n-1;j++)
					*(*(a+i)+j)=*(*(a+i+1)+j);
			for(i=1;i<=n-1;i++)
				for(j=0;j<=n-1;j++)
					*(*(a+j)+i)=*(*(a+j)+i+1);
			n--;
	

			
	}cout<<sum<<endl;
}
	
	return 0;
}

				


			


