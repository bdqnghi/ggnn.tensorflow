void quicksort(int source[],int n)
{int i,j,t;
     for(j=n-1;j>0;j--)
                     {
                                for(i=0;i<j;i++)
                                {
                                 if(source[i]<source[i+1])
                                 {t=source[i];
                                 source[i]=source[i+1];
                                 source[i+1]=t;
                                  }
                                 
                                }
                     }

    
     }
int main()
{
   
    int n,m,i;
    int t[1001],q[1001];
        while(1)
   {      scanf("%d",&n);
                     if(n==0) break;    
                     else{     for(m=0;m<n;m++)
                        scanf("%d",&t[m]);
                        for(m=0;m<n;m++)
                         scanf("%d",&q[m]);
   quicksort(t,n);
   quicksort(q,n);
   int top1=0,trail1=n-1,top2=0,trail2=n-1,sum=0;
   for(i=1;i<=n;i++)
               { if(t[trail1]>q[trail2])
                                      {sum+=200;
                                      trail1--;
                                      trail2--;}
                 else if(t[trail1]<q[trail2])
                                      {sum-=200;
                                      trail1--;
                                      top2++;
                                      }
                 else if(t[top1]>q[top2])
                                    {sum+=200;
                                      top1++;
                                    top2++;}
                 else
                 if(t[trail1]<q[top2])
                     {sum-=200;
                 trail1--;
                 top2++;}
                
                 else{
                      trail1--;
                      top2++;
                      }
               } 
 printf("%d\n",sum);}
  }
   getchar();
   getchar();
   
   }
   
    
