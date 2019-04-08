int main(){
    int N,m;
    while(true){
        int count=0,number=0;
        cin>>N>>m;
        if(N==0&&m==0)break;
        const int n=N;
        int a[n+1];
        memset(a,0,sizeof a);
        for(int i=1;;++i){
            if(i>n) i=i-n;
            if(a[i]==1)continue;
            else{
                ++count;
                //cout<<"i="<<i<<" count="<<count<<" a["<<i<<"]="<<a[i]endl;
                
            }
            if(number==n-1){break;}
            if(count==m){
                number++;
                count=0;
                a[i]=1;
                //cout<<"number="<<number<<"a["<<i<<"]="<<a[i]<<endl
                
            }
        }
    for(int i=1;i<=n;++i)
    if(a[i]==0)cout<<i<<endl;
    }
    return 0;
}
