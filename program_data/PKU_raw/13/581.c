void main()
{int n,i,j,k,m=0;;
 int a[20001];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n-1-m;i++)
  for(j=i+1;j<n-m;)
   if(a[j]==a[i])
   {for(k=j;k<n-m;k++)
    a[k]=a[k+1];
    m++;}
   else j++;
  for(i=0;i<n-1-m;i++)
  printf("%d ",a[i]);
  printf("%d",a[n-m-1]);
}
