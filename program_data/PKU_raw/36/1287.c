void main()
{
	char str1[100],str2[100],temp;
	int i,j,k;
	int a,b,c;

	scanf("%s",str1);
	scanf("%s",str2);
	
	a=strlen(str1);
	b=strlen(str2);

	if(a!=b)
		printf("NO\n");
	else if(a==b)
	{
		for(i=0;i<a-1;i++)
		{
			for(j=i+1;j<a;j++)
			{
				if(str1[i]>str1[j])
				{
					temp=str1[i];
					str1[i]=str1[j];
					str1[j]=temp;
				}
			}
		}

		for(i=0;i<b-1;i++)
		{
			for(j=i+1;j<b;j++)
			{
				if(str2[i]>str2[j])
				{
					temp=str2[i];
					str2[i]=str2[j];
					str2[j]=temp;
				}
			}
		}

		for(i=0;i<a-1;i++)
		{
			if(str1[i]!=str2[i])
			{
				printf("NO\n");
				break;
			}
		}
		if(i==a-1)
		printf("YES\n");
	}
}
