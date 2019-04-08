int main(){
    int n,m,i;
    cin>>n;
    m=(int)(log10(n)+1);
    if(n==0)
    cout<<0;
    else{
    for(i=1;i<=m;i++){
      cout<<n%10;
      n=(n-n%10)/10;
                      }
                      }
      return 0;
}