void line(int n,int *p);
int main()
{
    int n,n1,i,j,k,t,l,sum,s,win,w,lose,money,flag,flag2;
    int a[1000],b[1000];
    for(l=0;;l++)
    {
                    scanf("%d",&n1);
                    if(n1==0)break;
                    lose=0;win=0;
                    i=j=0;k=l=n1-1;
                    memset(a,0,1000*sizeof(int));
                    memset(b,0,1000*sizeof(int));
                   line(n1,a);
                   line(n1,b);
                   while(j<=k&&i<=l)
                   {
                     if(b[j]<a[i])
                     {
                                  win++;i++;j++;
                     }
                     else if(b[j]>a[i])
                     {
                          lose++;i++;k--;
                     }
                     else
                     {
                         if(b[k]<a[l])
                         {
                                      win++;k--;l--;
                         }
                         else if(b[k]>a[i])
                         {
                              lose++;k--;i++;
                         }
                         else 
                         {
                              k--;i++;
                         }
                     }
                   }        
                  money=200*win-200*lose;
                  printf("%d\n",money);
    }
    return 0;
}

void line(int n,int p[])
{
     int i,j,k;
     for(i=0;i<n;i++)scanf("%d",&p[i]);
     for(i=0;i<n-1;i++)
     {
                     for(j=0;j<n-1-i;j++)
                     {
                                       if(p[j]>p[j+1])
                                       {
                                                      k=p[j];
                                                      p[j]=p[j+1];
                                                      p[j+1]=k;
                                       }
                     }
     }
}