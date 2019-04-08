void reverse(int n)
{
    if(n>0)
    {
        int c;
        char d;
        cin>>c;
        d=getchar();
        reverse(n-1);
        cout<<d<<c;}
}
int main()
{
    int n;
    cin>>n;
    reverse(n);
    return 0;
}
