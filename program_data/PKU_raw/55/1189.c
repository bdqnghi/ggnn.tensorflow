int main()
{
    int a,b,n=0,c,i;
    char d[100];
    cin>>a;
    cin.get();

    while((c=cin.get())!=' ')
    {
        if(48<=c&&c<=57)  c=c-48;
        if(65<=c&&c<=90)  c=c-55;
        if(97<=c&&c<=122) c=c-87;
        n=n*a+c;
    }

    cin>>b;
    if(n==0) cout<<'0'<<endl;

    for(i=1; n!=0; i++)
    {
        d[i]=n%b;
        n=n/b;
    }

    for(i=i-1; i>=1; i--)
    {
        if(0<=d[i]&&d[i]<=9)   d[i]=d[i]+48;
        else  d[i]=d[i]+55;
        cout<<d[i];
    }
    cout<<endl;

    return  0;
}
