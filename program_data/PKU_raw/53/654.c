void main()
{
	int n,a[301],i,j,b[301]={0},g=1;
	int*p1=(a+1),*p2=b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	b[0]=a[0];
	for(i=1;i<n;i++,p1++)
	{
		for(j=0;j<i;j++)
		{	
			if(*p1==a[j])
			break;
		}
		if(j>=i) 
		{
			b[g]=a[i];
		    g++;
		}
	}
	for(i=0;i<g-1;i++,p2++)
	printf("%d,",*p2);
	printf("%d",*p2);
}