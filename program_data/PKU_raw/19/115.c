void main()
{
 char str[80],s[30][20],test1[20],test2[20],*p;
 int i,j,l,c,m=0;
 gets(str);
 gets(test1);
 gets(test2);
 p=str;
 for(i=0,c=0;*(p+i)!=' ';i++,c++)
  s[0][c]=*(p+i);
  s[0][c]='\0';
 l=strlen(str);
 m=1;
 for(i=0;i<l;i++)
 {
  if(*(p+i-1)==' '&&*(p+i)!=' ')
  {
   for(j=i,c=0;str[j]!=' ';j++,c++)
   {
    s[m][c]=str[j];
   }
   s[m][c]='\0';
   m++;
  }
 }
 for(i=0;i<m;i++)
 {
  if(strcmp(test1,s[i])==0)
  {
   strcpy(s[i],test2);
  }
 }
 for(i=0;i<m-1;i++)
 printf("%s ",s[i]);
 printf("%s",s[m-1]);
}