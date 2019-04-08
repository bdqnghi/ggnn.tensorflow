main()
{
    int n;
    scanf("%d",&n);
    int m=0;
    int nn=n;
    for(int i=1;i<5;i++)
    {
       n=n/10;
       if(n==0) 
       {
         m=i;
         break;
       }     
    }
    int a;
    for(int i=0;i<m;i++)
    {
       a=nn%10;
       printf("%d",a);   
       nn=nn/10;       
    }
    getchar();
    getchar();
}
