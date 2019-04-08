int a[26];
int n;
int sum(int k,int b)
{
   int x;
   if (k==0)
   x=0;
   else if(k!=0)
   {
     if((a[n-k]<=b))
     {
        if((sum(k-1,a[n-k])+1)>=sum(k-1,b))
        {
          b=a[n-k];
          x=1+sum(k-1,b);
        }
        else
          x=sum(k-1,b);
        
     }
      else if ((a[n-k]>b))
      x=sum(k-1,b);
   } 
   return x;
}
main()
{
int i,j;
int c=9999;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i-1]);
}
printf("%d",sum(n,c));
}