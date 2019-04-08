void main()
{
	char a[1000],b[1000];
	int num1[300],num2[300];
	int len1,len2;
	int i;
	int num;
	scanf("%s%s",&a,&b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1!=len2)
		printf("NO\n");
	else
	{
		for(i=0;i<300;i++)
		{
			num1[i]=0;
			num2[i]=0;
		}
		num=0;
		for(i=0;i<len1;i++)
		{
			num1[a[i]]++;
			num2[b[i]]++;
		}
		for(i=0;i<300;i++)
		{
			if(num1[i]!=num2[i])
			{
				printf("NO\n");
				break;
			}
			else
				num++;
		}
		if(num==300)
			printf("YES\n");
	}
}
