int main()
{
    char s[202],a[202],b[202],ch[202];
    gets(s);
    gets(a);
    gets(b);
    int k=0;
    for(int j=0;j<strlen(s);++j)
    {
        if(s[j]!=' ')
        {
            ch[k]=s[j];
            ++k;
        }
        else
        {
            ch[k]='\0';
            if(!strcmp(ch,a))
                cout<<b<<" ";
            else
                cout<<ch<<" ";
            memset(ch,0,sizeof(char)*k);
            k=0;
        }
        if(j==strlen(s)-1)
        {
            if(!strcmp(ch,a))
                cout<<b<<endl;
            else
                cout<<ch<<endl;
        }
    }
    return 0;
}