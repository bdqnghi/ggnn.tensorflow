void main()
{
	int a,b,i,j;long int shijinzhi=0,result=0,q,p=0,k=0;
	char n[100];
	scanf("%d%s%d",&a,n,&b);
	if(n[0]>=48&&n[0]<=57)
		j=n[0]-48;
	if(n[0]>=65&&n[0]<=90)
		j=n[0]-55;
	if(n[0]>=97&&n[0]<=122)
		j=n[0]-87;
	shijinzhi=shijinzhi+j;
	for(i=1;;i++)
	{
		if(n[i]=='\0')
			break;
		else
		{
		if(n[i]>=48&&n[i]<=57)
			j=n[i]-48;
		if(n[i]>=65&&n[i]<=90)
			j=n[i]-55;
		if(n[i]>=97&&n[i]<=122)
			j=n[i]-87;
		shijinzhi=shijinzhi*a+j;
		}
	}
	q=shijinzhi;
	int s=1,t;
	shijinzhi=shijinzhi/b;
	while(shijinzhi!=0)
	{
		shijinzhi=shijinzhi/b;
		s=s*b;
		p++;
	}
	shijinzhi=q;
	while(shijinzhi!=0)
	{
		t=shijinzhi/s;
		if(t<=9)
			printf("%c",t+48);
		else
			printf("%c",t+55);
		shijinzhi=shijinzhi-t*s;
		s=s/b;
		k++;
	}
	if(k<p+1)
	{
		for(i=0;i<p+1-k;i++)
			printf("%c",48);
	}
}




