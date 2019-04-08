int main()
{
char a[101],b[101];
int c,d=0,i,j=0;
gets(a);
c=strlen(a);
for(i=0;i<101;i++)
{b[i]=0;}
if(a[0]!=' ')
{b[0]=a[0];
j++;}
for(i=1;i<c;i++)
{if(a[i]!=' '||a[i]==' '&&a[i-1]!=' ')
{b[j]=a[i];
j++;}}
for(i=0;i<101;i++)
{if(b[i]!=0)
printf("%c",b[i]);}

return 0;
}

