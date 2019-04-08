int main()
{
    char a[100];
    int n,i,r=0;
    scanf("%s",&a);
    i=strlen(a);
    printf("%d",i);
    while(scanf("%s",&a)!=EOF)
    {
        i=strlen(a);
        printf(",%d",i);
    }
    printf("\n");
}