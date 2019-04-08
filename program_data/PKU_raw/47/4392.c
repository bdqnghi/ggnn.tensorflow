int main()
{
    int n=0;
    int i;
    cin >> n;//?? n
    int a[100]={0};
    for (i=1;i<=n;i+=1)   cin>>a[i];
    for (i=n;i>=2;i-=1)   cout<<a[i]<<" ";
    cout<<a[1];//?? 
 
    
    return 0;
} 
