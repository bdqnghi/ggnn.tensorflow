int s[1000000];
int main()
{
    int i,j,k,n,a,pos;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>s[i];
    cin>>k;
    for (int i=1;i<=n;i++)
        {if (s[i]!=k)
           pos=i;}
    for(i=1;i<=n;i++)
    {
        if(s[i]!=k && i!=pos)
            cout<<s[i]<<" ";
        if (s[i]!=k && i==pos)
           cout<<s[i]<<endl;
    }
    return 0;
}  
