int main()
{   char s[255];
    char si[255];
    int i;
    int n=0;
    gets(s);
    for(i=0;s[i];i++)
    { if(s[i]!=' ')
      { si[n]=s[i];
        n++;}
      else if(s[i]==' '&&s[i-1]!=' '&&i>0)
      {  si[n]=s[i];
         n++;}
      else if(i==0&&s[i]==' ')
      {  continue;}
      }
    si[n]='\0';
    puts(si);
    return 0;
}
        
