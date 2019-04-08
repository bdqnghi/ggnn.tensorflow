int sushu(int);
int main()
{
    int m;
    cin>>m;
    for(int i=2;i<=m/2;i++)
    {
        if(sushu(i)&&sushu(m-i))
        cout<<i<<" "<<m-i<<endl;
    }
    
    return 0;
}
int sushu(int n)
{
    int j;
    for( j=2;j<=sqrt(n);j++)
    {
        if(n%j==0)
        {
        return 0;
        break;
        }
    }
    if(j==(int)sqrt(n)+1)
    return 1;
}   
