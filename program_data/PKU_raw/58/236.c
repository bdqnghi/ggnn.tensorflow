int main()
{
    int i,j,n,cnt=0;
    char s[800],temp[800];
    scanf("%d",&n);
    gets(temp);
    int a[n];
    for(i=0;i<n;i++)
    {
        gets(s);
        //gets(temp);
        a[i]=strlen(s);
        cnt=0;
        if((s[0]>='0' && s[0]<='9'))
            printf("0\n");
        else
        {
            for(j=0;j<a[i];j++)
            {
                if(!((s[j]=='_')||(s[j]>='A' && s[j]<='Z')||(s[j]>='a' && s[j]<='z')||(s[j]>='0' && s[j]<='9' && j>0)))
                {    
                    printf("0\n");
                    break;
                }
                else
                {
                    cnt++;
                }    
            }
        }
        if(cnt==a[i])
        {
            printf("1\n");
        }
    }
    getchar();
    //getchar();
    return 0;
}