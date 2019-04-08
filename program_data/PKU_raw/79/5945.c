int a[30],b[30];
int f(int n,int m)
{
	int i,p[301],q=1,r=0;
	for(i=1;i<=n;i++)	p[i]=1;
	i=0;
	while(r<n)
	{
		i++;
		if(i<=n)
		{
		  if(p[i]) 
		  {
			 if(q==m) 
			 {
				 p[i]=0;
			     q=1;
			     r++;
			 }
			 else q++;
		  }
		}
		else i=0;
	}
	return(i);
}
void main()
{
	int j,i=0;
	do
	{
		scanf("%d%d",&a[i],&b[i]);
		i=i+1;
	} while(a[i-1]!=0&&b[i-1]!=0);
	for(j=0;j<i-1;j++)
	  printf("%d\n",f(a[j],b[j]));
}

