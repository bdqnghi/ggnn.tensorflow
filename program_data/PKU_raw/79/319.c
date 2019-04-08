 int  manage(int n,int q)
{
	int a[1000],i=0,*p=a,k=0,m=0,b;
	for(i=0;i<n;i++)
	{
		*(p+i)=i+1;
	}
	i=0;
	 
	while(m<n-1)
	{
		if(*(p+i)!=0) 
		{k++;}
		if(k==q) 
		{
			*(p+i)=0;
			k=0;m++;
		}
		i++;
		if(i==n)
		{i=0;}
	}

  for(i=0;i<n;i++)
  {
	  if(*(p+i)!=0)
		  b=*(p+i);
  }
  return(b);
		  
   

}

void main()
{
	int n,m,a[1000],i=0,j=0;
	
do
{           scanf("%d %d",&n,&m);
       if(n!=0)
	   {
	    	a[i]=manage(n,m);
			i++;
	   }
} while(n!=0);

  for(j=0;j<i;j++)
  {
	  printf("%d\n",a[j]);
  }
  



}