int main()
{
    int a[100][100];
    int sum[100],n,i,j,k,l,min,m;
    cin>>n;
    for(i=0;i<n;i++)
       sum[i]=0;
    for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
            for(k=0;k<n;k++)
            cin>>a[j][k];
          for(j=0;j<n-1;j++)
          {
                for(k=0;k<n-j;k++)
                 {
                   min=a[k][0];
                   for(l=0;l<n-j;l++)
                   if(min>a[k][l]) min=a[k][l];
                   for(l=0;l<n-j;l++)
                      a[k][l]=a[k][l]-min;
                 }
                for(k=0;k<n-j;k++)
                {
                    min=a[0][k];
                    for(l=0;l<n-j;l++)
                    if(a[l][k]<min) min=a[l][k];
                    for(l=0;l<n-j;l++)
                    a[l][k]=a[l][k]-min;
                }
                sum[i]=sum[i]+a[1][1];
                for(k=0;k<n-j;k++)
                   for(l=1;l<n-j-1;l++)
                   a[k][l]=a[k][l+1];
                for(k=0;k<n-j-1;k++)
                   for(l=1;l<n-j-1;l++)
                   a[l][k]=a[l+1][k];
          }
      }
    for(i=0;i<n;i++)
       cout<<sum[i]<<endl;
    return 0;
}

