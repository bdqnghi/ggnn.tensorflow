int main()
{
    char str[100];
    int i, len, n, hash=1;
    cin>>n;
    cin.get();
    while(n--)
    {
        hash=1;
        cin.getline(str,100);
        len=strlen(str);
        if((str[0]>='a' && str[0]<='z')||(str[0]>='A' && str[0]<='Z')||str[0]=='_')
        {        hash=1;
            for(i=1; i<len; i++)
            {
                if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
                    hash=1;
                else if((str[i]>='0' && str[i]<='9')||str[i]=='_'||str[i]=='('||str[i]==')')
                    hash=1;
                else
                {
                    hash=0;
                    break;
                }
            }
        }
        else hash=0;
        if(hash==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    
    return 0;
    
}