int main()
{
  int n,a[302],i,j,k=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  scanf("%d",&a[i]);
 for(j=1;j<=n;j++)
 {for(i=1;(i<j)&&a[i]!=a[j];i++);
 if(i==j)
  {k++;
  a[k]=a[j];} 
} 
for(i=1;i<=(k-1);i++)
printf("%d,",a[i]);
printf("%d",a[k]);
return 0;
}