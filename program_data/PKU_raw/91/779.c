
void main()
{   char *a,*b;
char *p,*q;
int n=0;
a=(char *)malloc(100*sizeof(char));
b=(char *)malloc(100*sizeof(char));
gets(a);


q=b;
for(p=a;*p!='\0';p++)
{
	n=n+1;
}

for(q=b,p=a;p<a+n;p++)
{   if(p!=(a+n-1))
{*q=*p+*(p+1);
q++;}

if(p==(a+n-1))*q=*p+*a;
}


for(q=b;q<b+n;q++)
printf("%c",*q);
}
