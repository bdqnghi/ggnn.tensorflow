int main()
{
    char str[1000];
    gets(str);
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]<'a')
        str[i]=tolower(str[i]);
    }
    int a=1;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!=str[i+1])
        {
        printf("(%c,%d)",str[i]-'a'+'A',a);
        a=1;
        }
        else a++;
    }

}