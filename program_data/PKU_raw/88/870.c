int main()
{
char *a;
int i,ok;
a=(char*)malloc(sizeof(char)*30);
gets(a);
for (i=0;i<strlen(a);i++)
if (!(*(a+i)>='0'&&*(a+i)<='9'))
{
	ok=1;
	continue;
}
else 
{
if (ok) printf("\n");
ok=0;
printf("%c",*(a+i));
}
return 0;
}

