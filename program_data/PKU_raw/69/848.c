char a[252],b[252],c[252];
int main()
{
	int la,lb,i,j,k=0;
	scanf("%s",a);
	scanf("%s",b);
	la=strlen(a);
	lb=strlen(b);
	j=la;
	for(i=251;j>=0;i--,j--)
		a[i]=a[j];
	for(;i>=0;i--)
		a[i]='0';
	j=lb;
	for(i=251;j>=0;i--,j--)
		b[i]=b[j];
	for(;i>=0;i--)
		b[i]='0';
	for(i=250;i>=0;i--)
	{
		c[i]=(a[i]-'0')+(b[i]-'0')+k+'0';
		if(c[i]>'9')
		{
			c[i]=c[i]-10;
			k=1;
		}
		else
			k=0;
	}
	for(i=0;c[i]=='0'&&i<250;i++);
	for(;i<251;i++)
		printf("%c",c[i]);
	printf("\n");
	return 0;
}