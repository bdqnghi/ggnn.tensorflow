void main()
{
char s[1024][128];
int i=0;

while(gets(s[i]))
{
if(strcmp(s[i],"end")==0) break;
i++;
}

while(i!=0)
{
i--;
puts(s[i]);
}
}