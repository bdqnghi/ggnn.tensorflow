int main()
{
    int n,i,j;
    cin>>n;
    int a[n][60],b1[n];
    for(i=0;i<n;i++)
    {
        int m,k=0;cin>>m;
        int b[m];
        for(j=0;j<m;j++)
        cin>>b[j];
        for(j=m-1;j>0;j--)
        b[j]=b[j]-b[j-1];
        for(j=0;j<m;j++)
        {
           for(;b[j]>0&&k<60;k++,b[j]--)
           {
           a[i][k]=1;
           }
           a[i][k]=0;k++;a[i][k]=0;k++;a[i][k]=0;k++;
        }
        int mn;
        for(mn=k;mn<60;mn++)
        a[i][mn]=1;
        b1[i]=0;
      for(j=0;j<60;j++)
      if(a[i][j]==1)
      b1[i]++;
    }
    for(i=0;i<n;i++)
    cout<<b1[i]<<endl;
 
    return 0;
}
