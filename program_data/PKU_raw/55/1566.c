long int shijinzhi(int a,char n[100])
{
	int i;
	long int z=0;
	for(i=0;i<strlen(n);i++)
	{
		if(n[i]>='0'&&n[i]<='9')
		{
		z+=pow(a,strlen(n)-1-i)*(n[i]-'0');
		}
		else if(n[i]>='a'&&n[i]<='z')
		{
		z+=pow(a,strlen(n)-1-i)*(n[i]-'a'+10);
		}
		else if(n[i]>='A'&&n[i]<='Z')
		{
		z+=pow(a,strlen(n)-1-i)*(n[i]-'A'+10);
		}
	}
	return z;
}
void zhuanhuan(long int x,char a[1000],int b)
{
	int yushu,l,j;
		int i=0;
		char n[1000]={0};
	if(b<=10)
	{
		do
		{
		yushu=x%b;
		x=x/b;
		n[i]=yushu+'0';
		i++;
		}while(x>=b);
		n[i]=x+'0';
	}
	else if(b>10)
	{
		do
		{
		yushu=x%b;
		x=x/b;
		if(yushu<=9)
		n[i]=yushu+'0';
		else if(yushu>9)
		n[i]=yushu-10+'A';
		i++;
		}while(x>=b);
		if(x<=9)
		n[i]=x+'0';
		else if(x>9)
		n[i]=x-10+'A';
	}
	for(l=i,j=0;l>=0;l--,j++)
	{
		a[j]=n[l];
	}
}
void main()
{
	int a,b,i,p;
	long int x;
		char n[1000]={0};
	scanf("%d %s %d",&a,&n,&b);
	x=shijinzhi(a,n);
	p=strlen(n);
	for(i=0;i<=p;i++)
	{n[i]=0;}
	zhuanhuan(x,n,b);
	if(n[0]!='0') printf("%s",n);
	else printf("0");
}