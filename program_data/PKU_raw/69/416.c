int main()
{
    int i;
    int num1[256]={0},num2[256]={0},ans[256]={0};
    char str[256];
    cin>>str;
    for(i=strlen(str);i>=0;--i) num1[i]=str[strlen(str)-i]-'0';
     cin>>str;
    for(i=strlen(str);i>=0;--i) num2[i]=str[strlen(str)-i]-'0';
    for(i=0;i<255;++i) ans[i]=num1[i]+num2[i];
    for(i=0;i<255;++i)
    {
        if(ans[i]>=10)
        {
            ans[i+1]++;
            ans[i]-=10;
        }
    }
    for(i=255;i>=0;--i) if(ans[i]) break;
    if(i==0) cout<<0<<endl;
    else
    {
        for(;i>0;--i) cout<<ans[i];
        cout<<endl;
    }
    return 0;
}
