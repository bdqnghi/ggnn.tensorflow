struct d
{
    int q[2];  //q ????????
    float dis;  
};
int main()
{
    int n,i,j,k=0,t2[2];
    struct d dist[100];
    float a[10][3],t1;   //?????????a?
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<3;j++)
            scanf("%f",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        {
            dist[k].dis=sqrtf( (a[i][0]-a[j][0])*(a[i][0]-a[j][0]) + (a[i][1]-a[j][1])*(a[i][1]-a[j][1]) + (a[i][2]-a[j][2])*(a[i][2]-a[j][2]) );//????
            dist[k].q[0]=i;
            dist[k].q[1]=j;
            k++;
        }
    for(i=0;i<n*(n-1)/2;i++)  //??????????????????
        for(j=n*(n-1)/2-1;j>0;j--)
        {
            if(dist[j-1].dis<dist[j].dis)
            {
                t1=dist[j-1].dis;
                t2[0]=dist[j-1].q[0];
                t2[1]=dist[j-1].q[1];
                dist[j-1].dis=dist[j].dis;
                dist[j-1].q[0]=dist[j].q[0];
                dist[j-1].q[1]=dist[j].q[1];
                dist[j].dis=t1;
                dist[j].q[0]=t2[0];
                dist[j].q[1]=t2[1];
            }
        }
    for(i=0;i<n*(n-1)/2;i++)      printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",(int)a[dist[i].q[0]][0],(int)a[dist[i].q[0]][1],(int)a[dist[i].q[0]][2],(int)a[dist[i].q[1]][0],(int)a[dist[i].q[1]][1],(int)a[dist[i].q[1]][2],dist[i].dis);
    return 0;
}