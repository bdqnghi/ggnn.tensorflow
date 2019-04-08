int num=0;
void f(int k,int n)
{
    int i,flag=0;
    for(i=k;i<=n;i++)
    {
        if(n%i==0)
        {
            f(i,n/i);
            flag=1;
        }
    }
    if((flag==0&&k<=n)||n==1)
    num++;
}
int main()
{
    int i,n,m;
    cin>>m;
    for(i=1;i<=m;i++)
    {
       cin>> n;
       f(2,n);
       cout<<num<<endl;
       num=0;
    }

    return 0;
}
