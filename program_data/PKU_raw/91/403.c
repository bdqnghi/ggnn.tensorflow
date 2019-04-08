int main()
{
    char s1[101],s2[101];
    int l,i,j;
    gets(s1);
    l=strlen(s1);
    for(i=0;i<l;i++)
    {
                    if(i!=l-1)
                    s2[i]=s1[i]+s1[i+1];
                    else
                    s2[i]=s1[i]+s1[0];
    }
    for(j=0;j<l;j++)
    printf("%c",s2[j]);
    return 0;
}

