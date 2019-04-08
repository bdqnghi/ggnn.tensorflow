void main()
{char s1[100],s2[1];
char *p;
int a,i;
gets(s1);
s2[0]=s1[0];
a=strlen(s1);
p=&s1[0];
for(i=0;i<a-1;i++)
{*(p+i)=s1[i]+s1[i+1];
}
*(p+a-1)=s1[a-1]+s2[0];
for(i=0;i<a;i++)
putchar(*(p+i));
}
