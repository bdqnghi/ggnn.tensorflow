int main()
{
	int i,j,k,m,n,num[500],*p;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		if (n==1)
			cout<<1<<endl;
		if (n<m)
			continue;
		p=num;
		for(i=0;i<n;i++)
		{
			*(p+i)=i+1;
		}
		i=0;
		j=0;
		k=0;
		while(k<n-1)
		{
			if(*(p+i)!=0)
				j++;
			if(j==m)
			{
				*(p+i)=0;
				j=0;
				k++;
			}
			i++;
			if(i==n)
				i=0;
		}
		while(*p==0)
			p++;
		cout<<*p<<endl;
	}
	return 0;
}
