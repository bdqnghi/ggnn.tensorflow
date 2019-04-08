int main()
{
    int n[27];
    char s[1001];
    gets(s);
    int i,j,k;
    int c=1;
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
                    if(s[i]<='z'&&s[i]>='a')
                    s[i]=s[i]-'a'+'A';
    }
    for(i=1;i<l;i++)
    {
                    if(s[i]==s[i-1])
                    {c++;}
                    else
                    {
                        printf("(%c,%d)",s[i-1],c);
                        c=1;
                    }
    }
    printf("(%c,%d)",s[l-1],c);
    getchar();
    getchar();
}