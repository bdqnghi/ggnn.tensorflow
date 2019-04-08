void main()
{
	int n,a[301],x,i,j,p=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	
		scanf("%d",&a[i]);
	
	for(i=1;i<=n;i++)
	{for(j=1;j<i;j++)
			if(a[i]==a[j]) break;
		    if(j>=i) 
			{
				if(p>0) printf(",");
				printf("%d",a[i]);
				
				p++;
			}
	}
}