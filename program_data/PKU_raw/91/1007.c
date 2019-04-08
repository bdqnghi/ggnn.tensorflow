main()
{int t,i,n;
	char a[110],*p=a;
	gets(p);
	n=strlen(a);
	t=*(p);
	for(i=0;i<=n-2;i++)
*(p+i)=*(p+i)+*(p+i+1);
*(p+n-1)=*(p+n-1)+t;
for(i=0;i<=n-1;i++)
printf("%c",a[i]);
}