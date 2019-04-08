
int max(int(x),int(y))
{
    if(x>=y)
        return x;
    else
        return y;
}

int main()
{   int n;
    cin>>n;
    int i=0;
    int t1=0,t2=0;
    int t=0;
    int a,b;
    for (i=0;i<n;i++)
    {
        cin>>a>>b;
        if ((a>=90&&a<=140)&&(b>=60&&b<=90))
       {

        t=t+1;
        t1=t;
       }
        else
       {


        t1=max(t,t2);
        t=0;
        t2=t1;

       }

    }
    t1=max(t,t2);
    cout<<t1;
    return 0;
}