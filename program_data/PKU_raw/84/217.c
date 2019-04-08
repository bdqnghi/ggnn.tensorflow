void main()
{
   int n,i,j,t,a[100];
   scanf("%d\n",&n);
   printf("\n");
   for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
     printf("\n");
   }
   for(j=1;j<n;j++)
     for(i=0;i<(n-j);i++)
   if(a[i]<a[i+1])
     {
       t=a[i];
       a[i]=a[i+1];
       a[i+1]=t;
     }
     printf("%d\n%d\n",a[0],a[1]);
}
