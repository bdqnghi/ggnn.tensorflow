int main()
{
   int n,a,b,m,k,l,i,j,c;
   scanf("%d",&n);
   for(a=6;a<=n;a+=2)
   {
     b=a/2;
	 c=0;
     for(m=3;m<=b;m+=2)
	 {
	   k=sqrt(m);
	   for(i=2;i<=k;i++)
	      if(m%i==0)
		  break;
	   if(i>=k+1)
	   {
	     l=sqrt(a-m);
         for(j=2;j<=l;j++)
	      if((a-m)%j==0)
		  break;
		  if(j>=l+1)
		  {
		  printf("%d=%d+%d",a,m,a-m);
		  printf("\n");
		  c=1;
		  }
		  else
			  c=0;
	   }
	   if(c==1)
		   break;
	  }
	}
	return 0;
}

