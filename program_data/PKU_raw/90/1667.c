int f(int m,int n)
{
    int c;

   if ((m>=n)&&(n>1)) 
           c=f(m,n-1)+f(m-n,n);
   if(m==0)
   c=1;
   if (n==1) 
           c=1;
   if (m<n)
         c= f(m,m);
    return(c);
    }
    
int main()
{
    int a[100],b[100],c[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d %d",&a[i],&b[i]);
   
   
   for(i=0;i<n;i++)
   c[i]=f(a[i],b[i]);
   
    for(i=0;i<n;i++)
    {
      if(i==0)
      printf("%d",c[i]);
      else
      printf("\n%d",c[i]);
      }
   getchar();
     getchar();
      getchar();
}
