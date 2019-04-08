int check(char p[100],char q[100],int a,int b)
{
  int m,x;
  for(m=0;m<=a;m++)
  {
    if(p[b+m]==q[m]) x=1;
    else 
    {
      x=0;
      break;
    }
  }
  return(x);
}
void main()
{
  char s[100],a[100],b[100];
  int i,l,j;
   for(i=0;i<100;i++)
  {
    s[i]='\0';
    a[i]='\0';
    b[i]='\0';
  }
  gets(s);
  scanf("%s%s",a,b);
  l=strlen(s);
  s[l]=' ';
  l=strlen(a);
  a[l]=' ';
  if(check(s,a,l,0)) printf("%s",b);
  else
   { 
     i=0;
     do
     {
      printf("%c",s[i]);
      i++;
     }
     while(s[i]!=' '); 
    }
  i=0;
  while(s[i]!=' ') i++;
  for(i=i+1;i<100;)
  {
    j=i;
    if(s[i]=='\0') break;
    else if(check(s,a,l,i)) printf(" %s",b);
    else
    {
      printf(" ");
      do
     {
      printf("%c",s[i]);
      i++;
     }
     while(s[i]!=' '); 
    }
    i=j;
    while(s[i]!=' ') i++;
    i=i+1;
  }
}
