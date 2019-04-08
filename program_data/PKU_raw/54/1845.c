int k,n;

int f(int n,int m);
int main()
{
    cin>>n>>k;
    for(int i=1;;i++)
    {
        int sum=f(n,i*n+k);
        if(sum)  {  cout<<sum;    break; }
    }
    
    
    return 0;
}

int f(int a,int m)
{
    if(a==1)return m;
    if(m%(n-1)!=0)  return 0;
    else return f(a-1,m*n/(n-1)+k);
}