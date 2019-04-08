
int main()
{
    int i,n,num=0,len;
    char s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        len=strlen(s);
        if(num==0)
        {
            printf("%s",s);
            num=len;
            continue;
        }
       if(num+len<80)
       {
           printf(" %s",s);
           num=num+len+1;
           continue;
       }
       if(num+len>=80)
       {
           printf("\n%s",s);
           num=len;
           continue;
       }
    }
    return 0;
}
