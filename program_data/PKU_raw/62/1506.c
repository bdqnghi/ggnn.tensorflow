void main()
{
int i;
char a[10000],*p;
gets(a);
p=a;
for(i=0;*(p+i)!='\0';i++)
{
if(*(p+i)==' ')
{
printf(" ");
for(i=i+1;*(p+i)==' ';i++);
i=i-1;
}
else{printf("%c",*(p+i));}
}
}