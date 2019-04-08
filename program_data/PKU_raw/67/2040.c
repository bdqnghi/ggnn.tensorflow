int main()
{
    int a,b,c;
    float m,n,r;
    cin>>a;
    cin>>m>>n;
    r=n/m;
    for(;a>1;a--)
    {
        cin>>m>>n;
        cout<<(n/m-r>0.05?"better":(r-n/m>0.05?"worse":"same"))<<endl;
    }
    return EXIT_SUCCESS;
}
