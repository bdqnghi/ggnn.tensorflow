int main()
{
	int f(int n,int k,int x,int i );
	int n,k,m,p,x,i,h;
	scanf("%d%d",&n,&k);
	if(n==1)
	{
		p=1;
	}
	else
	{
		for(x=k;;x++)
		{   
			h=0;
			p=f(n,k,x,n);
			m=p;
			 for(i=0;i<n;i++)
			 {
	          if(m%n==k)
			  {
	      	  m=(m-k)*(n-1)/n;
		        h=h+1;
			  }
			 }
                 if(h==n)
				 {
	                break;
				 }

		
		}
	}
	printf("%d",p);
	return 0;
}
int f(int i,int k,int x,int n)
{  
	int m;
	m=0;
    if(i==1)
	{
		m=k+n*x;
	}else{

		m=k+f(i-1,k,x,n)*n/(n-1);
	}

	return(m);
}