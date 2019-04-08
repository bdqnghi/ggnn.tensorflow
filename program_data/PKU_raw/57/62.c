  
void main()
{
  char str[50][15];
  int i,n,m;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  gets(str[i]);
  for(i=0;i<n;i++)
  {
     
     m=strlen(str[i]);
     if(str[i][m-1]=='r')
      {
      str[i][m-2]='\0';
       }
     else if(str[i][m-1]=='y')
       {
       str[i][m-2]='\0';
       }
      else if(str[i][m-1]=='g')
       {
       str[i][m-3]='\0';
        }
      printf("%s\n",str[i]);
  }
}