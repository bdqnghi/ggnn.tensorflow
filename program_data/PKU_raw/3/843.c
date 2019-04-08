int main ()
{
	int a[1000],i,j,n,k;
	int x=0,y=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k) 
			{
				x=1;
				y=1;
			}
			if(x==1) break;          
		}
		if(y==1) break;
	}
	if(x==1) printf("yes");
	if(x==0) printf("no");
	return 0;
}