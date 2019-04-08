int main()
{
	int n,len,i,j,flag;
	char str[100];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(str);
		len=strlen(str);
		flag=1;
		if((str[0]>=65)&&(str[0]<=90)||(str[0]>=97)&&(str[0]<=122)||(str[0]=='_'))
			flag*=1;
		else
			flag*=0;
		for(j=1;j<len;j++)
		{
			if((str[j]>=65)&&(str[j]<=90)||(str[j]>=97)&&(str[j]<=122)||(str[j]=='_')||(str[j]>=48)&&(str[j]<=57))
				flag*=1;
			else
			{
				flag*=0;
				break;
			}
		}
		if(flag==1)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}