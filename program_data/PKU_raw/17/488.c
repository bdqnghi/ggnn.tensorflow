
char a[110];
void match(int l)
{
    if(a[l]=='\0') return;
    int j;
    if(a[l]==')')
        {
            for(j=l;j>=0;j--)
            {
                if(a[j]=='(')
                   {
                       a[l]=' ';
                       a[j]=' ';
                       break;
                   }
                a[l]='?';
            }
            l++;
            match(l);
        }
    else
    {
        l++;
        match(l);
    }
}
int main()
{
    int i;
    for(i=0;i<110;i++)
    a[i]='\0';
    while(cin.getline(a,101))
    {
        cout<<a<<endl;
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]!='('&&a[i]!=')')
            a[i]=' ';
        }
        match(0);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='(')
               a[i]='$';
        }
        for(i=0;a[i]!='\0';i++)
        cout<<a[i];
        cout<<endl;
        for(i=0;a[i]!='\0';i++)
        a[i]='\0';
    }
    return 0;
}
