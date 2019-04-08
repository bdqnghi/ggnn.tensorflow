int main()
{
char *pi;
int i,m;
pi=(char*)malloc(sizeof(char)*101);
gets(pi);
m=strlen(pi);
for (i=0;i<m-1;i++)
{
	printf("%c",*(pi+i)+*(pi+i+1));
}
printf("%c",*(pi+m-1)+*(pi));
free(pi);

return 0;
}