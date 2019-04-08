void main()
{
char a[55],b[55],*p=a,*q=b;
int z;
scanf("%s %s",a,b);

int l,i;
for(i=0;i<strlen(b);i++)
{
z=1;
p=a;
if(*p==b[i])
{  
	l=i;q=b+i;
	while(*p!='\0')
	{
	if(*p!=*q)z=0;
	p++;q++;}
}
else continue;
if(z==0) continue;
else {printf("%d\n",l);goto loop;}
}
loop:;}