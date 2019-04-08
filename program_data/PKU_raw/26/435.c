int main()
{
    char s[100];
	int flag=1;
    int i;
    gets(s);
   for(i=0;i<strlen(s);i++)
   if(s[i]==' ') flag=0;
   else {if(flag==0) printf(" ");
           printf("%c",s[i]),flag=1;}
    return 0;
}
 