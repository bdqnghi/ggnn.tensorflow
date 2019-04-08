int main()
{
    int n;
    int i,j,temp=0,num=0,sum1=0,sum2=0,money=0;
    int tian[1000];
    int qi[1000];
    scanf("%d",&n);
    while(n!=0)
    {
    temp=0,num=0,sum1=0,sum2=0,money=0;
    for(i=0;i<n;i++)
    scanf("%d",&tian[i]);
    for(j=0;j<n;j++)
    scanf("%d",&qi[j]);
    
    for(i=0;i<=n-2;i++)
    {
                       for(j=n-1;j>=1;j--)
                       {
                                          if(tian[j]>tian[j-1])
                                          {
                                                               temp=tian[j];
                                                               tian[j]=tian[j-1];
                                                               tian[j-1]=temp;
                                          }
                       }
    }
    
    
     for(i=0;i<=n-2;i++)
    {
                       for(j=n-1;j>=1;j--)
                       {
                                          if(qi[j]>qi[j-1])
                                          {
                                                               temp=qi[j];
                                                               qi[j]=qi[j-1];
                                                               qi[j-1]=temp;
                                          }
                       }
    }
    
    for(i=0;i<n;i++)
    {
                    num=i;
                    for(j=num;j>=0;j--)
                    {
                                       if(tian[j]>qi[i])
                                       {
                                                        sum1=sum1+1;
                                                        tian[j]=0;
                                                         qi[i]=0;
                                                         break;
                                       }          
                    }
    }
    
    for(i=0;i<n;i++)
    {
                   for(j=0;j<n;j++)
                   {
                      if(tian[i]==qi[j]&&tian[i]!=0)
                      {
                                   sum2++;
                                   break;            
                      }
                   }
    }
    
    money=200*(sum1-(n-sum1-sum2));
    printf("%d\n",money);
    scanf("%d",&n);
}
getchar();
getchar();
}