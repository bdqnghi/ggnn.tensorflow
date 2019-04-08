
int main()
{
	char a[101],s[101],p;
	int i,j,len,sh;
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<=len-1;i++) s[i]='0';
	if(a[0]=='1'&&a[1]=='0') i=2;
    else i=1;
	while(i<len)
	{
		if(i>=2) p=a[i-2];
		else p='0';
		while((int)(s[i]-'0')*13<=(int)(p-'0')*100+(int)(a[i-1]-'0')*10+(int)(a[i]-'0'))
		{
			s[i]++;						
		}
		if(s[i]>'0') s[i]--;
			sh=(int)(s[i]-'0')*13;
			a[i]=a[i]-sh%10;
			if(a[i]<'0')
			{
				a[i-1]--;
				a[i]=a[i]+10;
			}
			a[i-1]=a[i-1]-((sh%100)/10);
			if(a[i-1]<'0')
			{
				a[i-2]--;
				a[i-1]=a[i-1]+10;
			}
			if(i>=2) a[i-2]-=sh/100;
			i++;
	}
	i=0;
	while(s[i]=='0'&&i<len-1) i++;
	for(j=i;j<=len-1;j++)
	{
		printf("%c",s[j]);
	}
	printf("\n");
	i=0;
	while(a[i]=='0'&&i<len-1) i++;
    for(j=i;j<=len-1;j++)
	{
		printf("%c",a[j]);
	}
	return 0;
}


