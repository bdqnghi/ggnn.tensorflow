int f(char a[])
{
	int len,count=0;
	char *p;
	len=strlen(a);
	for(p=a;p<(a+len);p++)
	{
		if((*p>='A'&&*p<='Z')||(*p>='a'&&*p<='z')||(*p>='0'&&*p<='9')||(*p=='_'))
		{
			count++;
		}
	}
	
	
	    if((count==len)&&(((a[0]>='A'&&*p<='Z')||(a[0]>='a'&&*p<='z'))||a[0]=='_'))
		   return(1);
	    else
		   return(0);
	
}
void main()
{
	int n,i;
	char a[30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		if(f(a)==1)
			printf("yes\n");
		else
			printf("no\n");
	}
}