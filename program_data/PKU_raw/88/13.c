main()
{
    char s[30];
    int i;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>47&&s[i]<58)
            printf("%c",s[i]);
        else if(s[i+1]>47&&s[i+1]<58)
            printf("\n");
    }
    getchar();
    getchar();
}