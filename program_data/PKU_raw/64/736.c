
int main()
{
    struct point
    {
        int NO;//????
        double x;double y;double z;//????
        double d[10];//??????
    }points[10];
//??????? ? ???
    struct data
    {
        int num;
        int fromx;int fromy;int fromz;
        int tox;int toy;int toz;
        double dd;
    }result[45+5],temp;
//??????? ?? ???
    int n;
    cin>>n;
//????
    for(int i=0;i<=n-1;i++)
    {
        points[i].NO=i+1;
        cin>>points[i].x>>points[i].y>>points[i].z;
    }
//?????
    int k=0;
    int end;

    for(int i=0;i<=n-2;i++)
        for(int j=i+1;j<=n-1;j++)
            {
                result[++k].dd=points[i].d[j]=sqrt((points[i].x-points[j].x)*(points[i].x-points[j].x)+
                                    (points[i].y-points[j].y)*(points[i].y-points[j].y)+
                                    (points[i].z-points[j].z)*(points[i].z-points[j].z));
                result[k].fromx=(int)points[i].x;
                result[k].fromy=(int)points[i].y;
                result[k].fromz=(int)points[i].z;
                result[k].tox=(int)points[j].x;
                result[k].toy=(int)points[j].y;
                result[k].toz=(int)points[j].z;
                result[k].num=k;
                end=k;
            }
//???????
    for(int i=1;i<=end;i++)
        for(int j=i;j<=end;j++)
            {
                if(result[i].dd<result[j].dd)
                {
                    temp=result[i];
                    result[i]=result[j];
                    result[j]=temp;
                }
            }
//?????????
    for(int i=1;i<=end;i++)
        for(int j=i;j<=end;j++)
            {
                if(result[i].dd==result[j].dd&&result[i].num>result[j].num)
                {
                    temp=result[i];
                    result[i]=result[j];
                    result[j]=temp;
                }
            }
//????????????
    for(int i=1;i<=end;i++)
    {
        cout<<"("<<result[i].fromx<<","<<result[i].fromy<<","<<result[i].fromz<<")-("
                 <<result[i].tox<<","<<result[i].toy<<","<<result[i].toz<<")="
                 <<fixed<<setprecision(2)<<result[i].dd<<endl;
    }
//??
    return 0;
}
