int main()
{
	int array[100][100]={0};
	int times,m,n,i,j,k;
	cin>>times;
	m=times;
	while(m--)
	{
		n=times;
		int (*p)[100]=array;
		for(i=0;i<times;i++)
			for(j=0;j<times;j++)
				cin>>*( *(p+i)+j );
		int sum=0;
		for(k=1;k<=times-1;k++)
		{
			int min,now;
			for(i=0;i<n;i++)
			{
				min=*( *(p+i) );
				for(j=1;j<n;j++)
				{
					now=*( *(p+i)+j );
					if(now<min)
						min=now;
				}
				for(j=0;j<n;j++)
					*( *(p+i)+j )=*( *(p+i)+j )-min;
			}
			for(j=0;j<n;j++)
			{
				min=*( *p+j );
				for(i=1;i<n;i++)
				{
					now=*( *(p+i)+j );
					if(now<min)
						min=now;
				}
				for(i=0;i<n;i++)
					*( *(p+i)+j )=*( *(p+i)+j )-min;
			}
			sum=sum+ ( *(*(p+1)+1) );
			if(n==2)
				break;
			for(i=2;i<n;i++)
				for(j=0;j<n;j++)
					*( *(p+i-1)+j )=*( *(p+i)+j );
			for(j=2;j<n;j++)
				for(i=0;i<n-1;i++)
					*( *(p+i)+j-1 )=*( *(p+i)+j );
			n--;
		}
		cout<<sum<<endl;
	}
	return 0;
}
