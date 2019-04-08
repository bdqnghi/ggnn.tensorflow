int max(int a[],int n,int high)
{
  int c,b;
  if(n==0)
     {
        if(a[0]>high) return 0;
        else return 1; 
      }
  else 
       if(a[n]>high)
          return max(a,n-1,high);
       else
         {
            c=max(a,n-1,a[n])+1;
            b=max(a,n-1,high);
            if(c>b) return c;
            else return b; 
         }
}
main()
{
  int n,i;
  int a[25];
  scanf("%d",&n);
  for(i=0;i<n;i++)
     scanf("%d",&a[n-i-1]);
  printf("%d",max(a,n,32767));
}