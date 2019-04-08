int f(int m,int n){
    if(m<n)return f(m,m);
    if(m==1||n==1||!n)return 1;//??? m>=1
    if(m>=n)return f(m-n,n)+f(m,n-1);
}
int main(){
    int m,n,t;
    cin>>t;
    while(t--){
        cin>>m>>n;
        cout<<f(m,n)<<endl;
    }
}