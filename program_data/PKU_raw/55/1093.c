int main()
{
	long int a,b,sum,d;
	int i=0,j;
	char n[20],e[20]={0};
	scanf("%d%s%d",&a,n,&b);
	for(i=0,sum=0;n[i]!='\0';i++)
	{
		if(n[i]>='0'&&n[i]<='9')
			d=n[i]-'0';
		else
			if(n[i]>='a'&&n[i]<='z')
				d=n[i]-'a'+10;
			else
				if(n[i]>='A'&&n[i]<='Z')
					d=n[i]-'A'+10;
		sum=sum*a+d;
	}
	for(i=0;sum>=b;i++)
	{
		d=(sum%b);
		if(d<=9)
			e[i]=d+'0';
		else
			if(d>9)
				e[i]=d-10+'A';
			sum=(sum-d)/b;
	}
    if(sum<=9)
			e[i]=sum+'0';
		else
			if(sum>9)
				e[i]=sum-10+'A';
	for(j=i;j>=0;j--)
		printf("%c",e[j]);
	return 0;
}