int main()
{
   char str[5000],a[100][50];
   int i,n,k=0,j=0;
   gets(str);
   n=strlen(str);
   for(i=0;i<n;i++)
  {
     if(str[i]!=' ')
    {
       a[k][j]=str[i];
       j++;
     }
     if(str[i]==' '&&str[i+1]!=' ')
    {
       k++;
       j=0;
     }
   }
   k++;
  printf("%s",a[k-1]);
  for(i=k-2;i>=0;i--)
  {
      printf(" %s",a[i]);
  }
  return 0;
}
  
