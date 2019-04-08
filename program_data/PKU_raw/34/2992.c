int cal(int a)          //??????
{
    int res=2;
    if(res!=1&&a!=1)
    {
        if(a%2==0)
        {
            res=a/2;
            cout<<a<<"/2="<<res<<endl;
        }
        else
        {
            res=a*3+1;
            cout<<a<<"*3+1="<<res<<endl;
        }
        if(res!=1)          //?????????
            cal(res);
        else
            cout<<"End";
    }
    if(a==1)
        cout<<"End";
    return 0;
}
int main()
{
    int n;
    cin>>n;
    cal(n);
    return 0;
}
