int main(void)
{

    char a[10];
    int i=0;
    int n;
    while((a[i]=getchar())!='\n')
        i++;
    n = i;
        for(i=n;i>=0;i--)
    printf("%c",a[i]);
    return 0;
}
