int main()
{
    char s[1000];
    scanf("%s",s);
    int len=strlen(s);
    int i;
    for(i=0;i<len;i++)
    {
                      if(s[i]>='a'&&s[i]<='z')
                      s[i]=s[i]-'a'+'A';
    }
    char a[52];
    int b[52]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int c=0;
    for(i=0;i<len;i++)
    {
                      a[c]=s[i];
                      while (s[i+1]==s[i]&&i<(len-1))
                      {
                                      b[c]++;
                                      i++;
                      }
                      c++;
    }
    for(i=0;i<c;i++)
    printf("(%c,%d)",a[i],b[i]);
    getchar();
    getchar();
}