int num=0;
void f(int x,int y)
{
    num++;
    for(int j=y;j*j<=x;j++)
    {
           if(x%j==0)
             f(x/j,j);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[1100];
    for(int i=1;i<=n;i++)
    {
            num=0;
            cin>>a[i];
            f(a[i],2);
            cout<<num<<endl;
            
    }
        return 0;
}

