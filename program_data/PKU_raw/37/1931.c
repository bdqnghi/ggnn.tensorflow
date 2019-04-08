int main()
{
    int t;
    scanf("%d",&t);
    for (int c=1;c<=t;c++)
    {
    char a[100000];
    scanf("%s",&a);
    int l=strlen(a),sum=l;
    int app=0;
    for (int i=0;i<=l-1;i++)
    {
        for (int j=0;j<=l-1;j++)
        {
        if (a[i]==a[j])
        app++;
        }
        if (app==1)
        {
                   printf("%c\n",a[i]);
                   break;
        }
        app=0;
        sum--;
    }
    if (sum==0)
    printf("no\n");
    }
    


    

}