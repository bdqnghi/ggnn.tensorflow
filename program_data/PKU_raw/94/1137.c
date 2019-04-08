int main()
{
  int n,k,i,t=0,s,x,j,a[600];
  scanf("%d",&n);
  for (i=1;i<=n;i++) 
  {
scanf("%d",&x);
if (x%2==1)
{
 t++;
a[t]=x;
} 
}
  for (i=1;i<=t-1;i++)
  for (j=i+1;j<=t;j++)
  if (a[i]>a[j])
  {

    s=a[i];a[i]=a[j];a[j]=s;
  }
printf("%d",a[1]);
  for (i=2;i<=t;i++) printf(",%d",a[i]);
}