int main()
{
    char s[300];
    scanf("%s",s);
    int len,i,j,k,w,count[26]={0};
    len=strlen(s);
    w=0;
    for(i=0;i<26;i++)
    {
        for(j=0;j<len;j++)
        {
            if(s[j]==('a'+i)) count[i]++;
        }
        if(count[i]!=0) w=1;
    }
    if(w==0) printf("No");
    if(w==1)
    {
        for(i=0;i<26;i++)
        {
            if(count[i]!=0)
            {
                printf("%c=%d\n",'a'+i,count[i]);
            }
        }
    }
    return 0;
}
