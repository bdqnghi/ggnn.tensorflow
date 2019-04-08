int main()
{
  char str[101],result[100]={"0"};
  int i,tem,max=0;
  scanf("%s",str);
  for (i=1;str[i]!='\0';i++)
  {
    if (str[i-2]=='1') i--;
    if (((str[i-1]-'0')*10+str[i]-'0')>=13||((str[i-1]-'0')*10+str[i]-'0')==0)
    {
      tem=(str[i-1]-'0')*10+str[i]-'0';
    }
    else
    {
      i++;
      if (result[i-2]=='\0') result[i-2]='0';
      tem=(str[i-2]-'0')*100+(str[i-1]-'0')*10+str[i]-'0';
     }
    if (str[i]!='\0') result[i-1]=tem/13+'0';
    if (str[i]!='\0') str[i-1]=(tem%13)/10+'0';
    if (str[i]!='\0') str[i]=(tem%13)%10+'0';
}
  str[i]='\0';
  //result[i-1]='\0';
   //printf("%s\n",str);
  if (result[0]=='0')
    if (result[1]=='\0')
      printf("0\n");
    else printf("%s\n",&result[1]);
  else  printf("%s\n",result);
  for (i=0;str[i]!='\0';i++);
  if (str[i-2]!='1')
    printf("%d",str[i-1]-'0');
  else
    printf("%d%d",1,str[i-1]-'0');
  return 0;
}
