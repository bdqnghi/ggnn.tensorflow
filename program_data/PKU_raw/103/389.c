int main()
{
    char a[1001];
    cin >> a;
    int i,j,k;
    int f=1,f2=0;
    for (i=0;i<strlen(a);i++)
    {
        if (a[i]=='a') a[i]='A';
        if (a[i]=='b') a[i]='B';
        if (a[i]=='c') a[i]='C';
        if (a[i]=='d') a[i]='D';
    }
    for (i=1;i<strlen(a);i++)
    {
        if(a[i]==a[i-1])
        {f++;
        f2++;}
        else
        {
            cout <<"("<<a[i-1]<<","<<f<<")";
            f=1;
            f2=0;
        }
    }
 
    cout <<"("<<a[strlen(a)-1]<<","<<f<<")";
    return 0;
}
