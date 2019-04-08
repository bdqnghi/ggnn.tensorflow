int main(){
    int i,j,k,n,a[1000];
    cin>>n>>k;
    for(i=0;i<n;++i)cin>>a[i];
    for(i=0;i<n-1;++i)
        for(j=i+1;j<n;++j)
            if(a[i]+a[j]==k)
                goto there;
    there:
    if(i==n-1)cout<<"no"<<endl;
    else cout<<"yes"<<endl;
}