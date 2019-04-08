int main()
{
 char s[100];
 gets(s);
 int i,j,l;
 l=strlen(s);
 for(i=0;i<l;i++)
 {
  if(s[i]==' '&&s[i+1]==' ')
  {
   for(j=i+1;j<l-1;j++)
   {
    s[j]=s[j+1];                  
   }
   l--;
   i--;           
  }               
 }
 for(i=0;i<l;i++)
  printf("%c",s[i]);
 getchar();
 getchar();
 return 0;    
}
