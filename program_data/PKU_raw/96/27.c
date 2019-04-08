void main()
{
	char a[100],b[100];
	int c[100];
	gets(a);
if (atoi(a)<13)printf("0\n%d",atoi(a));
else{
	int len;
	len=strlen(a);
	int j,i,wei;
	wei=a[0]-'0';
	for (i=1;i<len;i++)
	{
		b[i-1]=(10*wei+a[i]-'0')/13+'0';
		wei=(10*wei+a[i]-'0')%13;
	} 
	
	if (b[0]=='0')
		i=1;
	else i=0;
	
	for (j=i;j<len-1;j++)
	{
		c[j]=b[j]-'0';
		printf("%d",c[j]);
		}
	
	printf("\n");
	printf("%d",wei);
}
}


 