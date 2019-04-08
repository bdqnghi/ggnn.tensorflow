int  main()
{
     int bianxu(int x); 
     int x,t=6,i=0;
for(i;i<t;i++)
{
     scanf("%d",&x);
     if(x>0)
     printf("%d\n",bianxu(x));
     if(x<0)
     printf("-%d\n",bianxu((-x)));
     if(x==0)
     printf("0\n");
    } 
}
int bianxu(int x)
{int i,r=0,m;
char a[100]={0};
for(i=0;x!=0;i++)
     {
     a[i]=x%10;
     x=x/10;r++;
     }
for(i=0;i<r/2;i++)
     {m=a[i];
     a[i]=a[r-1-i];
     a[r-1-i]=m;
     }m=0;
     for(i=r-1;a[i]==0;i--)
     {
     m++;
     }
       
          for(i=r-m-1;i>=0;i--)
          {
          x*=10;
          x+=a[i];
          }
          return x;
}
