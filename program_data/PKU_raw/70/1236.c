int main()
{
    int num;
    double x[100],y[100];
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        cin>>x[i]>>y[i];
    }
    double dis[100][100]={0,};
    double temp_dis=0;
    for(int i=1;i<num;i++)
    {
        for(int j=i+1;j<=num;j++)
        {
            dis[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            if(temp_dis<dis[i][j])
                temp_dis=dis[i][j];
        }
    }
    cout<<fixed<<setprecision(4)<<temp_dis<<endl;
   
    return 0;
}