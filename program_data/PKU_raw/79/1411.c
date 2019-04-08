int main()
{
  while(1)
  {
	int  n,m;
	scanf("%d %d",&n,&m);
	if(n==0&&m==0)
	{
	  break;
	}
	else
	{
	  //int m1;
	  int i,j=0,sum=0;
	  int *a=(int*)malloc(sizeof(int)*n);
	  for(i=0;i<n;i++)
	  {
	    a[i]=1;
	  }
	  for(i=0;1;i++)
	  {
	    while(i>n-1)
	    {
	      i=i%n;
	    }
	    sum=sum+a[i];
	   // m1=m;
	    //while(m1>(n-j))
	   // {
	   //   m1%=(n-j);
	   // }
	    if(m==sum)
	    {
	      a[i]=0;
		  j++;
		  sum=0;
	    }
	    if(j==n-1)
	    {
	      break;
	    }
	  }
	  for(i=0;i<n;i++)
	  {
	    if(a[i]>0)
	    {
	      printf("%d\n",i+1);
		  break;
	    }
	  }
            free(a);
	}
  }
	return 0;
}