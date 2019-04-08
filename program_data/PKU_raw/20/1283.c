int main()
{
	char str[15],sub[4],a[11],b;
	int n,m,t;
	while(scanf("%s%s",str,sub)!=EOF)
	{
		m=0;
		b=str[0];
		for(n=1;str[n]!='\0';n++)
			if(str[n]>b) {b=str[n];m=n;}
		for(n=m+1,t=0;str[n]!='\0';n++,t++)
			a[t]=str[n];
		a[t]='\0';
		str[m+1]='\0';
		printf("%s%s%s\n",str,sub,a);
	}
	return 0;
}
