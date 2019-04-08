
int main()
{
    int n;
    int i;
    int buf;
    int appeared[110] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &buf);
        if (!appeared[buf]) {
            if (i != 0) {
                printf(" ");
            }
            printf("%d", buf);
            appeared[buf] = 1;
        }
    }
    return 0;
}