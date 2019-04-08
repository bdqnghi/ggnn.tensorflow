
int main()
{
    int n,M,N,i;
    int a[21]={0};
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d %d",&M,&N);
       int f(int a,int b);
       a[i]=f(M,N);
      }
     for(i=1;i<=n;i++)
     {
     printf("%d\n",a[i]);
     }
                return 0;
}


       int f(int a,int b)
       {
         int c;
         if((b==1)||(a==1))
         c=1;
         else
         {
         if(a<b)
         c=f(a,b-1);
         if(a==b)
         c=f(a,b-1)+1;
         if(a>b)
          c=f(a,b-1)+f(a-b,b);
          }
         return (c);
         }
