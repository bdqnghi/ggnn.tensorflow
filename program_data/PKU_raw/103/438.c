int main()
{
    char letter[1000];
    int nletter[1000];
    char str[1000];

    memset(letter,'\0',1000);
    memset(str,'\0',1000);

    for(int i=0;i<=1000-1;i++)nletter[i]=1;

    cin>>str;
    int len=strlen(str);
    int n=0;

    letter[0]=str[0];

    for(int i=0;i<=len-1;i++)
    {
        if(letter[n]!=str[i+1]&&(letter[n]!=str[i+1]+'A'-'a')&&(letter[n]!=str[i+1]-'A'+'a'))
        {
            letter[++n]=str[i+1];
        }
        else
        {
            nletter[n]++;
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        if(letter[i]>'Z')letter[i]+=('A'-'a');
    }

    for(int i=0;i<=n-1;i++)
    {
        cout<<"("<<letter[i]<<","<<nletter[i]<<")";
    }
    cout<<endl;
    return 0;
}
