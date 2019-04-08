
int main(int argc, char *argv[])
{
  int n;
  while(1)
  {
    scanf("%d",&n);
    if(!n)
      break;
    int i=0,s=0,j=n-1,t=n-1,k,r,a[1010],b[1010],m=0;
    for(k=0;k<n;k++)
      scanf("%d",&a[k]);
    for(k=0;k<n;k++)
      scanf("%d",&b[k]);
    
    for(k=n-1;k>0;k--)
    {
      for(r=0;r<k;r++)
      {
        int e;
        if(a[r]<a[r+1])
        {e=a[r];a[r]=a[r+1];a[r+1]=e;}
        if(b[r]<b[r+1])
        {e=b[r];b[r]=b[r+1];b[r+1]=e;}
      }
    }
    
    while(n--)
    {
      if(a[i]>b[s])
      {
        m+=200;
        i++;s++;
      }
      else if(a[j]>b[t])
      {
        m+=200;
        j--;t--;
      }
      else if(a[j]>b[s])
      {
        m+=200;
        j--;s++;
      }
      else if(a[j]<b[s])
      {
        m-=200;
        j--;s++;
      }
      else if(a[j]=b[s])
      {
        j--;s++;
      }
    }
    printf("%d\n",m);
  }
  return 0;
}