int num[128];
char str[1000];
int main()
{
    int l1,n;

    scanf("%s",str);
    n=strlen(str);
    for (l1=0;l1<n;l1++)
        num[str[l1]]++;
    scanf("%s",str);
    n=strlen(str);
    for (l1=0;l1<n;l1++)
        num[str[l1]]--;

    for (l1=0;l1<128;l1++)
        if (num[l1]!=0)
            break;
    if (l1==128)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
