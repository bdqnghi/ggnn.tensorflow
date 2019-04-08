int seven(int n)
{
    int s=1,b;
    int a[3];
    b=n-n/7*7;
    if(b==0) s=0;
    for(int i=0;i<=2;i++)
    {
            a[i]=n-n/10*10;
            n=n/10;
            if(a[i]==7) s=0;
            }
    return s;
}
int main()
{
    int x,sum=0;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
               sum=sum+i*i*seven(i);
               }
    cout<<sum;
    return 0;
}      