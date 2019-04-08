void main()
{
  char s[100],rs[100][100],is[100],sp[2]={' '};
  int i,j=0,k=0;
  gets(s);
  strcpy(is,s);
  for(i=0;s[i]!='\0';i++)
    {
      if(s[i]!=' ')
        {
          rs[j][k]=s[i];
          k++;
        }
      else if(s[i])
        {
          j++;
          k=0;
        }
    }
  strcpy(is,rs[j]);
  if(j>1)
{
  strcat(is,sp);
  for(i=j-1;i>=1;i--)
    {
      strcpy(is,strcat(is,rs[i]));
      strcpy(is,strcat(is,sp));
    }
  strcat(is,rs[0]);
}
  puts(is);
}