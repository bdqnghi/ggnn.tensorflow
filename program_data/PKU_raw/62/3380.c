void main()
{
  char str[200];
  int i,j;
  gets(str);
  for(j=0,i=0;str[i]!='\0';i++)
  {
     if(str[i]!=' '||(j!=0&&str[j-1]!=' '))
     {
        str[j]=str[i];
        j++;
     }
  }
  str[j]='\0';
  printf("%s",str);
}