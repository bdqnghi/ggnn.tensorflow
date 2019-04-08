int main()
{
	int i,la,lb,max;
	char a[260],b[260];
	int	a2[260]={0},b2[260]={0},c[260]={0};
	scanf("%s %s",a,b);
	la=strlen(a);
	lb=strlen(b);
	for(i=0;i<la;i++)
	{
		a2[i]=a[la-i-1]-'0';
	}
	for(i=0;i<lb;i++)
	{
		b2[i]=b[lb-i-1]-'0';
	}
	if(la>lb){max=la;}
	else {max=lb;}
	
	for(i=0;i<max;i++)
	{

			if(a2[i]+b2[i]+c[i]>=10)
			{c[i]=(c[i]+a2[i]+b2[i])%10;
			c[i+1]++;
			}
			else {c[i]=(c[i]+a2[i]+b2[i])%10;}			
		if(a2[max-1]+b2[max-1]+c[max-1]>=10)
		{
		max++;
		}
	}
	while(c[max-1]==0&&max>1)max--;

	for(i=max-1;i>=0;i--)
	{
		printf("%d",c[i]);

	}
}
