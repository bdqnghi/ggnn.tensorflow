
int a[5][5],t;

int main()
{
    int i,j,m,n;
    for(i=0;i<5;i++)
    {
                    for (j=0;j<5;j++)
                    {
                        cin>>a[i][j];
                    }
    }
    cin>>n>>m;
    if (n<0 || n>4 || m<0 || m>4) cout<<"error"<<endl;
    else
    {
        for (i=0;i<5;i++)
        {
            t=a[n][i];
            a[n][i]=a[m][i];
            a[m][i]=t;
        }
        for (i=0;i<5;i++)
        {
            cout<<a[i][0];
            for (j=1;j<5;j++)
            {
                cout<<' '<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
