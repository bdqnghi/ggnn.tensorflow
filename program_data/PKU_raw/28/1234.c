int main ()
{
	char words[300][30];
	char temp;
   int i=0,l;
   scanf("%s",words[i]);
   l=strlen(words[i]);
   printf("%d",l);
   i++;
   scanf("%c",&temp);
   while (temp!='\n')
   {
	   scanf("%s",words[i]);
	   l=strlen(words[i]);
	   printf(",%d",l);
	   i++;
            scanf("%c",&temp);

   }
   return 0;
}
