int main()
{
    int i,j,n,k,money,tf,ts,wf,ws;
    int tj[1000],qw[1000];
    money=0;
    while(scanf("%d",&n)&&(n!=0))
    {
                 for(i=0;i<n;i++)
                 {
                                      scanf("%d",&tj[i]);                    
                 }
                 for(i=0;i<n;i++)
                 {
                                      scanf("%d",&qw[i]);
                 }            
                 for(i=0;i<n-1;i++)
                 {
                                   for(j=0;j<n-1-i;j++)
                                   {
                                                       if(tj[j]<tj[j+1])
                                                       {
                                                                        k=tj[j];
                                                                        tj[j]=tj[j+1];
                                                                        tj[j+1]=k;
                                                       }
                                   }
                 }
                 for(i=0;i<n-1;i++)
                 {
                                   for(j=0;j<n-1-i;j++)
                                   {
                                                       if(qw[j]<qw[j+1])
                                                       {
                                                                        k=qw[j];
                                                                        qw[j]=qw[j+1];
                                                                        qw[j+1]=k;
                                                       }
                                   }
                }
                tf=0;
                ts=n-1;
                wf=0;
                ws=n-1;
                for(i=0;i<n;i++)
                {
                                if(tj[tf]==qw[wf])
                                {
                                                  if(tj[ts]>qw[ws])  
                                                  {
                                                                     money+=200;
                                                                     ts--;
                                                                     ws--;
                                                  }
                                                  else if(tj[ts]<qw[ws])
                                                  {
                                                       money-=200;
                                                       ts--;
                                                       wf++;
                                                  }
                                                  else if(tj[ts]==qw[ws])
                                                  {
                                                       if(tj[ts]<qw[wf])
                                                       {
                                                                        money-=200;
                                                                        ts--;
                                                                        wf++;
                                                       }
                                                       else if(tj[ts]==qw[wf])  break;
                                                  } 
                                }
                                else if(tj[tf]>qw[wf])
                                {
                                     money+=200;
                                     tf++;
                                     wf++;
                                }
                                else 
                                {
                                     money-=200;
                                     ts--;
                                     wf++;
                                }
                }
                printf("%d\n",money);
                money=0;
    }
    return 0;
}