int main()
{
    char N1[32];
    int N2[32];
    int N3[32];
    int a,b,n=0;
    cin>>a;
    cin>>N1;
    cin>>b;
    int len1=strlen(N1);
    for(int i=0;i<len1;i++)
    {
    if(N1[i]>='a'&&N1[i]<='z')
    N1[i]-=('a'-'A');
    if(N1[i]>='A'&&N1[i]<='Z')
    N3[i]=N1[i]-'A'+10;
    else
    N3[i]=N1[i]-'0';
    }
    for(int i=0;i<len1;i++)
    n=n * a+N3[i];
    if(n==0)
    {
    cout<<0<<endl;return 0;}
    int j;
    for(j=0;n!=0;j++)
    {
        N2[j]=n%b;
        n=n/b;
    }
    for(j --;j>=0;j--)
    if (N2[j] < 10)
        cout<<N2[j];
    else
        cout << (char)(N2[j] - 10 + 'A');
    return 0;

}


