
int no()
{
    cout << 0 << endl;
    return 0;
}

int yes()
{
    cout << 1 << endl;
    return 0;
}


int main()
{
    char s[300];
    int i, n, k;
    cin >> n;
    getchar();
    for(k=1; k<=n; k++)
    {
        gets(s);
        if(!((s[0]>='A' && s[0]<='Z')||(s[0]>='a' && s[0]<='z')|| s[0]=='_'))
        {
            no();
            continue;
        }
        for(i=0; s[i]!='\0'; i++)
        {
            if(!((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')|| s[i]=='_'))
            {
                no();
                break;
            }
        }
        if(s[i]=='\0')
            yes();
    }
    return 0;
}
