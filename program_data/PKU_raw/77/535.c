 int a[100];
int f(int n)
{
    for(int i=n-1;i>=0;i--)
    if(a[i]==0) { cout<<i<<' '<<n<<endl;
    a[i]=-1;break;}
}
int main()
{
    char c[100];
    cin>>c;
    a[0]=0;
    int i,k=strlen(c);
    for(i=1;i<k;i++)
    {
    if(c[i]==c[0]) a[i]=0;
    else a[i]=1;
    }
    for(i=0;i<k;i++)
    {  if(a[i]==1) f(i);
    }
    return 0;
}
