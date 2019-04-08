void f(void);
void main()
{
 int n,i;
 scanf("%d",&n);
 for (i=0;i<n;i++)
	 f();
}
void f()
{
 int i,x,y,n=0;
 char a[101]={""},b[101]={""};
 scanf("%s%s",a,b);
 x=strlen(a);
 y=strlen(b);
 for (i=0;i<=y-1;i++)
	 if (a[x-1-i]>=b[y-1-i]) a[x-1-i]=a[x-1-i]-b[y-1-i]+48;
	 else {a[x-2-i]=a[x-2-i]-1;a[x-1-i]=a[x-1-i]-b[y-1-i]+10+48;}
 while(a[n]=='0')
 { n++;}
 for (i=n;i<=x-1;i++)
	 printf("%c",a[i]);
 printf("\n");
}