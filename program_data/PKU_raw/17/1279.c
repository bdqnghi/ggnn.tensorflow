int main()
{
char a[110];
while(gets(a)!=NULL)
{
puts(a);
for (int i=0;i<strlen(a);i++)
    {
    if (a[i]=='(') a[i]='$';
    else if (a[i]==')')
            {
            a[i]='?';
            for (int j=i-1;j>=0;j--)
                if (a[j]=='$')
                   {
                   a[j]=' ';
                   a[i]=' ';
                   break;
                   }
            }
         else a[i]=' ';
    }
puts(a);
}
}
