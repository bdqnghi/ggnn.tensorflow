
int pos;

void match(char lch)
{
    int spos = pos;
    char ch;
    pos++;
    scanf("%c", &ch);
    while (ch == lch)
    {
        match(ch);
        pos++;
        scanf("%c", &ch);
    }
    printf("%d %d\n", spos, pos);
}

int main()
{
    char ch;
    pos = 0;
    scanf("%c", &ch);
    match(ch);
    return 0;
}