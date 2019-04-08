void append()
{
    char str[50];
    gets(str);
    if (str[0] != 'e')
    {
        append();
        puts(str);
    }
}
void main()
{
    append();
}
