
double juli(int a,int b,int c,int d,int e,int f)
{
    int x,y,z;
    double sum;
    x=d-a;
    y=e-b;
    z=f-c;
    sum=x*x+y*y+z*z;
    sum=sqrt(sum);
    return sum;
}
int main()
{
    int n,i,j;
    int sz[10][3];
    double distance[45][9];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&sz[i][j]);
        }
        sz[i][3]=i;
    }
    int r=0,k;
    for(i=0;i<n;i++)
    {
        if(i<n-1)
        {
            for(j=i+1;j<n;j++)
            {
                distance[r][0]=sz[i][0];
                distance[r][1]=sz[i][1];
                distance[r][2]=sz[i][2];
                distance[r][3]=sz[i][3];
                distance[r][4]=sz[j][0];
                distance[r][5]=sz[j][1];
                distance[r][6]=sz[j][2];
                distance[r][7]=sz[j][3];
                distance[r][8]=juli(sz[i][0],sz[i][1],sz[i][2],sz[j][0],sz[j][1],sz[j][2]);
                r++;
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r-i;j++)
        {
            double c[10];
            if(distance[j][8]<distance[j+1][8])
            {
                for(k=0;k<9;k++)
                {
                    c[k]=distance[j][k];
                }
                for(k=0;k<9;k++)
                {
                    distance[j][k]=distance[j+1][k];
                }
                for(k=0;k<9;k++)
                {
                    distance[j+1][k]=c[k];
                }
                //*c=*distance[j];
                //*distance[j]=*distance[j+1];
                //*distance[j+1]=*c;
            }
        }
    }
    for(i=0;i<r;i++)
    {
        printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",distance[i][0],distance[i][1],distance[i][2],distance[i][4],distance[i][5],distance[i][6],distance[i][8]);
    }
    return 0;
}