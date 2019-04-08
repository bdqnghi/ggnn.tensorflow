void main()
{char *p,q[31];
int a,n,i;
p=(char*)malloc(30*sizeof(char));
p=q;
gets(p);
n=strlen(p);
a=*p;
for(i=0;i<n;i++,p++)
{
if(*p>='0'&&*p<='9')
{
printf("%c",*p);
}
else
{
for(;*p<'0'||*p>'9';i++)
{p++;}
p=p-1;i=i-1;
if(a<'0'||a>'9')
{a='0';}
else {printf("\n");}
}
}
}