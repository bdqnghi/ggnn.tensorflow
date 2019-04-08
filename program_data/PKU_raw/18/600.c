int array[101][101],n;
int ans=0;
int findm(int x,int y);
int findn(int x,int y);  //?????????
int main()
{
    int i,j,k;
    int a,b,m,minm,temp[101][101];
    cin>>n;
    for(k=0;k<n;++k)
    {
        ans=0;
        for(i=0;i<n;++i)
        {
            for(j=0;j<n;++j)
            {
                cin>>array[i][j];
            }
        }    //????
        m=n;
        while(m>1)  //?n-1?
        {
            for(i=0;i<m;++i)
            {
                minm=findm(i,m);
                for(j=0;j<m;++j)
                {
                    array[i][j]-=minm;
                }
            }
            for(i=0;i<m;++i)
            {
                minm=findn(i,m);
                for(j=0;j<m;++j)
                {
                    array[j][i]-=minm;
                }
            }         //??????????
            ans+=array[1][1];
            memset(temp,0,sizeof(temp));  
            a=0;
            b=0;    //???
            for(i=0;i<m;++i)
            {
                if(i==1) continue;
                for(j=0;j<m;++j)
                {
                    if(j==1) continue;
                    temp[a][b]=array[i][j];
                    b++;
                }
                a++;
                b=0;
            }   //?????????????
            memset(array,0,sizeof(array));
            for(i=0;i<a;++i)
            {
                for(j=0;j<a;++j)
                {
                    array[i][j]=temp[i][j];
                }
            }   //??????
            m--;
        }
        cout<<ans<<endl;   //????
    }
    return 0;
}
int findm(int x,int y)
{
     int i,j;
     int minn=1000000;
     for(i=0;i<y;++i) if(array[x][i]<minn) minn=array[x][i];
     return minn;
}
int findn(int x,int y)
{
     int i,j;
     int minn=1000000;
     for(i=0;i<y;++i) if(array[i][x]<minn) minn=array[i][x];
     return minn;
}
