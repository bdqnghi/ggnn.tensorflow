/* Name        : ?????????
 * Version     : 1.0
 * Date        : 2013-01-11
 * New         : 
 * Description : 
 * State       : Design
 */
int main()
{
    int N=0;
    cin>>N;
    for (int n=0;n<N;n++)
    {
        int a[100][100]={0};
        int Sum=0;
        for (int i=0;i<N;i++)
            for (int j=0;j<N;j++) cin>>a[i][j];
        for (int m=N;m>1;m--)
        {
            for (int i=0;i<m;i++)
            {
                int Min=a[i][0];
                for (int j=0;j<m;j++)
                    if (Min>a[i][j]) Min=a[i][j];
                for (int j=0;j<m;j++)
                    a[i][j]=a[i][j]-Min;
            }
            for (int j=0;j<m;j++)
            {
                int Min=a[0][j];
                for (int i=0;i<m;i++)
                    if (Min>a[i][j]) Min=a[i][j];
                for (int i=0;i<m;i++)
                    a[i][j]=a[i][j]-Min;
            }
            Sum=Sum+a[1][1];
            for (int j=1;j<m-1;j++) a[0][j]=a[0][j+1];
            for (int i=1;i<m-1;i++) a[i][0]=a[i+1][0];
            for (int i=1;i<m-1;i++)
                for (int j=1;j<m-1;j++) a[i][j]=a[i+1][j+1];
        }
        cout<<Sum<<endl;
    }
    return 0;
}
