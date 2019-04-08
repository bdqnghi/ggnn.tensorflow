int main()
{
    int n,b3=0,b5=0,b7=0;
    cin>>n;
    if(n%3==0)
    {
    cout<<3;
    b3=1;
    }
    if(n%5==0)
    {
    if(b3!=0)
    cout<<' ';
    cout<<5;
    b5=1;
    }
    if(n%7==0)
    {
    if(b3!=0||b5!=0)
    cout<<' ';
    cout<<7;
    b7=1;
    }
    if(b3==0&&b5==0&&b7==0)
    cout<<'n';

}
