int main()
{
  
    int i,j,k,l,m,n,num,tempi;
    int x[10],y[10],z[10];
    float d[100];
    float tempd;
    int dp1[100],dp2[100];
    //scan the numbers
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&x[i],&y[i],&z[i]);
    }
  
    num=-1;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            num++;
            d[num]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
            dp1[num]=i;
            dp2[num]=j;
        }
  
   
    num++;
    for(i=0;i<num-1;i++)
        for(j=i+1;j<num;j++)
        {
            if(d[j]>d[i])
            {
                //swap d
                tempd=d[j];
                d[j]=d[i];
                d[i]=tempd;
                //swap dp1
                tempi=dp1[i];
                dp1[i]=dp1[j];
                dp1[j]=tempi;
                //swap dp2
                tempi=dp2[i];
                dp2[i]=dp2[j];
                dp2[j]=tempi;
            }
            if(d[j]==d[i]&&(dp1[j]<dp1[i]||dp1[j]==dp1[i]&&dp2[j]<dp2[i]))
            {
              
                tempd=d[j];
                d[j]=d[i];
                d[i]=tempd;
               
                tempi=dp1[i];
                dp1[i]=dp1[j];
                dp1[j]=tempi;
          
                tempi=dp2[i];
                dp2[i]=dp2[j];
                dp2[j]=tempi;
            }
        }
   
    for(i=0;i<num;i++)
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[dp1[i]],y[dp1[i]],z[dp1[i]],x[dp2[i]],y[dp2[i]],z[dp2[i]],d[i]);

}

