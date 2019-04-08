int main ()
{
    int n;
    cin >>n;
    for (int j=1;j<=n;j++)
    {
        int m;
        int ans=60;
        int a[30];
        cin >>m;
        for (int i=1;i<=m;i++)
            cin >>a[i];
        for (int i=1;i<=m;i++)
        {
            if (a[i]+3*(i-1)>=60)
                break;
            if (a[i]+3*i>=60)
            {
                ans=a[i];
                break;
            }
            ans=ans-3;
        }
        cout <<ans<<endl;
    }
    return 0;
}
