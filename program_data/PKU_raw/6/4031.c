
int k,m,n;
int arr[105][105];

int main()
{
    cin>>k;
    while(k--)
    {
        cin>>m>>n;
        int sum=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
                if(i==0||i==m-1||j==0||j==n-1)
                    sum+=arr[i][j];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
