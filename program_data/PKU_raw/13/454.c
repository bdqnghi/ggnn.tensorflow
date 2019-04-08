
int main()
{
  int n,i,j;
  int a[20000];
  scanf("%d",&n);

  for(i=0;i<n;i++)
     scanf("%d",&a[i]);

  for(i=1;i<n;i++)
     for(j=0;j<i;j++)
        if(a[i]==a[j])
          a[i]=0;
  printf("%d",a[0]);
  for(i=1;i<n;i++)
     if(a[i]!=0)
       printf(" %d",a[i]);
}
