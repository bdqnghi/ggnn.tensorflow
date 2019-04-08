int f(int x)
{
  if(x>=65&&x<=90) x=x+32;
  return(x);
}
void main()
{
  char str1[80],str2[80];
  int i;
  gets(str1);
  gets(str2);
  for(i=0;i<=79;i++)
  {
    str1[i]=f(str1[i]);
    str2[i]=f(str2[i]);
  }
  if(strcmp(str1,str2)>0) printf(">");
  else if(strcmp(str1,str2)<0) printf("<");
  else printf("=");
} 