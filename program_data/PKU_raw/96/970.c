int main()
{
	int a[101]={0},q[101]={0},r[101]={0},len,i;
	char b[101];
	gets(b);
	len=strlen(b);
	for(i=0;i<len;i++)
		a[len-i-1]=b[i]-'0';
	for(i=len-1;i>=0;i--)
	{
		a[i]=r[i+1]*10+a[i];
		q[i]=a[i]/13;
		r[i]=a[i]%13;
	}
	i=len;
	while(q[i]==0&&i>0)
		i--;
	for(i=i;i>=0;i--)
		printf("%d",q[i]);
	printf("\n%d",r[0]);
	return 0;
}