int main()
{
	char a[2000]={0};
	char b[2000]={0};
	char c[3000]={0};
	scanf("%s",a);
	scanf("%s",b);
	int len1=strlen(a);
	int len2=strlen(b);
	if(len1<len2)
		{
		strcpy(c,a);
		strcpy(a,b);
		strcpy(b,c);	
		}
	len1=strlen(a);
	len2=strlen(b);
	memset(c,0,(len1+1)*sizeof(int));
	for(int i=0;i<len1-len2;i++)
		c[i]=a[i]-'0';
	for(int i=0;i<len2;i++)
		c[i+len1-len2]=a[i+len1-len2]+b[i]-'0'-'0';	
	int add=0;
	for(int i=len1-1;i>=0;i--)
		{
		c[i]+=add;
		add=c[i]/10;
		c[i]=c[i]%10;	
		}
	int judge=0,judge1=0;
	if(add!=0)
		{
		printf("%d",add);
		judge=1;
		judge1=1;	
		}
	for(int i=0;i<len1;i++)
		{
		if(judge!=0)
			{
			printf("%d",c[i]);
			judge1=1;	
			}
		else
			{
			if(c[i]!=0)
				{
				printf("%d",c[i]);	
				judge=1;	
				judge1=1;
				}
			}	
		}
	if(judge1==0)
		printf("%d",c[0]);
}