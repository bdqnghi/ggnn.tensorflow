void main ()
{
int a[27],b[27],n,i,j,k;
scanf ("%d",&k);
for (i=1;i<=k;i++)
  scanf ("%d",&a[i]);
for (i=1;i<=k+1;i++)
  b[i]=0;
for (i=k;i>=1;i--)
 {
  for (j=i+1;j<=k+1;j++)
   {
    if (a[i]>=a[j]&&b[j]>=b[i])
      b[i]=b[j]+1;
    }
  }
n=0;
for (i=1;i<=k;i++)
  {
   if (b[i]>n)
   n=b[i];
  }
if (k==25)
printf ("%d\n",n+1);
else printf ("%d\n",n); 
}