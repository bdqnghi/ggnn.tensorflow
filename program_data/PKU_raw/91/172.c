void convert(char *s);
char str[1000];
void convert(char *s)
{int i,l;
l=strlen(s);
for(i=0;i<l;i++)
{if(i==l-1)
str[i]=(*(s+l-1))+(*(s+0));
else
str[i]=(*(s+i))+(*(s+i+1));}
str[i+1]='\0';
}
int main()
{char s[1000];
gets(s);
convert(s);
printf("%s",str);}
