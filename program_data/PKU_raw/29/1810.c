int main()
{
    int m,n,i=1,k=3;
    float s=3.5,p,a=2.0,b=3.0;
    scanf("%d\n",&m);
    while(i<=m)
     {
        scanf("%d\n",&n);
          if(n>=3)
           {while(k<=n)
             {
             p=a+b;
             s=s+p/b;
             a=b;
             b=p;
             k=k+1;
              }
         printf("%.3f\n",s);
       s=3.5;
       a=2.0;
       b=3.0;
       k=3;
         }
     else if(n==1)
       {printf("2.000\n");}
     else
        {printf("3.500\n");}
     i=i+1;
     }
return 0;
}
