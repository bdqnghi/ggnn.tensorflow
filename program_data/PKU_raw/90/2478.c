int function(int n,int m)
	{
		int f;
		if(n==1||m==0||n==0||m==1)
			f=1;
		else if(m<0)
			f=0;
		else
			f=function(n-1,m)+function(n,m-n);
		return(f);
	}
int main()
{
	int t,m,n,k;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
     scanf("%d %d",&m,&n);
	if(m<n)
		{
			n=m;
			k=function(n,m);
	     }
	else
		{
			k=function(n,m);
	     }

	printf("%d\n",k);
	}
}
