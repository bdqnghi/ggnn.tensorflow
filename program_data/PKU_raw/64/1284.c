int main ()
{
    int n,a[4][10],p;                //?? 
    float dis[100][3];
    float fuzhu;
    cin >>n;                //?? 
    for (int i=0;i<n;i++)
    {
        for (int j=1;j<=3;j++)
        {
            cin >>a[j][i];
        }
    }
    p=0;
    for (int i=0;i<n;i++)              //?? 
    {
        for (int j=i+1;j<n;j++)
        {
            p++;
            dis[p][0]=sqrt((float)((a[1][i]-a[1][j])*(a[1][i]-a[1][j])+(a[2][i]-a[2][j])*(a[2][i]-a[2][j])+(a[3][i]-a[3][j])*(a[3][i]-a[3][j])));
            dis[p][1]=i;
            dis[p][2]=j;
        }
    }
    for (int i=1;i<=1000;i++)          //?? 
    {
        for (int j=1;j<=p-1;j++)
        {
            if (dis[j][0]<dis[j+1][0])
            {
               fuzhu=dis[j][0];dis[j][0]=dis[j+1][0];dis[j+1][0]=fuzhu;
               fuzhu=dis[j][1];dis[j][1]=dis[j+1][1];dis[j+1][1]=fuzhu;
               fuzhu=dis[j][2];dis[j][2]=dis[j+1][2];dis[j+1][2]=fuzhu;
            }
        }
    }
    for (int i=1;i<=p;i++)               //?? 
    {
        cout <<"("<<a[1][(int)dis[i][1]]<<","<<a[2][(int)dis[i][1]]<<","<<a[3][(int)dis[i][1]]<<")-("<<a[1][(int)dis[i][2]]<<","<<a[2][(int)dis[i][2]]<<","<<a[3][(int)dis[i][2]]<<")=";
        cout <<fixed<<setprecision(2)<<dis[i][0];
        cout <<endl;
    }
    return 0;
}
