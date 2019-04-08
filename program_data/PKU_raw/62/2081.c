int main()
{  char string[100];
	int i;
	char c;
	gets(string);
   for(i=0;c=string[i]!='\0';i++)
   if(c=string[i]!=' ')
   printf("%c",string[i]);
   else
   if(c=string[i-1]!=' ')
   printf("%c",string[i]);
   else continue;
   printf("%c",'\n');
	return 0;
}