int f(int m,int n)
{
   int s;
   if(n!=1)
   {if(m>=n) s=f(m,n-1)+f(m-n,n);
    else s=f(m,n-1);}
   else s=1;
   return s;
}
main()
{
   int t,m,n,i,s;
   scanf("%d",&t);
   if(t==0) printf("0");
   else
   {
     for(i=1;i<=t;i++)
     {
        scanf("%d %d",&m,&n);
        s=f(m,n);
        printf("%d\n",s);
     }
   }
   getchar();
   getchar();
}
