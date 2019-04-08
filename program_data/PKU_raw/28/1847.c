
int main()
{
int i=0;
char word[300][100];
scanf("%s",word[i]);
printf("%d",strlen(word[i]));
for(i=1;;i++)
{
    if(scanf("%s",word[i])==EOF)break;
    printf(",%d",strlen(word[i]));
}
}
