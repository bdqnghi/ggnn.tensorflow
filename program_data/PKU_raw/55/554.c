int main()
{	long i,k=0,a1,a2,x;
	char a[32],b[80];
	scanf("%d%s%d",&a1,a,&a2);
	for(i=0;a[i]!='\0';i++)
	{if(a[i]>='0'&&a[i]<='9')
			k=a1*k+a[i]-'0';
		if(a[i]>='a'&&a[i]<='z')
			k=a1*k+a[i]-'a'+10;
		if(a[i]<='Z'&&a[i]>='A')
			k=a1*k+a[i]-'A'+10;
	}
	if(k==0)printf("0");
	for(i=0;k!=0;i++)
	{
		x=k%a2;
		if(x>=10)
			b[i]=x-10+'A';
		else
			b[i]=x+'0';
			k=k/a2;
	}
	while(i)
	{
		i--;
		printf("%c",b[i]);
	}
	return 0;}