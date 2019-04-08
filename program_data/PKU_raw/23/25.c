void fun(char a[])
{
 char *p=a,t[100],s[100];
 int index;
 memset(s,0,100);
 while(*p)
 {
  if(!isalpha(*p)) *p=' ';
  p++;
 }
 p=a;
 while(strstr(p," ")!=NULL)
 {
  memset(t,0,100);
  index=strstr(p," ")-p;
  if(index>0)
  {
   strncpy(t,p,index);
   strcat(t," ");
   strcat(t,s);
   strcpy(s,t); 
  }
  else
  {
   strcpy(t," ");
   strcat(t,s);
   strcpy(s,t);
  }
  p+=index+1;
 }
 if(*p)
 {
  strcpy(t,p);
  strcat(t," ");
  strcat(t,s);
  strcpy(s,t);
 }
 strcpy(a,s);
}
void main()
{
 char s[100];int i;
 gets(s);
 fun(s);
 for(i=0;i<strlen(s)-1;i++)
 {
	 printf("%c",s[i]);
 }
}