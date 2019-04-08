int main()
{char a[200],b=' ';int i;
gets(a);
for(i=0;a[i]!=0;i++)
if(a[i]!=b||a[i+1]!=b)
printf("%c",a[i]);}