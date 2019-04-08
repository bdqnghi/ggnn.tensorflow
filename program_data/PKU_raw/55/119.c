void main()
{
int m,n;
char a[100];
scanf("%d %s %d",&m,a,&n);
int x,i;
long int t=0;
x=strlen(a);
for(i=0;i<=x-1;i++)
	{if(a[i]>='0'&&a[i]<='9')t=t*m+a[i]-48;
	else if(a[i]>='a'&&a[i]<='z')t=t*m+a[i]-87;
	else if(a[i]>='A'&&a[i]<='Z')t=t*m+a[i]-55;}

char b[100];
for(i=0;i<=99;i++) b[i]='\0';
for(i=99;t!=0;i--)
	{if(t%n>=0&&t%n<=9) {b[i]=t%n+48;t=t/n;}
	else if(t%n>=10) {b[i]=t%n+55;t=t/n;}
	}
for(i=0;b[i]=='\0'&&i<=99;i++){}
if(i==100) printf("0");
for(i;i<=99;i++) {putchar(b[i]);}

printf("\n");
}
