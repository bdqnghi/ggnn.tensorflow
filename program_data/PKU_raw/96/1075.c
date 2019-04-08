int main()
{
char a[100];
int b[100],i,j,m,n,l;
scanf("%s",&a);
l=strlen(a);
if(a[0]=='1'&&a[1]<'3')
 {
 b[0]=0;
 b[1]=0;
 a[1]=10+a[1]-'0'+'0';
 }
else
 {
 b[0]=0;
 b[1]=((a[0]-'0')*10+a[1]-'0')/13;
 a[1]=(a[0]-'0')*10+a[1]-'0'-b[1]*13+'0';
 } 
for(i=1;i<l-1;i++)
 {
  b[i+1]=((a[i]-'0')*10+a[i+1]-'0')/13;
  a[i+1]=(a[i]-'0')*10+a[i+1]-'0'-b[i+1]*13+'0';
 }
if(l>=3)
 {if(b[1]==0)
  {
   for(i=2;i<l;i++)
  printf("%d",b[i]);
  }
 else
  {
  for(i=1;i<l;i++)
  printf("%d",b[i]);
  }
 }
else 
 {
  if(l==1)
  {
  printf("0");
  }
  else if(l==2)
  {
  if((a[0]-'0')*10+a[1]-'0'<13 )
   {
   printf("0");
   }
  else printf("%d",b[1]);
  }
 }
if(a[l-1]>'9')
 {
 printf("\n1%c",a[l-1]-10);
 }
else
  printf("\n%c",a[l-1]);

}
