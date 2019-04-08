int main()
{
 char s[3000];
 gets(s);
 int count=0;
 int i,len;
 for(i=0;;i++)
 {
  if(s[i]!=' ' && s[i]!='\0')
	  count++;
   else 
	  break;
 }
 printf("%d",count);
 len=strlen(s);
 if(s[i]=='\0') 
	  return 0;
 count=0;
 for(;i<=len;i++)
 {
    if(s[i]!=' '&&(s[i+1]==' '||s[i+1]=='\0'))
	{count++;printf(",%d",count);count=-1;}
	if(s[i]==' ')
		 continue;
    if(s[i]!=' ' && s[i]!='\0')
		count++;
	if(s[i+1]=='\0')
		 break;
 }
 return 0;
}