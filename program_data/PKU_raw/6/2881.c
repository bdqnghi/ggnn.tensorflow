//******************************
//??:???????
//??:2013.12.6
//******************************
int main()
{
	int p=0,i=0,j=0,k=0,n=0,m=0,*q=NULL;
	cin>>k;
	for(p=1;p<=k;p++)
	{
		cin>>m>>n;
		int sum=0,a[100];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				cin>>a[j];
			 q=a;
		    while(q<=&a[n-1])
			{
				if(i==0||i==m-1)
				{	sum=sum+*q;   q++;  }
				else
				{
					if(q==&a[0]||q==&a[n-1])
						sum=sum+*q;  
					q++;
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}