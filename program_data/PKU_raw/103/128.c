char f(char c[1000])
{
int i;
for(i=0;i<1000;i++)
if(c[i]>='a'&&c[i]<='z')
c[i]=c[i]+'A'-'a';
}
main()
{int i,m=1;
char a[1000];
gets(a);
f(a);
for(i=0;a[i]!='\0';i++)
{if(a[i]==a[i+1])
m++;
else 
{printf("(%c,%d)",a[i],m);
m=1;
}
}
}