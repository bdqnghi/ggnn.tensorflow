void main()
{
	char num[1000]={'\0'};
	int p,i,t,c[100]={0},n=0,real=0;
	gets(num);
	for(i=0;num[i]!='\0';i++)
	{
		if(num[i]!=',')
			c[n]=c[n]*10+num[i]-48;
		else if(num[i]==',')
			n++;
	}
	for(i=0;i<=n;i++)
	{
		for(p=i+1;p<=n;p++)
		{
		if(c[i]<c[p])
		{
			t=c[i];
			c[i]=c[p];
			c[p]=t;
		}
		}
	}
	if(c[n]==c[0])
		printf("No");
	else {for(i=1;c[i]==c[0];i++)
	{}
	printf("%d",c[i]);}
}