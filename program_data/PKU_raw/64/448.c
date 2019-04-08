int main()
{
    int n;
    scanf("%d",&n);
    int point[11][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&point[i][j]);
        }    
    }
    double distance[15][15]={0};
    double s;
    for(int i=0;i<n;i++)
    {
        for(int k=1;i+k<n;k++)
        {
            s=sqrt((point[i][0]-point[i+k][0])*(point[i][0]-point[i+k][0])+(point[i][1]-point[i+k][1])*(point[i][1]-point[i+k][1])+(point[i][2]-point[i+k][2])*(point[i][2]-point[i+k][2]));
            distance[i][i+k]=s;    
        }    
    }
    double lenth[105];
    int id[105][2];
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(distance[i][j]==0)
            {
               continue;                  
            }
            id[k][0]=i;
            id[k][1]=j;
            lenth[k]=distance[i][j];
            k++;    
        }    
    }
    double e;
    for(int p=1;p<k;p++)
    {
        for(int i=k-1;i>=p;i--)
        {
            if(lenth[i]>lenth[i-1])
            {
               e=id[i][0];
               id[i][0]=id[i-1][0];
               id[i-1][0]=e;
               e=id[i][1];
               id[i][1]=id[i-1][1];
               id[i-1][1]=e;
               e=lenth[i];
               lenth[i]=lenth[i-1];
               lenth[i-1]=e;                    
            }    
        }    
    }
    for(int i=0;i<k;i++)
    {
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",point[id[i][0]][0],point[id[i][0]][1],point[id[i][0]][2],point[id[i][1]][0],point[id[i][1]][1],point[id[i][1]][2],lenth[i]);    
    }
    scanf("%d",&n);
    return 0;
}