
int main()
{
    int x,y;
    cin>>x>>y;int t1=x,t2=y;
    int xx[12],yy[12];int k=0,kk=0;
    while(x>0)
    {
              xx[k++]=x;
              x=x/2;
    }
    while(y>0)
    {
              yy[kk++]=y;
              y=y/2;
    }
    int ans=0;
    for(int i=0;i<k;i++)
    {
            for(int j=0;j<kk;j++)
             if(xx[i]==yy[j])
              ans=xx[i];
              if(ans!=0)
              break;     
    }
    if(t1==t2) ans=t1;
    cout<<ans<<endl;
    return 0;
}
              
              
