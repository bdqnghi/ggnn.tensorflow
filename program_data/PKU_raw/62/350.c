
int main(){
    const int MAXN = 300;
    char str[MAXN];
    gets(str);
    int i;
    printf("%c", str[0]);
    for (i = 1; i < strlen(str); ++ i)
        if (str[i - 1] == ' ' && str[i] == ' ')
           continue;
        else
            printf("%c", str[i]);
    printf("\n");
    return 0;
}
