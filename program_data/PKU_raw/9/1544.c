int main()
{
  int n,i,a[150],tmp,j;
  char s[150][20],ts[20];
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
    scanf("%s",s[i]);
    scanf("%d",&a[i]);
  }
  for (i=1;i<n;i++)
    for (j=1;j<=n-i;j++)
      if (((a[j+1]>=60)&&(a[j]<60))
         ||((a[j+1]>a[j])&&(a[j]>=60)))
       {
          memcpy(ts,s[j],sizeof(ts));
          memcpy(s[j],s[j+1],sizeof(ts));
          memcpy(s[j+1],ts,sizeof(ts));
          tmp=a[j];
          a[j]=a[j+1];
          a[j+1]=tmp;
       }
  for (i=1;i<=n;i++)
    printf("%s\n",s[i]);
}