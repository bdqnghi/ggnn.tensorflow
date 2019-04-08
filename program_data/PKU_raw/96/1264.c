void sti(char*str,int*s)
{
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		s[i]=(int)(str[i]-'0');
	}
}
main()
{
	char s[max+2];
	scanf("%s",s);
	int a[max+2]={0},b[max+2]={0};
	int len=strlen(s);
	sti(s,a);
	if(len==1)
		printf("%d\n%d\n",0,a[0]);
	else if(len==2)
		printf("%d\n%d\n",(10*a[0]+a[1])/13,(10*a[0]+a[1])%13);
	else{
		for(int i=0;i<len-1;i++)
		{
			b[i]=(10*a[i]+a[i+1])/13;
			a[i+1]=(10*a[i]+a[i+1])%13;
		} 
		int k=0;
		while(b[k]==0)
		{
			k++;
		}
		for(int i=k;i<len-1;i++)
		{
			printf("%d",b[i]);
		}
		printf("\n%d",a[len-1]);
	}
	
}