
int main(int argc, char *argv[])
{
  char str[11],substr[4];
  int m,i,e;
  while(scanf("%s%s",str,substr)!=EOF)
  {
    m=strlen(str);
    e=0;
    for(i=1;i<m;i++)
    {
       if(str[i]>str[e]) e=i;
    }   
  for(i=0;i<=e;i++) printf("%c",str[i]);
  for(i=0;i<3;i++) printf("%c",substr[i]);
  for(i=e+1;i<m-1;i++)
  printf("%c",str[i]);
  printf("%c\n",str[m-1]);
}
  
  return 0;
}
