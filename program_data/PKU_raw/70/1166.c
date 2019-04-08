int main ()
{
    int n;
    double point[3000][2],
           ans=0;
    cin >>n;
    for (int i=1;i<=n;i++)
        cin >>point[i][0]>>point[i][1];
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (i==j)
                continue;
            double f;
            f=hypot(point[i][0]-point[j][0],point[i][1]-point[j][1]);
            ans=max(ans,f);
        }
    }
    cout <<fixed<<setprecision(4)<<ans;
    return 0;
}
