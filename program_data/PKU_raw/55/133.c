void main()
{
	int a,b,i,t=1,w;
	char n[32],k[32]={0};
	long m=0;
	scanf("%d",&a);
	scanf("%s",n);
	scanf("%d",&b);
	for(i=strlen(n);i>=0;i--)
	{
		if((n[i]>='0')&&(n[i]<='9'))
		{
			m=m+(n[i]-'0')*t;
			t=t*a;
		}
		else if((n[i]>='a')&&(n[i]<='z'))
		{
			m=m+(n[i]-'a'+10)*t;
			t=t*a;
		}
		else if((n[i]>='A')&&(n[i]<='Z'))
		{
			m=m+(n[i]-'A'+10)*t;
			t=t*a;
		}
	}
	if(m==0)
		printf("0\n");
	else
	{
		if(b==10)
			printf("%ld",m);
		else
		{
			for(i=0;m!=0;i++)
			{
				w=m%b;
				if(w>=0&&w<=9)
					k[i]=w+'0';
				else if(w>9&&w<36)
					k[i]=w-10+'A';
				m=(m-w)/b;
			}
			k[i]='\0';
			for(i=strlen(k)-1;i>=0;i--)
				printf("%c",k[i]);
			printf("\n");
		}
	}
}