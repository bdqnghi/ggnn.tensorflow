void main()
{
	
	char m1[100],m2[100],n1[100],n2[100],sum[100];
	int i,mlen,nlen,t,u;
	scanf("%d",&t);
	for (u=0;u<t;u++)
	{
		for (i=0;i<100;i++)
			sum[i]='\0';
		for (i=0;i<100;i++)
			m1[i]='0';
		for (i=0;i<100;i++)
			n1[i]='0';
		scanf("%s",m1);
		scanf("%s",n1);
		mlen=strlen(m1);
		nlen=strlen(n1);
		for (i=0;i<100;i++)
			m2[i]='0';
		for (i=0;i<100;i++)
			n2[i]='0';
		for (i=0;i<mlen;i++)         /**/
			m2[100-mlen+i]=m1[i];
		for (i=0;i<=nlen;i++)
			n2[100-nlen+i]=n1[i];
		for (i=99;i>=0;i--)
		{
			sum[i]=sum[i]+m2[i]-n2[i]+48;
			if (sum[i]<'0')
			{
				sum[i]=sum[i]+10;
				sum[i-1]=sum[i-1]-1;        /**/
			}
		}
		for (i=0;i<100;i++)
		{
			if ((sum[i]!='0')&&(sum[i]!='\0'))
				break;
		}
		for (i=i;i<100;i++)
			printf("%c",sum[i]);
		printf("\n");
	}
}