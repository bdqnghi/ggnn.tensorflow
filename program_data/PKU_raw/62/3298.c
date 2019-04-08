main(void)
{
 int space=1,i=-1;
 char a[80];
 gets(a);
 
 while(a[++i]!='\0')
 {
  if(a[i]==' ') space=0;
  else 
  {
   if(space==0)   
   { space=1;printf(" ");}
      printf("%c",a[i]);
  }
 }
}