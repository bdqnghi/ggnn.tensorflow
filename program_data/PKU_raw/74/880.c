void main()
{
   int m,n,p,a,b,j;
   j=0;
   scanf("%d %d",&m,&n);
   int i,t,t0;
   double k;
   for(t=m;t<=n;t++)
   {
      k=sqrt(t);
      for(i=2;i<=k;i++)
       if(t%i==0)
		break;
       if(i>k)
       {
		   t0=t;
          for(p=0;t>0;)
		  {
		     a=t/10;
		      b=t-10*a;
		      t=a;
		      p=10*p+b;
		  }
		  if(p==t0)
		 {	  
		  j=j+1;
			  if (j==1)
			  printf("%d",t0);
			  else if(j>=2) 
          printf(",%d",t0);
		  }
		  t=t0;
	   }
    
   }

 if(j==0) printf("no");
}
