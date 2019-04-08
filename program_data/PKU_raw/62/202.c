int main(void)
{
    char c;
    int k=-1;
    while(scanf("%c", &c)!=EOF)
    {
        if(!isspace(c))
            k=-1;
            else
            k++;
        if(isspace(c)&&k!=0)
            continue;
        printf("%c", c);
    }
    return 0;
}
