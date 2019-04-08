
int main()
{
    int i=0,j=0,flag,len;
    char s[100];
    char temp[100];
    
    gets(s);
    flag=strlen(s);
    
    for(i=strlen(s)-1;i>=0;i--)
     if(s[i]==' ')
      {
      len=flag-i;
      for(j=i+1;j<flag;j++)
      printf("%c",s[j]);
      printf(" ");
      flag=i;
      }
    for(j=0;j<flag;j++)
    printf("%c",s[j]);
}
