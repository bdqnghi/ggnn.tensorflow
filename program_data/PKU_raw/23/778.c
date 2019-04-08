

int main()
{
 char s[300];
 char a[300][300];
 int i,k,b=0,j=0,w=0,p;
 gets(s);
 k=strlen(s);
 for(i=0;i<k;i++)if(s[i]==' ')b++;
 for(i=0;i<k;i++)
 {
  if(s[i]!=' ')
  {
   a[j][w]=s[i];
   w++;
  }
  else
  {
   a[j][w]='\0';
   w=0;
   j++;
  }
 }
 a[j][w]='\0';
 for(i=b;i>=1;i--)printf("%s ",a[i]);
 printf("%s",a[0]);
}