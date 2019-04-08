
int main(int argc, char *argv[])
{
  int a[300000],n[1000],m[1000],answer[1000];
  int k=0,i,j,l,x=0,t;
  while(x==0)
  {
      k++;
      scanf("%d%d",&n[k],&m[k]);
      if(n[k]==0&&m[k]==0) x=1;
  }
  for(i=1;i<=k-1;i++)
  {
      for(t=1;t<=300;t++) a[t]=t;
      j=1;
      l=n[i]+1;
      while(j<l-1)
      {
          if(j%m[i]==0) j++;
          else
          {
              a[l]=a[j];
              j++;
              l++;
          }
      }
      answer[i]=a[j];
  }
  for(i=1;i<=k-1;i++) printf("%d\n",answer[i]);
  return 0;
}
