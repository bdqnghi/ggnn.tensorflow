int pd(int a)
{
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
       return 31;
    else if(a==2)
       return 28;
    else
       return 30;
}
main()
{
       int i,y,a,b,n,l,m,s,t;
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
          scanf("%d %d %d",&y,&a,&b);
          if(a<b)
          {
             t=a;
             a=b;
             b=t;
          }
          if((y%4==0&&y%100!=0)||y%400==0)
          {
             s=0;
             if(b>=3)
             {
                for(b;b<a;b++)
                   s=s+pd(b);
                if(s%7==0)
                   printf("YES\n");
                else
                   printf("NO\n");
             }
             else if(b<=2&&a>2)
             {
                for(;b<a;b++)
                   s=s+pd(b);
                s++;
                if(s%7==0)
                   printf("YES\n");
                else
                   printf("NO\n");
             }
             else
                printf("NO\n");
          }
          else
          {
             s=0;
             for(;b<a;b++)
                   s=s+pd(b);
                if(s%7==0)
                   printf("YES\n");
                else
                   printf("NO\n");
          }
       }     
}
