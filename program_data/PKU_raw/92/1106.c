static int cmp(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}
main()
{
      int n,i,j,t,m,x,y,p,q;
      int a[1000],b[1000];
      for(;;)
      {
      scanf("%d",&n);
      if(n==0) break;
      
      for(i=0;i<n;i=i+1)
      scanf("%d",&a[i]);
      for(i=0;i<n;i=i+1)
      scanf("%d",&b[i]);
      
	qsort(a,n,sizeof(int),cmp);
	qsort(b,n,sizeof(int),cmp);
      
      /*for(j=0;j<n-1;j=j+1)
      for(i=0;i<n-1-j;i=i+1)
      if(a[i]<a[i+1])
      {
      t=a[i];
      a[i]=a[i+1];
      a[i+1]=t;
      }
      
      for(j=0;j<n-1;j=j+1)
      for(i=0;i<n-1-j;i=i+1)
      if(b[i]<b[i+1])
      {
      t=b[i];
      b[i]=b[i+1];
      b[i+1]=t;
      }*/
      
      
      
      m=0;
      p=n-1;
      q=n-1;
      for(x=0,y=0;y<=q;)
      {
      if(b[y]>a[x])
      {
      m=m-200;
      y=y+1; 
      p=p-1; 
      }
      else if(b[y]<a[x])
      {
      m=m+200;
      x=x+1;
      y=y+1;
      }
      //if(b[y]==a[x])
      //{
      else if(b[q]<a[p])
      {
      p=p-1;
      q=q-1;
      m=m+200;
      }      
      else if(b[q]>a[p])
      {
      y=y+1;
      p=p-1;
      m=m-200;
      } 
      else if(b[y]==a[p])
      {
      y=y+1;
      p=p-1;
      } 
      else if(b[y]>a[p])
      {
      m=m-200;
      y++;
      p--;
      }
  }
      
      
      //}
      printf("%d\n",m);
      
      
    
  }
} 
