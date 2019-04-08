struct node
{
    int x,y,z;
}p[10];
struct d
{
    double d;
    int p1,p2;
}dis[45];
int n,t=0;

double dist(int x,int y)
{
    int dx=p[x].x-p[y].x,dy=p[x].y-p[y].y,dz=p[x].z-p[y].z;
    return sqrt(1.0*dx*dx+1.0*dy*dy+1.0*dz*dz);
}

void swap(int i,int j)
{
    struct d tmp=dis[i];
    dis[i]=dis[j];
    dis[j]=tmp;
}

void init()
{
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&p[i].x,&p[i].y,&p[i].z);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            dis[t].p1=i;dis[t].p2=j;
            dis[t].d=dist(i,j);
            t++;
        }
    }
}

void solve()
{
    int i,j;
    for(i=0;i<t;i++)
    {
        for(j=0;j<t-i-1;j++)
        {
            if(dis[j].d<dis[j+1].d)
            {
                swap(j,j+1);
            }
        }
        
    }
}

void print()
{
    int i;
    for(i=0;i<t;i++)
    {
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",p[dis[i].p1].x,p[dis[i].p1].y,p[dis[i].p1].z,
                                 p[dis[i].p2].x,p[dis[i].p2].y,p[dis[i].p2].z,dis[i].d);
    }
}

int main()
{
    init();
    solve();
    print();
    return 0;
}
