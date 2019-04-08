int main()
{
    int i,len;
    char word[10000],c;
    gets(word);
    len=strlen(word);
    c=word[0];
    for(i=0;i<len-1;i++)
    word[i]+=word[i+1];
    word[i]+=c;
    printf("%s",word);
   // getch();
    return 0;
}
