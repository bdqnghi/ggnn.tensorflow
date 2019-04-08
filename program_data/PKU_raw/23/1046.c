
int main()
{
    char a[100][101],temp[101];
    int c=0;
    while(scanf("%s",a[c])!=EOF)
    c++;
    for(int i=c-1;i>0;i--)
printf("%s ",a[i]);
printf("%s",a[0]);
}