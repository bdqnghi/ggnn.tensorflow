int main()
{
    int n,i,j;
    char s[32];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&s);
        for(j=0;j<32;j++)
        {
            if(!((s[j]=='_')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'&&j>0))) 
            break;
        }
    if(s[j])
        printf("no\n");
    else
        printf("yes\n");
    } 
    getchar();
    getchar();
    getchar();
    return 0; 
}
        
