
int main(int argc, char *argv[])
{
  
  char str[200],str1[200];
  while(scanf("%s",str1)!=EOF)
  {
                         int m;
  m=strlen(str1);
  strcpy(str,str1);
  int i,j;
  for(i=1;i<m;i++)
  {
                  for(j=0;j<m;j++)
                  {
                                    if(i+j<m)
                                    {
                                             if(str[j]=='('&&str[j+i]==')')
                                             {
                                                                           str[j]='a';
                                                                           str[j+i]='a';
                                             }
                                    }
                  }
  }
  for(i=0;i<m;i++)
  {
                  if(str[i]=='(') str[i]='$';
                  else if(str[i]==')') str[i]='?';
                  else str[i]=' ';
  }
  printf("%s\n",str1);
  printf("%s\n",str);
 	
}
 
  return 0;
}
