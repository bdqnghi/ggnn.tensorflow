
int m,n;
int a[9][9]={0},b[9][9]={0};
void xijunfanzhi (int day)
{
    int i ,j;
    if (day == n+1)
    {
        return;
    }
    else
    {
        for (i=0;i<9;i++)
        {
            for (j=0;j<9;j++)
            {
                if (a[i][j]!=0)
                {
                    b[i+1][j]=b[i+1][j]+a[i][j];
                    b[i-1][j]=b[i-1][j]+a[i][j];
                    b[i+1][j+1]=b[i+1][j+1]+a[i][j];
                    b[i+1][j-1]=b[i+1][j-1]+a[i][j];
                    b[i-1][j+1]=b[i-1][j+1]+a[i][j];
                    b[i-1][j-1]=b[i-1][j-1]+a[i][j];
                    b[i][j+1]=b[i][j+1]+a[i][j];
                    b[i][j-1]=b[i][j-1]+a[i][j];
                    b[i][j]=b[i][j]+a[i][j];

                }

            }
        }
        for (i=0;i<9;i++)
        {
            for (j=0;j<9;j++)
            {
                a[i][j]=a[i][j]+b[i][j];
                b[i][j]=0;
            }
        }
        xijunfanzhi(day+1);

    }
}
int main()
{
    int i,j;
    cin >> m >> n;a[4][4]=m;
    xijunfanzhi(1);
    for (i=0;i<9;i++)
    {

        for (j=0;j<9;j++)
        {
            if (j!=8)
            cout << a[i][j]<<' ';
            else
            cout << a[i][j]<<endl;;
        }
    }
    return 0;
}
