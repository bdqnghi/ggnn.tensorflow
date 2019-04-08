
int main()
{
    int out=0;
    char input[123456];
    while(scanf("%s", input)>0){
        if(out++) putchar(',');
        printf("%d", strlen(input));
    }
    return 0;
}
