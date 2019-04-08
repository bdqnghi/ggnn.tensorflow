int f(int n);
int main()
{
	int i,m;
	for(i=0;i<6;i++)
	{
	scanf("%d",&m);
  
	printf("%d\n",f(m));

	}
	return 0;

} 
int f(int n)
	{
	    int a[10000],b[10000];
		int g,i,j;
		b[0]=abs(n);
		if(b[0]!=0)
		{
			for(i=0;;i++)
			{
			a[i]=b[i]%10;
			b[i+1]=b[i]/10;
			if(a[i]==0&&b[i+1]==0)
			{break;}
			}
    	g=0;
		for(j=i;j>=0;j--)
		{
	    	g=g+a[j]*pow(10,i-j-1);

		}
		}
		
		if(n>0)
		{	
			return(g);
		}
		if(n<0)
		{
			return((-g));
		}
		if(n=0)
		{
			return(0);
		}
		
	}
