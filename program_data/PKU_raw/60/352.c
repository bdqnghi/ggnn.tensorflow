int main()
{
    int n,i,j,t,m=0,q=0;
    scanf("%d",&n);
    if(n<5)
    {
           printf("empty\n");
    }
    else
    {
        for(i=3;i<n-1;i++)
        {   
                           m=0;
                           for(j=2;j<i;j++)
                           {
                                              if(i%j==0)
                                              {m=1;
                                              break;}
                           }
                           if(m==0)
                           {
                                   q=0;
                                    for(t=2;t<i+2;t++)
                                   {
                                              if((i+2)%t==0)
                                              {q=1;
                                              break;}
                                    }  
                                    if(q==0)
                                     {
                                         printf("%d %d\n",i,i+2);
                                      }
                           }
        }
    }
    getchar();
    getchar();
}