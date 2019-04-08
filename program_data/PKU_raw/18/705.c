int main()
{
    int n;
    cin>>n;
    int a[n][n][n],b[n],min1[n],min2[n],c[n][n-1],sum[n];
    int i,j,k,l,p;          //k????????,i????,j????,l?????? 
    for(i=0;i<n;i++)
    sum[i]=0;
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)          //????n*n?? 
        {
            for(j=0;j<n;j++)
            {
                cin>>a[k][i][j];
            }
        }
        for(l=0;l<n-1;l++)
        {
            for(i=0;i<n-l;i++)           //???????? 
            {
                min1[i]=a[k][i][0];
                for(j=0;j<n-l;j++)        //??????? 
                {
                    if(a[k][i][j]<=min1[i])
                    {
                        min1[i]=a[k][i][j];
                    }
                }
                for(j=0;j<n-l;j++)
                a[k][i][j]=a[k][i][j]-min1[i];  //???????????? 
            }
            for(j=0;j<n-l;j++)          //?? ?????? 
            {
                min2[j]=a[k][0][j];
                for(i=0;i<n-l;i++)     //???????? 
                {
                    if(a[k][i][j]<=min2[j])
                    {
                        min2[j]=a[k][i][j];
                    }
                }
                for(i=0;i<n-l;i++)
                a[k][i][j]=a[k][i][j]-min2[j];  //?????????????? 
            }                   
            c[k][l]=a[k][1][1];    //?????????a[1][1];
            sum[k]=sum[k]+c[k][l];    //????????+c[k][l] 
            for(j=0;j<n;j++)           //????? 
            for(i=1;i<n-1-l;i++)
            {
                a[k][i][j]=a[k][i+1][j];
            }
            for(i=0;i<n-1-l;i++)       //????? 
            for(j=1;j<n-1-l;j++)
            {
                a[k][i][j]=a[k][i][j+1];
            }
        }
    }
    for(i=0;i<n;i++)         //?????????? 
    cout<<sum[i]<<endl;
    return 0;
} 