//????
int main()
{
    int n,h=0,hmax=0;
    cin>>n;
    int a[100][3];//a?????
    for(int i=1;i<=n;i++)
    {
        cin>>a[i][1]>>a[i][2];
        if(90<=a[i][1]&&a[i][1]<=140&&60<=a[i][2]&&a[i][2]<=90)
            h++;
        else h=0;
        hmax=h>=hmax?h:hmax;
    }
    cout<<hmax;
}