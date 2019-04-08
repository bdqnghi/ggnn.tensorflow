int main()
{
int i,j=0,a;
char s[200],m[200];
gets(s);
a=strlen(s);
for(i=0;i<=a-1;i++)
    {
	if(s[i]==' '&&s[i+1]==' ')
		{
		s[i]='0';
		}
	}
for(i=0;i<=a-1;i++)
    {
        if(s[i]!='0'){m[j]=s[i];j++;}
    }
puts(m);
return 0;
}