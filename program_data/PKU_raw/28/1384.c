int main()
{
char a[1000],b[300][100];
int i,m=0,n=0;
gets(a);
for(i=0;i<strlen(a);i++)
{
  if(n==0&&a[i]==' ')
  continue;
  if(a[i]==' ') 
  {
   b[m][n]='\0';
   m++;
   n=0;          
             }
  else
  {
      b[m][n]=a[i];
      n++;
  }                       
}
b[m][n]='\0';
for(i=0;i<m;i++)
printf("%d,",strlen(b[i]));
printf("%d",strlen(b[i]));

return 0;    
}
