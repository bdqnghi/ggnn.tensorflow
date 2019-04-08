int main()
{
    int i,n,j,p,q,count=0;
    scanf("%d",&n);
    for(i=3;i<=n-2;i=i+2)
    {
          for(p=0,j=2;j<i;j++)
          {
          if(i%j==0)
          break;
                          }
          if(j==i)
          p=1;
          for(q=0,j=2;j<i+2;j++)
          {
             if((i+2)%j==0)
             break;
                            }
             if(j==i+2)
             q=1;
             if(p==1&&q==1){
             printf("%d %d\n",i,i+2);
             count++;}
                       }
                       if(count==0)
                       printf("empty");
                      

                       return 0;
                       }
