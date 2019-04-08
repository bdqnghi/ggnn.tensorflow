int main()
{
    char s[110][20];
    int i=1;
    scanf("%s",s[0]);
    printf("%d",strlen(s[0]));
    while(scanf("%s",s[i])!=EOF)
    {
      printf(",%d",strlen(s[i]));
      i++;
    }
    printf("\n");
}