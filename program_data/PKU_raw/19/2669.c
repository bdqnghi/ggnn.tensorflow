
int main()
{
   char word[100][100],a[100],b[100];
   int i=0;
   char tmp;

   while(scanf("%s",word[i])!=EOF)
   {
	   i++;
	   scanf("%c",&tmp);
	   if(tmp=='\n')
		   break;
   }
   scanf("%s%s",a,b);
   int j=0;
   if(strcmp(word[0],a)!=0)
   {
	   printf("%s",word[0]);
   }
   else 
   {
	   printf("%s",b);
   }
   for( j=1;j<i;j++)
   {
	    if(strcmp(word[j],a)!=0)
   {
	   printf(" %s",word[j]);
   }
   else 
   {
	   printf(" %s",b);
   }

   }
	return 0;
}
