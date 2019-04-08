void down(char *a)
{
for (int i=0;a[i]!=0;i++)
    {
    if (a[i]>='A'&&a[i]<='Z') 
       a[i]=a[i]-'A'+'a';
    }
}

int main()
{
char a[100],b[100];
gets(a);
gets(b);
down(a);
down(b);
int x=strcmp(a,b);
if (x>0) putchar('>');
else if (x<0) putchar('<');
     else putchar('=');
}
