int main()
{
    int n=1;
    int i,j,t,u;
    int h=0;
    int tj[2000]={0};
    int qw[2000]={0};
    int r[2000]={0};
    int s[2000]={0};
    while(n!=0)
    {
     scanf("%d",&n);
     if(n==0)
     break;
     h=h+1;
     for(i=1;i<n;i++)
     scanf("%d ",&tj[i]);
     scanf("%d",&tj[n]);
     for(i=1;i<=n;i++)
     { 
         for(j=n;j>i;j--)
         {
            if(tj[j-1]<=tj[j])
            {
                t=tj[j-1];
                tj[j-1]=tj[j];
                tj[j]=t;
                }
                }
                }
     for(i=1;i<n;i++)
     scanf("%d ",&qw[i]);
     scanf("%d",&qw[n]);
     for(i=1;i<=n;i++)
     { 
         for(j=n;j>i;j--)
         {
            if(qw[j-1]<=qw[j])
            {
                t=qw[j-1];
                qw[j-1]=qw[j];
                qw[j]=t;
                }
                }
                }
          for(j=0;j<n;j++)
        {
          u=j;
          for(i=1;i<=n;i++)
          {
             if((u+i)>n)
             u=u-n;
             if((tj[i])>(qw[i+u]))
             s[j]=s[j]+1;
             if((tj[i])<(qw[i+u]))
             s[j]=s[j]-1;
             }
             }
             for(j=n-1;j>0;j--)
             {
                 if(s[j-1]<=s[j])
                  s[j-1]=s[j];
                  }
                  r[h]=200*s[0];
                  for(i=0;i<=n;i++)
                  s[i]=0;
                  }
                  for(i=1;i<=h;i++)
                  printf("%d\n",r[i]);
                    return 0;
        }
             
            
            
          
          
          
            
