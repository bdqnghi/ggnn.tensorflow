void main()
{
char a[3000],*p=a;
int i;
gets(a);
for(i=0;;i++)
{
if(*p=='\0')
{
printf("%d",i);
goto z;
}
else if(*p==' ')
{
printf("%d",i);
p++;
break;
}
else p++;
}
for(;;)
{
for(i=0;;i++)
{
if(*p=='\0')
{
printf(",%d",i);
goto z;
}
else if(*p==' '&&i==0)
{
p++;
break;
}
else if(*p==' ')
{
printf(",%d",i);
p++;
break;
}
else p++;
}
}
z: ;
}