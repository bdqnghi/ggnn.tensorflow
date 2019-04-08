void main()
{
char *a;
a=(char*)malloc(10000*sizeof(char));
int i;
gets(a);
for(i=0;*(a+i)!='\0';i++)
{
if(*(a+i)>=48&&*(a+i)<=57)
printf("%c",*(a+i));
else printf("\n");
}
}