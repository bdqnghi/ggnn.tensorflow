
int isidentifor(const char* name)
{
    const char *p = name;
    char ch = *p;
    if ((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z') && (ch != '_'))
    {
        return 0;
    }
    for (p++; *p; p++)
    {
        ch = *p;
        if ((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z') && (ch != '_') && (ch < '0' || ch > '9'))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char name[33];
    int n;

    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", name);

        if (isidentifor(name))
        {
            printf("yes\n");
        }
        else 
        {
            printf("no\n");
        }
    }
    return 0;
}