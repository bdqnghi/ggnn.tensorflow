int cmp(void const* a,void const* b)
{
	return *(int*)a-*(int*)b;
}
int main()
{
	int n;
	while(cin>>n)
	{
		int sum=0;
		if(n==0)
			break;
		int i;int a[1005];int b[1005];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		qsort(a,n,sizeof(a[0]),cmp);
		qsort(b,n,sizeof(b[0]),cmp);
		int p,q,c,d;
		p=0;c=0;q=n-1;d=n-1;
		while(n--)
		{
			if(a[p]>b[c])
			{
		
				sum=sum+200;
				p++;
				c++;
		
			}
			else if(a[q]>b[d])
			{
	
				sum=sum+200;
				q--;
				d--;
			
			}
			else
			{

				if(a[p]<b[d])
				{
				sum=sum-200;
			
				}
			
				if(a[p]>b[d])
				{
					sum=sum+200;
				}
				p++;
				d--;

			}
		}


		cout<<sum<<endl;
	}
	return 0;
}