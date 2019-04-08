int main()
{
    int n,i=1,m;
    int a[6]={0,0,0,0,0,0};
    cin>>n;     //???? 
    if(n>=10)
    { 
    do
    {
       a[i]=n%10;
       n=n/10;
       i=i+1;
    }while(n>=10);     //???????? 
    m=i-1;
    for(i=1;i<=m;i++) 
    cout<<a[i];
    cout<<n;
    }
    else cout<<n;                 //????? 
    return 0;
}


