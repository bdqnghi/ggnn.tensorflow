int main()
{
 char a[100],b[100];
 int i=0;
 while(i<100)
 {
  a[i]=0;
  b[i]=0;
  i++;
 }
 i=0;
 gets(a);
 gets(b);
 int n=0;
 while(i<100)
 {
  if(a[i]>64&&a[i]<91)
   a[i]=a[i]+32;
  i++;
 }
 i=0;
 while(i<100)
 {
  if(b[i]>64&&b[i]<91)
   b[i]=b[i]+32;
  i++;
 }
 i=0;
 int x;
 x=strcmp(a,b);
 if(x>0)
  printf(">");
 else
  if(x<0)
   printf("<");
  else
   printf("=");
}