//???? 
int main()
{
    int n=1,i,j,k,r;
    int t[1000],q[1000];
    while(n!=0)
    {
        scanf("%d",&n);
        if(n==0)
           break;
        for(i=0;i<n;i++)
           scanf("%d",&t[i]);//???? 
        for(i=0;i<n;i++)
        { 
           for(j=n-1;j>i;j--)
           {
              if(t[j]>=t[j-1])//?? 
              {
                 k=t[j-1];
                 t[j-1]=t[j];
                 t[j]=k;
              }
           }
        }
        for(i=0;i<n;i++)
           scanf("%d",&q[i]);//???? 
        for(i=0;i<n;i++)
        { 
           for(j=n-1;j>i;j--)
           {
              if(q[j]>=q[j-1])//?? 
              {
                 k=q[j-1];
                 q[j-1]=q[j];
                 q[j]=k;
              }
           }
        }
        int sum=0,fail=0,qfail=0; //fail???????????qfail????
        for(j=0;j<n;j++)
        {
           i=j-fail;
           k=j-qfail;
           if(t[i]>q[k])//??? 
              sum++;
           else if(t[i]<q[k])//??? 
           {
              sum--;
              fail++;
           }
           else if(t[i]==q[k])//???????? 
           {
              if(t[n-fail-1]>q[n-qfail-1])
              {
                 sum++;
                 fail++;
                 qfail++;
              }
              else if(t[n-fail-1]<q[n-qfail-1])
              {
                 sum--;
                 fail++;
              }
              else if(t[n-fail-1]==q[n-qfail-1]&&t[n-fail-1]<q[k])
              {
                 sum--;
                 fail++;
              }
           }
        }
        r=200*sum;
        printf("%d\n",r);
    }
}
