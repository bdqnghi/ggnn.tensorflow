int main()
{
    int a,b=0;
    cin>>a;
    if(a%3==0)
    {
       cout<<3;
       b=1;
    }
    if(a%5==0)
    {
       if(b==1)
       cout<<" ";
       cout<<5;
       b=1;
    }
    if(a%7==0)
    {
        if(b==1)
        cout<<" ";
        cout<<7;
        b=1;
    }
    if(b==0)
    cout<<"n";
    cout<<endl;
    return EXIT_SUCCESS;
}
