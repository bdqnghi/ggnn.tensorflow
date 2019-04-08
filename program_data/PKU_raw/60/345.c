int S(int x)
{
    int i=2,a=0;
    while(i<x)
    {
           if(x%i==0)
           {
                     a=1;
                     break;
           }   
           else
           i++;
    }
    return a;
}
main()
{
    int n,a=5,b,c,d=0;
    scanf("%d",&n);
    while(a<=n)
    {
               b=S(a);
               c=S(a-2);
               if(b==0&&c==0)
               {
               printf("%d %d\n",a-2,a);
               d++;
               }
               a++;
    }  
    if(d==0)
    printf("empty");
    getchar();
    getchar();
}
