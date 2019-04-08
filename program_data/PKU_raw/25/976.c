

int main()
{
    int n;
    cin>>n;
    int w,s[100]; memset(s,0,sizeof(s));
    w=1; s[1]=1;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=w;j++) s[j]*=2;
        for (int j=1;j<=w;j++)
        {
            s[j+1]=s[j+1]+s[j]/10;
            s[j]=s[j]%10;
        }
        if (s[w+1]>0) w++;
    }
    for (int i=w;i>=1;i--) cout<<s[i];

    return 0;
}
