
int main()
{
    char ch[10]={0};
    int i,s=0;
    gets(ch);
    i=0;
    while(ch[i]!='\0')
    {
        s=i;
        i++;
    }
    for(i=s;i>=0;i--)
    {
        printf("%c",ch[i]);
    }

}