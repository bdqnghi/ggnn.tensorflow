main()
{
 char str[1000]={""};
 gets(str);
 int len=strlen(str);
 int i;
 for(i=0;str[i]!='\0';i++)
 {
  int j=i;
  if(str[i]==' ')
  {
  i++;
  while(i<len)
  {
   if(str[i]==str[i-1])
   i++;
   else
   {i--;break;}
  }
  }
  printf("%c",str[j]);

 }
}