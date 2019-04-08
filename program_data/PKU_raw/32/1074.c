
int main()
{
    int n,times=0;
    cin>>n;
    while(true)
    {

    char ch1[100],ch2[100],ch3[100];
    char temp;
    memset(ch1,0,100);
    memset(ch2,0,100);
    memset(ch3,0,100);
    cin>>ch1;
    cin>>ch2;
    int len1=strlen(ch1);
    int len2=strlen(ch2);
    for(int i=0;i<=len1/2-1;i++)
    {
        temp=ch1[i];
        ch1[i]=ch1[len1-i-1];
        ch1[len1-i-1]=temp;
    }
    for(int i=0;i<=len2/2-1;i++)
    {
        temp=ch2[i];
        ch2[i]=ch2[len2-i-1];
        ch2[len2-i-1]=temp;
    }
    for(int i=len2;i<=len1-1;i++)
    ch2[i]='0';
    for(int i=0;i<=len1-1;i++)
    ch3[i]=ch1[i]-ch2[i]+48;
    for(int i=1;i<=len1;i++)
    {
        for(int j=0;j<=len1-1;j++)
        {
            if(ch3[j]<'0')
            {
                ch3[j]+=10;
                ch3[j+1]-=1;
            }
        }
    }

    if(ch3[len1-1]=='0')
    {
        for(int i=len1-2;i>=0;i--)
        cout<<ch3[i];
    }
    else
    {
        for(int i=len1-1;i>=0;i--)
        cout<<ch3[i];
    }
    cout<<endl;
    cin.get();
    times++;
    if(times==n)break;

}
    return 0;
}
