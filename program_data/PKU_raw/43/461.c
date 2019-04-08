

int main()
{
    int n,i,j,k,m;
    i = 2;
    cin>>n;
    for(;i<=n/2;i++)
    {
        j = n-i;
        if (i%2!=0 && j%2!=0)
        {
            m=0;
            for (k=2;k<=j-1;k++)
            {
                if (k != i)
                {
                    if (i%k==0 || j%k==0)
                       m++;
                }
            }
            if ( m == 0)
                cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}