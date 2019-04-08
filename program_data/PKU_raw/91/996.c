void main()
{
char s1[101],s2[101];
int i=0;
gets(s1);
while(s1[++i]!='\0')
{s2[i-1]=s1[i]+s1[i-1];}
s2[i-1]=s1[0]+s1[i-1];
s2[i]='\0';
printf("%s",s2);
}
