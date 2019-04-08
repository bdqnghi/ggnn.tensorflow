main()
{
 	  int n,i,j;
	   float x[50],y[50],a,b;
 	  double max=0,m,k;
 	  scanf("%d",&n);
 	  for(i=0;i<n;i++)
 	  scanf("%f %f",&x[i],&y[i]);
 	  for(i=0;i<n-1;i++)
 	  for(j=i+1;j<n;j++)
 	  {
	   	  a=(x[j]-x[i])*(x[j]-x[i]);
		  b=(y[i]-y[j])*(y[i]-y[j]);
		  k=(double)sqrt(a+b);
		  if(k>max)
		  max=k;	 				
      }
      printf("%4.4f",max);
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}      