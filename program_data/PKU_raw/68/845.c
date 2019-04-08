int su(int z)
  {
       int i=2,t=0,k=sqrt(z);
       for(i=2;i<=k;i++)
        { 
          if(z%i==0)
          break;
        }
        if(i>k)  t=1;
        return t;
}
int main()
{
    int n,m,i,j;
    scanf("%d",&m);
    for(n=6;n<=m;n+=2)
      { 
          for(i=3;i<=n/2;i+=2)
           {  j=n-i;
             if(su(i)&&su(j))
             {printf("%d=%d+%d\n",n,i,j);
             break;}
          }
      }
      getchar();
      getchar();
      return 0;
}
