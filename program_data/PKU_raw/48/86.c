int a[11][11];
void day()
{
     int i,j,b[11][11];
     for(i=0;i<11;i++)for(j=0;j<11;j++)b[i][j]=a[i][j];
     for(i=1;i<=9;i++)
     for(j=1;j<=9;j++)
     {
                      b[i+1][j]+=a[i][j];b[i-1][j]+=a[i][j];b[i][j+1]+=a[i][j];b[i][j-1]+=a[i][j];
                      b[i+1][j+1]+=a[i][j];b[i+1][j-1]+=a[i][j];b[i-1][j+1]+=a[i][j];b[i-1][j-1]+=a[i][j];
                      b[i][j]+=a[i][j];
     }
     for(i=0;i<11;i++)for(j=0;j<11;j++)a[i][j]=b[i][j];
}    
int main()
{
    int i,j,n,days;
    for(i=0;i<11;i++)for(j=0;j<11;j++)a[i][j]=0;
    cin>>n;cin>>days;
    a[5][5]=n;
    for(i=1;i<=days;i++)day();
    for(i=1;i<10;i++)
    {
                     cout<<a[i][1];for(j=2;j<10;j++)cout<<' '<<a[i][j];cout<<endl;
    }
    getchar();getchar();
    return 0;
}
