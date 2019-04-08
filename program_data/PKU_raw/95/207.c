int main()
{
char a[100],b[100];
int i;
gets(a);
gets(b);
for(i=0;i<=99;i++)
{if(a[i]>=97) a[i]=a[i]-32;}
for(i=0;i<=99;i++)
{if(b[i]>=97) b[i]=b[i]-32;}

if(strcmp(a,b)>0) printf(">\n");
if(strcmp(a,b)<0) printf("<\n");
if(strcmp(a,b)==0) printf("=\n");
return 0;
}