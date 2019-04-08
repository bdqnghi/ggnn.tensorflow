int check(char n);
int main()
{
    int i=0,n=0;
    cin>>n;
    cin.get();
    for (i=0;i<n;i++)
    {
        int j=0;
        int k=0;
        int flag=0;
        char shuru[100]={0};
        cin.getline(shuru,100);
        if ((shuru[0]=='_')||((shuru[0]>='A')&&(shuru[0]<='Z'))||((shuru[0]>='a')&&(shuru[0]<='z')))
        {
             for (k=1;shuru[k]!='\0';k++)
             {
                 if (check(shuru[k])==0)
                 {
                     flag=1;
                     cout<<"0"<<endl;
                     break;
                 }
             }
             if (flag==0)
             cout<<"1"<<endl;
        }
        else
        cout<<"0"<<endl;
    }
    return 0;
    }
int check(char n)
{
    int c=0;
    if ((n=='_')||((n>='A')&&(n<='Z'))||((n>='a')&&(n<='z'))||((n<='9')&&(n>='0')))
    c=1;
    return c;
}
