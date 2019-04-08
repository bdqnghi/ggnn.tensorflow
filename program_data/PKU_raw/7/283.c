int main()
{
int i,j,l,l1;
char s[256],a[256],b[256],t[256];
gets(s);
gets(a);
gets(b);
l=strlen(s);
l1=strlen(a);
for(i=0;i<=l-1;i++)
{for(j=0;j<=l1-1;j++)
{t[j]=s[i+j];}
if(strcmp(t,a)==0)
{for(j=0;j<=l1-1;j++)
{s[i+j]=b[j];}
break;}}
puts(s);
return 0;
}
