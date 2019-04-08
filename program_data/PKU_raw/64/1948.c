int main()
{
    int a[110][3],n,k,i,j,s=0,flag[1000][2],temp2;
    float b[110],temp1;
    double m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
      for(k=i+1;k<n;k++)
      {
        m=0;
        for(j=0;j<3;j++)
          m+=(a[k][j]-a[i][j])*(a[k][j]-a[i][j]);
        b[s]=sqrt(m);
        flag[s][0]=i;
        flag[s][1]=k;
        s++;
      }
    for(j=0;j<s-1;j++)
      for(i=0;i<s-j-1;i++)
        if(b[i]<b[i+1])
        {
          temp1=b[i];
          b[i]=b[i+1];
          b[i+1]=temp1;
          for(k=0;k<2;k++)
          {
            temp2=flag[i][k];
            flag[i][k]=flag[i+1][k];
            flag[i+1][k]=temp2;
          }
        }
     for(i=0;i<s;i++)
       printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[flag[i][0]][0],a[flag[i][0]][1],a[flag[i][0]][2],a[flag[i][1]][0],a[flag[i][1]][1],a[flag[i][1]][2],b[i]);     
     return 0;
}