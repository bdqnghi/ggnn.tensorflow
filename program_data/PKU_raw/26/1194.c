 int main()
{
   int i,j;
   char s[101];
   gets(s);

   for(i=0;s[i]!='\0';i++)
     if((s[i]==' ')&&(s[i+1]==' ')) 
        { {for(j=i;s[j]!='\0';j++)
             s[j]=s[j+1];}
         i--;}
  
  puts(s);
  return 0; 
}