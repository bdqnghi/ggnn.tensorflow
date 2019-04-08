
void exchange(int num[],char str[]);
void calculate(int num1[],int num2[]);

void main()
{
	int num1[100]={0},num2[100]={0},n,i,j;
	char str1[100]={""},str2[100]={""};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("%s%s",str1,str2);
	exchange(num1,str1);
	exchange(num2,str2);
	calculate(num1,num2);
	for(j=0;j<=99;j++)
	{
		num1[j]=0;
		num2[j]=0;
		str1[j]=' ';
		str2[j]=' ';
	}
	}
}

void exchange(int num[],char str[])
{
	int i,j=99,n=0;
	while(str[n]>=48&&str[n]<=58)
	{
		n+=1;
	}
	n-=1;
	for(i=n,j=99;i>=0;i--,j--)
	{
		num[j]=str[i]-48;
	}
}

void calculate(int num1[],int num2[])
{
	int i,n=0;
	int num3[100]={0};
	for(i=99;i>=0;i--)
	{
		num3[i]=num1[i]-num2[i];
		if(num3[i]<0)
		{
			num3[i]+=10;
			num1[i-1]-=1;
		}
	}

	while(num3[n]==0)
	{
		n+=1;
	}
	for(i=n;i<=99;i++)
	{
		printf("%d",num3[i]);
	}
	printf("\n");
} 
