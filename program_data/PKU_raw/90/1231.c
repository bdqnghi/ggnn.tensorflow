int pl(int m,int n)
{
   int c;
   if(m==0)
   c=1;
   else if(m<0)
   c=0;
   else if(n==1)
   c=1;

   else 
   c=pl(m-n,n)+pl(m,n-1);

   return c;
}
main()
{
    int m,n,i,t,c;
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf ("%d %d",&m,&n);
        c=pl(m,n);
        printf("%d\n",c);
    }
 }

