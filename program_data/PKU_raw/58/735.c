int main()
{
	int n,judge[100],i,j,k,t,length;
	char ch[81];
	for(k=1;k<=100;k++)
		judge[k-1]=1;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		gets(ch);
		if(ch[0]=='_'||(ch[0]>='a'&&ch[0]<='z')||(ch[0]>='A'&&ch[0]<='Z'))
		{
			length=strlen(ch)-1;
			for(j=1;j<=length;j++)
			{
				if(ch[j]=='_'||(ch[j]>='a'&&ch[j]<='z')||(ch[j]>='A'&&ch[j]<='Z')||(ch[j]>='0'&&ch[j]<='9'));
				else judge[i-1]=0;
			}
		}
		else judge[i-1]=0;
	}
	for(t=1;t<=n;t++)
		printf("%d\n",judge[t-1]);
}