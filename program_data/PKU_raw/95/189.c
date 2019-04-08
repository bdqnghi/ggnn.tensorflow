void main()
{
 int j;
 char a[80],b[80];
 gets(a);
 gets(b);
 j=0;
 while(a[j]!='\0') 
  {
   if((a[j]>='A')&&(a[j]<='Z'))
   a[j]=a[j]+32;
   j++;
  } 
  j=0;
 while(b[j]!='\0') 
  {
   if((b[j]>='A')&&(b[j]<='Z'))
   b[j]=b[j]+32;
   j++;
  } 
  if(strcmp(a,b)>0)
  printf(">");
  else if(strcmp(a,b)<0)
  printf("<");
  else if(strcmp(a,b)==0) printf("="); 
}