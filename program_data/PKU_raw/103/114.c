
int main()
{
    char st[1010], ch;
    int i, j, k;

    gets(st);
    for(i=0; st[i]!='\0'; i++)
    {
        if(st[i]>='a' && st[i]<='z')
            st[i]=st[i]-'a'+'A';
    }
    ch = st[0];
    k = 1;
    for(i=1; st[i]!='\0'; i++)
    {
        if(st[i] != ch)
        {
            printf("(%c,%d)", ch, k);
            ch = st[i];
            k = 1;
        }
        else
        {
            k++;
        }
    }
    printf("(%c,%d)\n", ch, k);
    return 0;
}
