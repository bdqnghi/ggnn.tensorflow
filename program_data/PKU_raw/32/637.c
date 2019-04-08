struct num
{
   char	a[100];
   char b[100];
};
void main()
{
	void f(char num1[100],char num2[100]);
	int n,i;
	struct num num[10];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%s",num[i].a);
		scanf("%s",num[i].b);
		printf("\n");
	}
	for(i=0;i<=n-1;i++)
	{
		f(num[i].a,num[i].b);
		printf("\n");
	}
	printf("\n");
}
void f(char num1[100],char num2[100])
{
	int n1,n2,j,k;
	char c[100];
	n1=strlen(num1);
	n2=strlen(num2);
	for(j=n1-1;j>=n1-n2;j--)
	{
		if(num1[j]>=num2[j-n1+n2])
			c[j]=num1[j]-num2[j-n1+n2]+48;
		else
		{
			c[j]=num1[j]-num2[j-n1+n2]+58;
			num1[j-1]=num1[j-1]-1;
		}
	}
	for(k=0;k<=n1-n2-1;k++)
	{
		c[k]=num1[k];
	}
	for(k=0;k<=n1-1;k++)
	{
		printf("%c",c[k]);
	}
}


	