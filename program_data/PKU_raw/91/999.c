void main()
{
int i,l;
char s[1000],s1[1000],c;
gets(s);
l=strlen(s);
*(s+l)=*s;
for(i=0;i<l;i++)
{*(s1+i)=*(s+i)+*(s+1+i);}
*(s1+l)='\0';
printf("%s",s1);
}

