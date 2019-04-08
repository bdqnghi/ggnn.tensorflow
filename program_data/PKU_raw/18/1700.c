int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
            int a[100][100];
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<n;j++)
                    {
                            cin>>a[i][j];
                    }
            }
            int sum=0;
            for(int size=n;size>=2;size--)
            {
                for(int i=0;i<size;i++)
                {
                        int min=1000000;
                        for(int j=0;j<size;j++)
                        {
                                if(a[i][j]<min)
                                min=a[i][j];
                        }
                        for(int j=0;j<size;j++)
                        {
                                a[i][j]-=min;
                        }
                }
                for(int j=0;j<size;j++)
                {
                        int min=1000000;
                        for(int i=0;i<size;i++)
                        {
                                if(a[i][j]<min)
                                min=a[i][j];
                        }
                        for(int i=0;i<size;i++)
                        {
                                a[i][j]-=min;
                        }
                }
                sum+=a[1][1];
                for(int i=1;i<size-1;i++)
                {
                        for(int j=0;j<size;j++)
                        {
                                a[i][j]=a[i+1][j];
                        }
                }
                for(int j=1;j<size-1;j++)
                {
                        for(int i=0;i<size-1;i++)
                        {
                                a[i][j]=a[i][j+1];
                        }
                }
            }
            cout<<sum<<endl;
    }
    return 0;
}
                
