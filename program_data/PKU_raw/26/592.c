main()
{
char s[100] = {0};
int i,len;

gets(s);

len = strlen(s);
i = 1;
printf("%c",s[0]);
while(s[i]!=0)
{
if(s[i]!=' ')
printf("%c",s[i]);
if(s[i-1]!=' '&& s[i]==' ') 
printf(" ");
i++;
}



}