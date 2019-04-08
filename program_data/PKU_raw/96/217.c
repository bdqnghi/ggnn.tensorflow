int main()
{
	int i,j,k,a[100],b[100],x;
	char num[101];
	memset(num,0,sizeof(num));
	scanf("%s",num);
	for(i=0;i<strlen(num);i++)
	{
		a[i]=b[i]=0;
		a[i]=num[i]-'0';
	}
	if(i==1)
	{
		printf("0\n%d\n",a[0]);
	}
	else
	{
		x=a[0];
		for(j=1;j<strlen(num);j++)
		{
			a[j]=10*x+a[j];
			b[j]=a[j]/13;
			x=a[j]%13;
		}
		if(b[1]!=0)
		{
			printf("%d",b[1]);
		}
		else if(j==2)
		{
			printf("%d",b[1]);
		}
		for(k=2;k<strlen(num);k++)
		{
			printf("%d",b[k]);
		}
		printf("\n%d",x);
	}
	return 0;
}
