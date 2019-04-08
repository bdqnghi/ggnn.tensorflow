int main()
{
	char a[300], *p, zm;
	int b[27]={0};
	scanf("%s", &a);
	int i=0;
	for(zm='a';zm<='z';zm++)
	{
		i++;
		for(p=a;*p!='\0';p++)
		{
			if(*p==zm)
			{
				b[i]++;
			}
		}
	}
	for(i=1;i<27;i++)
	{
		if(b[i]!=0)
		{
			break;
		}
	}
	if(i==27)
	{
		printf("No");
	}
	else
	{
		i=0;
		for(zm='a';zm<='z';zm++)
		{
			i++;
			if(b[i]!=0)
			{
				printf("%c=%d\n", zm, b[i]);
			}
		} 
	}
	return 0;
}