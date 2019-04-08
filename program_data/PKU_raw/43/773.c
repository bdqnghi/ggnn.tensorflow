int main()
{
    int m;
    cin>>m;
    int i,j,k,a=0,b=0,c,d;
    for (i=3;i<=m-1;i=i+2)
    {
        for(j=m-i-1;j>=2;j--)
        {
            c=(m-i)%j;
            if(c==0)
            b=b+1;
            if(c!=0)
            b=b+0;
        }
        for(k=2;k<i;k++)
        {
            d=i%k;
            if(d==0)
            a=a+1;
            if(d!=0)
            a=a+0;
        }
        if(a==0&&b==0&&i<=(m-i))
        cout<<i<<" "<<m-i<<endl;
        a=0;
        b=0;
}
return 0;
}