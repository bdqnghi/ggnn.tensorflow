main()
{
    int n;
    scanf("%d",&n);
    float a[n][2];
    for(int i=0;i<n;i++)
    {
        scanf("%f %f",&a[i][0],&a[i][1]);
    }
    float dis;
    dis=sqrt((a[0][0]-a[1][0])*(a[0][0]-a[1][0])+(a[0][1]-a[1][1])*(a[0][1]-a[1][1]));
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]))>dis)
            dis=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
        }
    }
    printf("%.4f\n",dis);
}