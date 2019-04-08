int cmp(const void *a,const void *b)
{
  if(*((int*)a)>*((int*)b))return -1;
  else if(*((int*)a)<*((int*)b))return 1;
  else return 0;
}
int main()
{
  int n,a[1000],b[1000],i,j,k,sum,s1,s2,i1,i2;
  scanf("%d",&n);
  while(n)
  {
    sum=0;
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=0;i<n;i++)scanf("%d",&b[i]);
    qsort(a,n,sizeof(a[0]),cmp);
    qsort(b,n,sizeof(b[0]),cmp);
    i1=i2=n-1;
    s1=s2=0;
    while(s1<=i1)
    {
      while(a[i1]!=b[i2]&&s1<=i1)
      {
        if(a[i1]>b[i2])
        {
          sum++;
          i1--;
          i2--;
        }
        else
        {
          sum--;
          i1--;
          s2++;
        }
      }
      if(s1>i1)break;
      while(a[s1]!=b[s2]&&s1<=i1)
      {
        if(a[s1]>b[s2])
        {
          sum++;
          s1++;
          s2++;
        }
        else
        {
          sum--;
          i1--;
          s2++;
        }
      }
      if(s1>i1)break;
      if(a[s1]==b[s2]&&a[i1]==b[i2])
      {
        if(a[i1]>b[s2])sum++;
        else if(a[i1]<b[s2])sum--;
        i1--;
        s2++;
      }
      if(s1>i1)break;
    }
    printf("%d\n",sum*200);
    scanf("%d",&n);
 }
 return 0;
}
