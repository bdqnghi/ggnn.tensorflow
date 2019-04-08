int main()
{
  unsigned int n;
  int j,a[N],c[N],i,temp,k=0;
  float ave,sum=0,b[N],d=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  sum=sum+a[i];
  }
  for(i=0;i<n-1;i++)
  for(j=0;j<n-i-1;j++)
  if(a[j]>a[j+1])
  {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp ;
  }
  ave=sum/n;
  for(i=0;i<n;i++)
  {
   b[i]=fabs(a[i]-ave);
   if(b[i]>d)
    d=b[i];
  }
  for(i=0;i<n;i++)
  if(b[i]==d)
  {
  c[k]=a[i];
  k++;
  }
    printf("%d",c[0]);
    if(k>1)
    {
    for(i=1;i<k;i++)
    printf(",%d",c[i]);
    }
    return 0;
}