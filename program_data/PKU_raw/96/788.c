int main()
{
	char c[100];
	int f,num,s=0;
	int i;

	gets(c);

	f=c[0]-48;
	for(i=1;c[i]!=0;i++)
	{
		num=f*10+c[i]-48;
		if(num/13==0&&s==0)
		{
			f=num%13;
		}
		else
		{
			printf("%d",num/13);
			f=num%13;
			s=1;
		}
	}
	if(s==0)
		printf("0");
	printf("\n%d\n",f);
	return 0;
}
