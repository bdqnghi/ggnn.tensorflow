int main()
{
	int n,m,s,t,c[500],x;
	char a[500],b[5];
	scanf("%d\n",&n);
	gets(a);
	for(m=0;a[m+n-1]!='\0';m++)
	{
		for(t=0;t<n;t++)
		b[t]=a[m+t];
		b[t]='\0';
		for(s=m+1,c[m]=1;a[s+n-2]!='\0';s++)
		{
		for(t=0;t<n;t++)
			if(b[t]!=a[s+t])break;
		if(t==n)c[m]++;
		}
	}
	for(t=0,x=0;a[t+n-1]!='\0';t++)
	if(x<c[t])x=c[t];
	if(x<=1)printf("NO");
		else 
		{printf("%d\n",x);
		for(t=0;a[t+n-1]!='\0';t++)
		{if(c[t]==x)for(m=0;m<n;m++)
		{if(m!=n-1)putchar(a[t+m]);
		else printf("%c\n",a[t+m]);
		}
		}
		}
	return 0;
}