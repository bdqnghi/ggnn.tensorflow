int main()
{
    int i,j,k;
    int n;
    int p=0,q=0;

    scanf("%d",&n);
    for(i=6;i<=n;i=i+2)
    {

       for(j=3;j<=i/2;j=j+2)
       {
           p=0;
        q=0;
       for(k=2;k<sqrt(j)+1;k++)
           {
               if(j%k==0)
               {
                  p=1;
                  //printf("aaa%d%d",j,k);
                  break;
                }

           }
           if(p!=1)
           {
              for(k=2;k<sqrt(i-j)+1;k++)
              {
               if((i-j)%k==0)
               {
                  q=1;
                  break;
               }
               }
           }
           if(p+q==0)
           {
           printf("%d=%d+%d\n",i,j,i-j);
           break;
           }

       }

    }

    return 0;
}
