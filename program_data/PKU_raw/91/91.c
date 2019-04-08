int main()
{
  char s[120],t;
  int i,b;
  gets(s);
  b=strlen(s);t=s[0];
  for(i=0;i<b-1;i++)
    s[i]=s[i]+s[i+1];
    s[b-1]=s[b-1]+t;
  for(i=0;i<b;i++)
    printf("%c",s[i]);
}