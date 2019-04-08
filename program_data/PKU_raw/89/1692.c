int outd[100000],ind[100000];
int main(){
    int n,a,b;
    scanf("%d",&n);
    memset(outd,0,sizeof(outd));
    memset(ind,0,sizeof(ind));
    while(scanf("%d%d",&a,&b)!=EOF){
        if(a==0&&b==0)break;
        outd[a]++,ind[b]++;
    }
    int flag=0;
    for(int i=0;i<n;i++)
        if(ind[i]==n-1&&outd[i]==0){
            cout<<i<<endl;
            flag=1;
        }
    if(!flag)
        cout<<"NOT FOUND"<<endl;
    return(0);
}

