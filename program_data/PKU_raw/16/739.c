int main()
{
    int n,p,q,r,s,t;
    cin>>n;
    p=n%10;
    n=(n-p)/10;
    q=n%10;
    n=(n-q)/10;
    r=n%10;
    n=(n-r)/10;
    s=n%10;
    n=(n-s)/10;
    t=n;
    if(t!=0)
        cout<<p<<q<<r<<s<<t<<endl;
    else
    {
        if(s!=0)
             cout<<p<<q<<r<<s<<endl;
        else
        {
            if(r!=0)
                cout<<p<<q<<r<<endl;
            else
            {
                if(q!=0)
                    cout<<p<<q<<endl;
                else
                    cout<<p<<endl;
             }
        }
    }
    return 0;
}