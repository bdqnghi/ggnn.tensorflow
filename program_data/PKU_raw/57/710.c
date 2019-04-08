int main()
{
    int x;
    scanf("%d", &x);
    char string[100][100];
    int i,n[100];
    for(i=1;i<=x;i++)
    {
                     scanf("%s", string[i]);
                     n[i]=strlen(string[i]);
    }
    for(i=1;i<=x;i++)
    {
                     if(string[i][n[i]-1]=='r'||string[i][n[i]-1]=='y')
                     {
                        string[i][n[i]-2]='\0';
                     }
                     else
                     {string[i][n[i]-3]='\0';}
                     printf("%s\n", string[i]);
    }
    return 0;
}
