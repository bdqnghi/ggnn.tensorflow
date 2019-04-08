int main()
{
   int i,j,n,t,s,d,test;
   double g;
   int a[50001],b[50001];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      scanf("%d%d",&(a[i]),&(b[i]));
   }
   t=10000;
   for(i=0;i<n;i++)
   {
      if(a[i]<t)
		  t=a[i];
   }
   j=0;
   for(i=0;i<n;i++)
   {
      if(b[i]>j)
		  j=b[i];
   }
   test=0;
   for(g=(double)t;g<=(double)j;g=g+0.5)
   {
	   d=0;
      for(s=0;s<n;s++)
	  {
	      if(b[s]>=g&&a[s]<=g)
			  d=1;
	  }
	  if(d==0)
	  { test++;
	  break;}
 
   }
      if(test>0){
		  printf("no\n");
	  }else{
	      printf("%d %d\n",t,j);
	  }
return 0;
}