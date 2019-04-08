
void main()
{
	int houwang(int n,int m);
	int n,m,i,c[1000];
	
	for(i=0;;i++)
	{
		scanf("%d %d",&n,&m);
		if(n==0)
		break;
        c[i]=houwang(n,m);
	}
	for(n=0;n<=i-1;n++)
		printf("%d\n",c[n]);

}
int houwang(int n,int m)
{

	int a[301],i,k,b=0;
	
    for(i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(i=1;;i++)

	{  
		b++;
		if(i==n+1) i=1;
		if(b==m)
		{
			for(k=i;k<n;k++)
			{
				a[k]=a[k+1];
				
				
				
			}
			n=n-1;b=0;i=i-1;
		}
		if(n==1) break;
	}
	return(a[1]);
}
	
		

