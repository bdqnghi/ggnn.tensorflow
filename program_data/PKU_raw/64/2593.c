float sqr(float x)
{
      float ans;
      ans=x*x;return(ans);
      }

float work(float a[3],float b[3])
{
      float ans;
      ans=sqrt(sqr(a[0]-b[0])+sqr(a[1]-b[1])+sqr(a[2]-b[2]));
      return(ans);
}

int main()
{
    int n,i,j,x,num;
    int a[101][3]={0};
    float dis[101]={0},d[11][3],x1;
    scanf("%d",&n);
    for (i=0;i<n;i++)
     for (j=0;j<3;j++)
      scanf("%f",&d[i][j]);
    num=0;
    for (i=0;i<n;i++)
     for (j=i+1;j<n;j++)
     {dis[num]=work(d[i],d[j]);a[num][1]=i;a[num][2]=j;num++;}
    for (i=0;i<num-1;i++)
     for (j=0;j<num-1;j++)
     if (dis[j]<dis[j+1])
      {x1=dis[j];dis[j]=dis[j+1];dis[j+1]=x1;
       x=a[j][1];a[j][1]=a[j+1][1];a[j+1][1]=x;
       x=a[j][2];a[j][2]=a[j+1][2];a[j+1][2]=x;}
    for (i=0;i<num;i++)
    {x=a[i][1];j=a[i][2];
     printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",(int)d[x][0],(int)d[x][1],(int)d[x][2],(int)d[j][0],(int)d[j][1],(int)d[j][2],dis[i]);}

}
