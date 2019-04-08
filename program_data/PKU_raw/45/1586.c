int main()
{
    char str1[50],str2[50];
    int n1,n2,i,j,k,jishuqi;
    int record;
    scanf("%s",str1);
    scanf("%s",str2);
    n1=strlen(str1);
    n2=strlen(str2);
    for(i=0;i<=n2-1;i++)
    {
        jishuqi=0;
        k=0;
        for(j=i;j<=i+n1-1;j++,k++)
        {
            if(str1[k]==str2[j])
            {
                record=i;
                jishuqi=jishuqi+1;
            }
        }
            if(jishuqi==n1)
            {
                printf("%d",record);
                break;
            }
    }
    return 0;
}