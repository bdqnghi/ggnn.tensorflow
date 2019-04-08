void main ()
{
int a[20000],n,i,c,j,k=0,p;
scanf ("%d",&n);
for (i=0;i<n;i++)
{
scanf ("%d",&c);
p=1;
for (j=0;j<k;j++)
 if (a[j]==c) p=0;
if (p) {a[k]=c;k++;} 
}
for (i=0;i<k-1;i++)
printf ("%d ",a[i]);
printf ("%d",a[i]);
 }