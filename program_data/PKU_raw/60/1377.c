
int f(int n)
{
    int i;
    if(n==2)
    return 1;
    if(n%2==0)
    return 0;
    else
    {
       for(i=3;i<1+sqrt(n);i=i+2)
    {
        if(n%i==0)
        break;
    }
    if(i>sqrt(n))
    return 1;
    else
    return 0;
    }
}

int main()
{
    int n;
    cin>>n;
    if(n<5)
    cout<<"empty"<<endl;
    else
    for(int i=3;i<n-1;i=i+2)
    {
        if(f(i)==1&&1==f(i+2))
        cout<<i<<" "<<i+2<<endl;
    }
    return 0;
}

