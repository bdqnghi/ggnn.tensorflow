void main()
{
 int i,num;
 char ch[100],*p;
 gets(ch);
 num=strlen(ch);
 p=ch;
 for(p=ch+num-1,i=num-1;p>=ch;p--,i--)
 { 
  if(*p==' ')
  {
   for(p=ch+i+1;(*p!=' '&&*p!='\0');p++)
	  printf("%c",*p);
   printf(" ");
   p=ch+i;
  }
  if(i==0)
  {
   for(p=ch+i;(*p!=' '&&*p!='\0');p++)
	   printf("%c",*p);
  }
 }	 
}