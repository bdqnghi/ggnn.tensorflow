int main()
{
    struct counter
    {
           int counter;
    }zm[52];
    char s[301];
    int len,i,j,counter=0;
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<52;i++)
    zm[i].counter=0;
    for(i=0;i<len;i++)
    {
                      if(s[i]>=97&&s[i]<=122)
                      {
                                             counter++;
                                             zm[(s[i]-97)].counter++;
                      }
                      else if(s[i]>=65&&s[i]<=90)
                      {
                           counter++;
                           zm[(s[i]-65+26)].counter++;
                      }
    }
    if(counter==0)
    printf("No");
    for(i=26;i<52;i++)
    {
                      if(zm[i].counter>0)
                      printf("%c=%d\n",i+(65-26),zm[i].counter);
    }
    for(i=0;i<26;i++)
    {
                      if(zm[i].counter>0)
                      printf("%c=%d\n",i+97,zm[i].counter);
    }
    return 0;
}