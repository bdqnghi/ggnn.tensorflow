int main()
{
char a[30];
int i,ok;
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