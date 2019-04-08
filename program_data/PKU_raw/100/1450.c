void main()
{
	char a[300],b[52];
	unsigned int i,temp=0;
	scanf("%s",a);
	for (i=0;i<52;i++) b[i]=0;
	for (i=0;i<strlen(a);i++)
	{
		if (a[i]>=65&&a[i]<=90) b[a[i]-65]+=1;
		else if (a[i]>=97&&a[i]<=122) b[a[i]-71]+=1;
	}
	for (i=0;i<26;i++) if (b[i]) {printf("%c=%d\n",i+65,b[i]);temp=1;}
	for (i=26;i<52;i++) if (b[i]) {printf("%c=%d\n",i+71,b[i]);temp=1;}
	if (temp==0) printf("No");
}
