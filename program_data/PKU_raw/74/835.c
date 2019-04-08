  void main ()
{
     int aim[100];
     int m,n,a,b,c,k,i,p,t,num;

     num=0;
     scanf("%d %d",&m,&n);
    for (k=m;k<=n;k++)
   {
      p=0;
      t=k/2;
      for (i=2;i<=t;i++)
       {
          if (k%i==0)            
		  {
			  p=1;
			  break;
		  }
		  
       }
      if (p==0)
      {
		  b=0;
		  c=k;
       while(c!=0)
	   {
		   a=c%10;
		   b=b*10+a;
		   c=c/10;
	   }
	   if (b==k)
	   {
		   num=num+1;
		   aim[num]=k;
	   }
       else  continue;
	}
	  else continue ;
	}
if ( num!=0 )
{
 for (i=1;i<num;i++)
    {
     printf ("%d,",aim[i]);
     }
     printf("%d",aim[num]);
 }
else printf ("no");
}
