long a[10000];
long s;
void gets(long k)
  {
    long i,j,t;
    for(i=3;i<=k;i++)
  	  {
  	    t=0;	
  	    for(j=2;j<=(int)sqrt(i);j++)
  	      if (i%j==0) t=1;
        if (t==0) {
        	s++;
        	a[s]=i;
        }
        
  	  }
  }
main()
{
	long n,i,r;
	scanf("%d",&n);
	s=1;
	a[1]=2;
	gets(n);
	r=0;
	for(i=1;i<s;i++)
	{
		if (a[i+1]-a[i]==2) 
		{
		  printf("%d %d\n",a[i],a[i+1]);
		  r++;
		}
	}
	if (r==0) printf("empty");
	
}