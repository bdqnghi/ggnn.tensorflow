void main()
{int n,i,k=0,j;
 scanf("%d",&n);
 int c[100];
 for(i=0;i<n;i++)
 {scanf("%d",&c[i]);
  if(c[i]>c[k])
  k=i;}
 printf("%d\n",c[k]);
if(k==0)
{j=1;
 for(i=2;i<n;i++)
   if(c[i]>c[j])
    j=i;}
else {j=0;
   for(i=1;i<n;i++)
   if(c[i]>c[j]&&c[i]<c[k])
    j=i;}
 printf("%d",c[j]);
}