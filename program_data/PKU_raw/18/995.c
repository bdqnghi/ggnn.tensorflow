int main()
{
	int n,i,j,k,min,max,sum,m;
	int a[110][110]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		m=n;
		sum=0;
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>*(*(a+j)+k);
		for(m=n;m>1;m--)
		{
			for(j=0;j<m;j++)
			{
				for(k=0;k<m;k++)
				{
					if(!k)
					{
						min=*(*(a+j)+k);
					}
					else if(min>*(*(a+j)+k))
						min=*(*(a+j)+k);
				}
				for(k=0;k<m;k++)
				{
					*(*(a+j)+k)-=min;
				}
			}
			for(j=0;j<m;j++)
			{
				for(k=0;k<m;k++)
				{
					if(!k)
					{
						min=*(*(a+k)+j);
					}
					else if(min>*(*(a+k)+j))
						min=*(*(a+k)+j);
				}
				for(k=0;k<m;k++)
				{
					*(*(a+k)+j)-=min;
				}
			}
			sum+=*(*(a+1)+1);
			for(j=2;j<m;j++)
				*(*a+j-1)=*(*a+j);
			for(j=2;j<m;j++)
				*(*(a+j-1))=*(*(a+j));
			for(j=2;j<m;j++)
				for(k=2;k<m;k++)
					*(*(a+j-1)+k-1)=*(*(a+j)+k);
		}
		cout<<sum<<endl;
	}	
	return 0;
}