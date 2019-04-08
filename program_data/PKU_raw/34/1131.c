

int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"End";
        return 0;
    }
    while(n!=2)
    {
        if(n%2)
        {
            cout<<n<<'*'<<3<<'+'<<1<<'=';
            n=n*3+1;
            cout<<n<<endl;
        }
        else
        {
            cout<<n<<'/'<<2<<'=';
            n=n/2;
            cout<<n<<endl;
        }
    }
    cout<<2<<'/'<<2<<'='<<1<<endl;
    cout<<"End";
    return 0;
}
