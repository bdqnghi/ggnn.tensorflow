
int main(int argc, char *argv[])
{
  char str[101]={' '};
  int i;
  gets(str);
  for(i=0;i<strlen(str);i++)
{
                   if(str[i]==' '&&str[i+1]!=' ')
                   printf("%c",str[i]);
                   else if(str[i]!=' ')
                   printf("%c",str[i]);
}
                   
  
  return 0;
}
