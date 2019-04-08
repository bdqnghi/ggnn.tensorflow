const int N=10;
int n,m,x[N],y[N],z[N];
int p1[N*N/2],p2[N*N/2];
int main()
{
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>x[i]>>y[i]>>z[i];
    m=0;
    for (int i=0;i<n;i++)
        for (int j=i+1;j<n;j++)
        {
            p1[m]=i;
            p2[m++]=j;
        }
    for (int i=0;i<m;i++)
        for (int j=0;j<m-1;j++)
        {
            //int &c1=p1[j],&c2=p2[j],&d1=p1[j+1],&d2=p2[j+1];
            int c1=p1[j],c2=p2[j],d1=p1[j+1],d2=p2[j+1];
            if ((x[c1]-x[c2])*(x[c1]-x[c2])+(y[c1]-y[c2])*(y[c1]-y[c2])+(z[c1]-z[c2])*(z[c1]-z[c2])<
                (x[d1]-x[d2])*(x[d1]-x[d2])+(y[d1]-y[d2])*(y[d1]-y[d2])+(z[d1]-z[d2])*(z[d1]-z[d2]))
            {
                /*int temp;
                temp=c1;
                c1=d1;
                d1=temp;
                temp=c2;
                c2=d2;
                d2=temp;*/
                    int temp;
                    temp=p1[j];
                    p1[j]=p1[j+1];
                    p1[j+1]=temp;
                    temp=p2[j];
                    p2[j]=p2[j+1];
                    p2[j+1]=temp;
            }
        }
    for (int i=0;i<m;i++)
    {
        int c1=p1[i],c2=p2[i];
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[c1],y[c1],z[c1],x[c2],y[c2],z[c2],sqrt(((double)x[c1]-(double)x[c2])*((double)x[c1]-(double)x[c2])+((double)y[c1]-(double)y[c2])*((double)y[c1]-(double)y[c2])+((double)z[c1]-(double)z[c2])*((double)z[c1]-(double)z[c2])));
    }
    return 0;
}