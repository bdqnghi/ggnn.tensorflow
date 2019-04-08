
int main()
{
    int i, len;
    char str[102];

    gets(str);

    len=strlen(str);
    *(str+len)=*str;

    for(i=0; i<len; i++)
    {
        *(str+i)=*(str+i)+*(str+i+1);
    }

    for(i=0; i<len; i++)
    {
        printf("%c", *(str+i));
    }

    return 0;
}