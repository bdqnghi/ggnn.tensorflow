 private static void mergesort(int l,int r)
  {
    if(l<r)
    {
      int mid=l+(r-l)/2;
      mergesort(l,mid);
      mergesort(mid+1,r);
      merge(l,mid,mid+1,r,l,r);
    }
  }
  
  private static void merge(int l1,int r1,int l2,int r2,int l,int r)
  {
    int sz1=r1-l1+1,sz2=r2-l2+1;
    int a[]=new int[sz1];
    int b[]=new int[sz2];
    for(int i=l1,j=0;i<=r1;)
      a[j++]=arr[i++];
    for(int i=l2,j=0;i<=r2;)
      b[j++]=arr[i++];
    int i=0,j=0,k=l;
    while(i<sz1 && j<sz2)
    {
      if(a[i]<b[j])
        arr[k++]=a[i++];
      else if(b[j]<a[i])
        arr[k++]=b[j++];
      else
      {
        arr[k++]=b[j++];
        i++;
      }
    }
    if(i==sz1)
      for(;j<sz2;)
          arr[k++]=b[j++];
    else
      for(;i<sz1;)
          arr[k++]=a[i++];
  }
  