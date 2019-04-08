struct distant
{
       int x1;
       int x2;
       float dis;
};
float dist(int x[],int y[])
{
      float d;
      d=(x[0]-y[0])*(x[0]-y[0])+(x[1]-y[1])*(x[1]-y[1])+(x[2]-y[2])*(x[2]-y[2]);
      d=sqrt(d);
      return d;
}
int main()
{
    int n;
    int x[10][3];
    struct distant d[50],temp;
    scanf("%d",&n);
    int i,j,k;
    for(i=0;i<n;i++)
    {
                    for(j=0;j<3;j++)scanf("%d",&x[i][j]);
    }
    for(i=0,k=0;i<n;i++)
    {
                    for(j=i+1;j<n;j++,k++){d[k].x1=i;d[k].x2=j;d[k].dis=dist(x[i],x[j]);}
    }
    for(i=1;i<k;i++)
    {
                    for(j=0;j<k-i;j++)if(d[j].dis<d[j+1].dis){temp=d[j];d[j]=d[j+1];d[j+1]=temp;}
    }
    for(i=0;i<k;i++)printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[d[i].x1][0],x[d[i].x1][1],x[d[i].x1][2],x[d[i].x2][0],x[d[i].x2][1],x[d[i].x2][2],d[i].dis);
}
