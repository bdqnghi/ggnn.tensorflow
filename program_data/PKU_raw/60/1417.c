

int main()
{
    int n,x1,x2,i1,i2,k1,k2;
    scanf("%d",&n);
    if(n<=4) printf("empty");
    else
    {
    for(x1=3;x1<=(n-2);x1++)
    {
          k1=sqrt(x1);
          for(i1=2;i1<=k1;i1++)
              if(x1%i1==0)break;
          if(i1>k1)
          {
             x2=x1+2;
             k2=sqrt(x2);
             for(i2=2;i2<=k2;i2++)
                 if(x2%i2==0)break;
             if(i2>k2)
                printf("%d %d\n",x1,x2);
          }
          
    }  
    }

  return 0;
}