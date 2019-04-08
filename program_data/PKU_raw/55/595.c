//vc++??????
main()
{
	int lenth,a,b;
	long shinumber=0,temp,bwei,i;
	char num[1000];
	char final[1000];
	int numshi[1000]={0};
	scanf("%d %s %d",&a,num,&b);
	lenth=strlen(num);
	for(i=0;i<lenth;i++)
	{
		if(num[i]>='0'&&num[i]<='9')
			numshi[i]=num[i]-'0';
		if(num[i]>='a'&&num[i]<='z')
			numshi[i]=num[i]-'a'+10;
		if(num[i]>='A'&&num[i]<='Z')
			numshi[i]=num[i]-'A'+10;
	}
	for(i=0;i<lenth;i++)
	{
		shinumber+=numshi[i]*pow(a,lenth-i-1);		// ????
	}
	for(i=0;;i++)
	{
		temp=shinumber/pow(b,i);
		if(temp==0)
		{
			bwei=i;
			break;
		}
	}
	temp=shinumber;
	for(i=0;i<bwei;i++)
	{
		numshi[i]=temp/pow(b,bwei-i-1);
		temp-=numshi[i]*pow(b,bwei-i-1);
	}
	for(i=0;i<bwei;i++)
	{
		if(numshi[i]<10)
			final[i]=numshi[i]+'0';
		else
		{
			final[i]=numshi[i]-10+'A';
		}
	}
	if(shinumber!=0)
	for(i=0;i<bwei;i++)
	{
		printf("%c",final[i]);
	}
	else
		printf("0");
}
