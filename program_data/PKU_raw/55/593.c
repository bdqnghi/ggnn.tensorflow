long int num(long int x,int i,int b)
{
	long int a;
	a=x;
	int j;
	for (j=0;j<i;j++)
		a=a*b;
	return a;
}
void main ()
{
	int a,b,i,j,length;
	char shu[100],zhuanhuan[100];
	scanf("%d %s %d",&a,shu,&b);
	long int k=0;
	length=strlen(shu);
	long int l;
	for (i=0;i<length-1;i++)
	{
		if( ((shu[i]>='A')&&(shu[i]<='Z')))
		{
			l=shu[i]-'A'+10;
			k=k+num(l,length-i-1,a);
		}
		if(((shu[i]>='0')&&(shu[i]<='9')))
		{
			l=shu[i]-'0';
			k=k+num(l,length-i-1,a);
		}
		if( ((shu[i]>='a')&&(shu[i]<='z')))
		{
			l=shu[i]-'a'+10;
			k=k+num(l,length-i-1,a);
		}
	}
	if ((shu[length-1]>='A')&&(shu[length-1]<='Z'))
		k=k+shu[length-1]-'A'+10;
	if(((shu[length-1]>='0')&&(shu[length-1]<='9')))
		k=k+shu[length-1]-'0';
	if ((shu[length-1]>='a')&&(shu[length-1]<='z'))
			k=k+shu[length-1]-'a'+10;
	int m=0;
	int n;
	long int f=k;
	do 
	{
		n=f%b;
		if ((n>=0)&&(n<=9))
		{
			zhuanhuan[m]=n+'0';
			m++;
		}
		else
		{
			zhuanhuan[m]=n-10+'A';
			m++;
		}
		f=f/b;
	}while(f!=0);
	for (i=m-1;i>=0;i--)
		printf("%c",zhuanhuan[i]);
	printf("\n");
}