int k,i,j,n=0,t;
int a[25],b[25];
main()
{	
	cin>>k;
	for(i=0;i<k;i++) cin>>a[i];
	for(i=0;i<k;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>=a[i]) 
			{
				t=b[j]+1;
				if(t>b[i]) b[i]=t;
				}			
			}
		}
	for(i=0;i<k;i++) if(b[i]>n) n=b[i];
	cout<<n+1;

	}