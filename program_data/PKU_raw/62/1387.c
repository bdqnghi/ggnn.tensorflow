void main()
{char s[999],*p;
int i,j;
gets(s);
p=s;
for(;*p!='\0';p++)
if(*p!=' ')
printf("%c",*p);
else
if(*p==' '&&*(p+1)!=' ')
printf("%c",*p);
}