long trans(int len,int a[],int b);
void main()
{
	int ori,fin,len0,i,len3,j;
	long ten;
	char num0[100],num3[100];
	int num1[100]={0},num2[100]={0};
	scanf("%d%s%d",&ori,num0,&fin);
	len0=strlen(num0);
	for(i=0;i<len0;i++)
	{
		if(num0[i]>='A'&&num0[i]<='Z')
			num1[i]=num0[i]-'A'+10;
		else if(num0[i]>='a'&&num0[i]<='z')
			num1[i]=num0[i]-'a'+10;
		else
			num1[i]=num0[i]-'0';
	}
	ten=trans(len0,num1,ori);
	if(ten==0)
		printf("0\n");
	else
	{
	for(i=0;ten;i++)
	{
		num2[i]=ten%fin;
		ten=ten/fin;
	}
	len3=i;
	for(j=0;j<=len3;j++,i--)
	{
		if(num2[i-1]<=9)
			num3[j]=num2[i-1]+'0';
		else
			num3[j]=num2[i-1]+'A'-10;
	}
	num3[len3]='\0';
	printf("%s\n",num3);
	}
}
long trans(int len,int a[],int b)
{
	long x;
	if(len==1)
		return(a[len-1]);
	else
		x=a[len-1]+b*trans(len-1,a,b);
	return(x);
}