int main()
{
    int n,i,j,k,t;
    i=0;j=0;k=0;t=0;
    cin >>n;
    if (n%3==0) i=1;
    if (n%5==0) j=1;
    if (n%7==0) k=1;
    t=i+j+k;
    if (t==0) cout <<"n"<<endl;
    if (t==1)
    {
        if (i==1) cout <<3<<endl;
        if (j==1) cout <<5<<endl;
        if (k==1) cout <<7<<endl;
    }
    if (t==2)
    {
        if (i==0) cout <<"5 7"<<endl;
        if (j==0) cout <<"3 7"<<endl;
        if (k==0) cout <<"3 5"<<endl;
    }
    if (t==3) cout <<"3 5 7"<<endl;
    return 0;
}
