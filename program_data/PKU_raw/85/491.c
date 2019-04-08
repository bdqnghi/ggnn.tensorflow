
int main()
{
    char a[100][20]={0};
    int n, i, j, flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i][0]>='0'&&a[i][0]<='9')
        {
            printf("no\n");
            continue;
        }
        for(j=0;j<strlen(a[i]);j++)
        {
            if((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='0'&&a[i][j]<='9')||a[i][j]=='_')
            {
                flag++;
            }
            else
            {
                printf("no\n");
                flag=0;
                break;
            }
        }
        if(flag==strlen(a[i]))
        {
            printf("yes\n");
            flag=0;
        }
    }
    return 0;
}
