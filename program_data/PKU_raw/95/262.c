int main()
{
  char a[80],b[80];
  gets(a);
  gets(b);
  int i,n1,n2;
  n1=strlen(a); 
  n2=strlen(b);
  char*p1=a;
  for(i=0;i<n1;i++)
  {if(strcmp(p1,"a")>=0&&strcmp(p1,"z")<=0)
   {a[i]-=32;}
   p1++;} 
  char*p2=b;
  for(i=0;i<n2;i++)
  {if(strcmp(p2,"a")>=0&&strcmp(p2,"z")<=0)
   {b[i]-=32;}
   p2++;} 
  if(strcmp(a,b)<0)
  {printf("<");}
   else if(strcmp(a,b)==0)
  {printf("=");}
  else if(strcmp(a,b)>0)
  {printf(">");}
  return 0;
}