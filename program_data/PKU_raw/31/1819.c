main()
{
int doit(int a);
doit(1);
}

int doit(int r)
{
char a[20],b[20],c[20],d[20],e[20],f[20];
scanf("%s",a);
if (a[0]!='e') { scanf("%s",b);scanf("%s",c);scanf("%s",d);scanf("%s",e);scanf("%s",f);
	            doit(1);}
else return 0;
printf("%s %s %s %s %s %s\n",a,b,c,d,e,f);
}
 