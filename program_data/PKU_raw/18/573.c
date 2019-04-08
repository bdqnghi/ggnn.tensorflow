

int main()
{
    int n,a[100][100],ni,minl[100],minh[100],i,j,k,q,sum;
    cin>>n;
    for(k=0;k<n;k++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(ni=n;ni>1;ni--)
        {
             for(i=0;i<ni;i++)//??????
            {
                minl[i]=a[i][0];
                   for(j=0;j<ni;j++)
               {
                    if(minl[i]>a[i][j]) minl[i]=a[i][j];
               }
                    for(j=0;j<ni;j++)
               {
                    a[i][j]=a[i][j]-minl[i];
               }
            }
            for(j=0;j<ni;j++)
            {
                minh[j]=a[0][j];
                for(i=0;i<ni;i++)
                {
                    if(minh[j]>a[i][j]) minh[j]=a[i][j];
                }
                for(i=0;i<ni;i++)
                {
                    a[i][j]=a[i][j]-minh[j];
                }
            }
            sum+=a[1][1];

            for(i=0;i<ni;i++)
            {
                for(j=1;j<ni-1;j++)
                {
                    a[i][j]=a[i][j+1];
                }
            }

            for(j=0;j<ni;j++)
            {
                for(i=1;i<ni-1;i++)
                {
                    a[i][j]=a[i+1][j];
                }
            }




        }
        cout<<sum<<endl;

    }
















    return 0;
}
