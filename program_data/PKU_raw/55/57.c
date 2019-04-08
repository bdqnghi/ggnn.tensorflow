void main()
{
	int a[1000],b[1000],d[1000];
	int i,n,m,lc,ld=0,n1,sum=0;
	char c[1000],e[1000];
	scanf("%d %s %d",&n,c,&m);
	lc=strlen(c);
	if(c[0]=='0')
	{
		printf("0");
	}
	if(c[0]!='0')
	{
		for(i=0;i<lc;i++)
		{
			if(c[i]<=90&&c[i]>=65)
			{
				a[i]=c[i]-55;
			}
			if(c[i]<=122&&c[i]>=97)
			{
				a[i]=c[i]-87;
			}
			if(c[i]<=57&&c[i]>=48)
			{
				a[i]=c[i]-48;
			}
		}
		for(i=0;i<lc;i++)
		{
			n1=(int)pow(n,i);
			b[i]=a[lc-i-1]*n1;
			sum=sum+b[i];
		}
		for(i=0;sum>0;i++)
		{
			d[i]=sum%m;
			ld++;
			sum=sum/m;
		}
 
		for(i=ld-1;i>=0;i--)
		{
			if(d[i]<=9&&d[i]>=0)
			{
				e[i]=d[i]+48;
			}
			if(d[i]<=36&&d[i]>=10)
			{
				e[i]=d[i]+55;
			}
			printf("%c",e[i]);
		}
	 }
}
		
