int main()
{char a[10000];
 int b[300],c,d,e;
gets(a);
d=0;e=0;
for(c=0;(a[c]!='\0');c++)
{if (a[c]!=' ') d=d+1;
else if (d!=0) {b[e]=d;e=e+1;d=0;}}
b[e]=d;
for (c=0;c<=e-1;c++)
{printf("%d,",b[c]);}
printf("%d",b[e]);
}
