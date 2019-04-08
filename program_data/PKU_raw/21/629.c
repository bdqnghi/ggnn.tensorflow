int main()
{
   int i,j;
   int n,m;
   double sum=0,av=0,b[1000],temp1;
   cin>>n;
   int a[1000]={0},temp2;
   for(i=0;i<=n-1;i++)
	   cin>>a[i];
   for(i=0;i<=n-1;i++)
	   sum=sum+a[i];
   av=sum/n;
   for(i=0;i<=n-1;i++)
	   b[i]=abs(a[i]-av);
   for(i=0;i<=n-2;i++)
	   for(j=0;j<=n-2-i;j++)
	      if(b[j]<b[j+1])
	      {
	    	  temp1=b[j];
	    	  b[j]=b[j+1];
	    	  b[j+1]=temp1;
	    	  temp2=a[j];
	    	  a[j]=a[j+1];
	    	  a[j+1]=temp2;
	      }
	  for(i=0;i<=n-1;i++)
	  if(b[0]!=b[i])
	  {
		  m=i;
		  break;

	  }
	  cout<<a[0];
	  for(i=1;i<=m-1;i++)
		  cout<<","<<a[i];
	  return 0;


}
