void main()
{
	char str1[100],str2[100];
	int num1[52]={0},num2[52]={0};
	char str3[52]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int i,j,max,min;
	int flag;
	int flag1,flag2,flag3;
	scanf("%s %s",str1,str2);
	max=strlen(str1);
	min=strlen(str2);
	if(max!=min)
		printf("NO");
	else if(max==min)
	{
		for(i=0;i<52;i++)
	{
			for(j=0;j<max;j++)
			{
		if(str1[j]==str3[i])
		{	
			num1[i]++;
		}
		if(str2[j]==str3[i])
		{
			num2[i]++;
		}
			}
	}

	for(i=0;i<max;i++)
	{
		flag=0;
		flag1=0;
		for(j=0;j<min;j++)
		{
			if(str2[j]==str1[i])
			{
				flag=1;
			}
		
		flag1=1;
		}
			if(flag==0)
			{
				
				printf("NO");
				return;
			}
	}
	
	for(i=0;i<52;i++)
	{
		flag2=0;
		flag3=0;
		if(num1[i]==num2[i])
		{
			flag2=1;
		}
		flag3=1;
		if(flag2==0)
		{	
			printf("NO");
			return;
		}
	}
	}
	if(flag1==1&&flag3==1)
		printf("YES");
	
}