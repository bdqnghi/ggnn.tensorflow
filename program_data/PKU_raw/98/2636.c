void main()
{
int i,n,c;
char a[40];
scanf("%d",&n);
scanf("%s",&a);
printf("%s",a);
c=strlen(a);
for(i=1;i<=n-1;i++)
{scanf("%s",&a);
if(c+strlen(a)+1<=80)
{printf(" %s",a);
c+=strlen(a)+1;}
else
{c=strlen(a);
printf("\n%s",a);}}}
