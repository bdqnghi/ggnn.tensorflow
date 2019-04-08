int conduct(int n,int k,int c)
{
	int f,i,t=1,s;
	if(c!=0)
		f=conduct(n,k,c-1)/(n-1)*n+k;
	else
	{
	   for(t=1;;t++)
	   {
		   s=t*(n-1);
		   for(i=0;i<n;i++)
		   {
			   if(s%(n-1)==0)
			   {
				   s=s/(n-1)*n+k;
			   }
			   else
				   break;
		   }
		   if(i==n)
			   break;
	   }
	   f=t*(n-1);
	}
	return(f);
}
void main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d",conduct(n,k,n));
}