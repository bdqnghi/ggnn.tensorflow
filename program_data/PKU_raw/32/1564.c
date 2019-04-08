void main()
{
	void minus(char n1[100],char n2[100]);
	char num1[100],num2[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s",num1,num2);
		minus(num1,num2);
		printf("%s\n",num1);
	}
}
void minus(char n1[100],char n2[100])
{
	int a,b;
	int k;
	a=strlen(n1);
	b=strlen(n2);
	for(k=b-1;k>=0;k--)
	{
		if(n1[a-b+k]>=n2[k])n1[a-b+k]=n1[a-b+k]-n2[k]+48;
		else
		{
			n1[a-b+k-1]--;
			n1[a-b+k]=n1[a-b+k]-n2[k]+58;
		}
	}
}
