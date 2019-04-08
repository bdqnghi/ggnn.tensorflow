void main()
{
   char *str,*p;
   str=(char *)malloc(100*sizeof(char));
   gets(str);
   p=str;
   for (;*p!='\0';p++)
       {  if(*p!=' ') printf("%c",*p);
          else if(*(p-1)!=' ') printf(" ");
        }
}