int main()
{
    int a;
    cin>>a;
    int b[a],c[a],d;
    for (int i=0;i<a;i++)
    {
        c[i]=0;
        cin>>b[i];
    }
    for (int i=0;i<a;i++)
    {
        for (int j=i+1;j<a;j++)
        {
            if (b[j]==b[i])
                c[j]++;
        }
    }
    for (int i=0;i<a;i++)
    {
        if (c[i]==0)
            d=i;
    }
    for (int i=0;i<d;i++)
    {
        if (c[i]!=0)
            i=i;
        else
            cout<<b[i]<<",";
    }
    cout<<b[d];
    return 0;
}