
struct pat
{
       char num[10];
       int age;
       int turn;
} pa[100],temp,temp2;

int main()
{
    int i,j,t,s,n,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     scanf("%s %d",&pa[i].num,&pa[i].age);
                     pa[i].turn=i;
    }
    for(i=1;i<=n;i++)
    {
                     if(pa[i].age>=60)
                     {
                                      for(j=1;j<=i;j++)
                                      {
                                                       if(pa[i].age>pa[j].age)
                                                       {
                                                                              temp=pa[j];
                                                                              pa[j]=pa[i];
                                                                              for(t=i-1;t>j;t--)
                                                                              {
                                                                                          pa[t+1]=pa[t];                                                              
                                                                              }
                                                                              pa[j+1]=temp;
                                                                              break;
                                                       }
                                      }
                     
                     }

    }
    for(i=1;i<=n;i++)
    {
    
                     
    
                                                        puts(pa[i].num);
    
    
    }

    return 0;
}