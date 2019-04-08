void main()
{
	char str1[100],str2[100],a1[100],a2[100];
	int num1[100],num2[100];
	int i,j,n1,n2;
	scanf("%s %s",&str1,&str2);
	n1=strlen(str1);
	n2=strlen(str2);
	for(i=0;i<n1;i++)
	{
		a1[i]=str1[i];
	}
	for(i=0;i<n2;i++)
	{
		a2[i]=str2[i];
	}
	for(i=0;i<100;i++)
	{
		num1[i]=0;
		num2[i]=0;
	}
	if(n1!=n2)
		printf("NO");
	else
		if(n1==n2)
		{
        	for(i=0;i<n1;i++)
			{
				for(j=0;j<n1;j++)
					if(a1[i]==a1[j])
						num1[i]=num1[i]+1;
				for(j=0;j<n1;j++)
					if(a1[i]==a2[j])
						num2[i]=num2[i]+1;
			}
			for(i=0;i<n1;i++)
				if(num1[i]!=num2[i])
					break;
			if(i>=n1)
				printf("YES");
			else
				if(i<n1)
				printf("NO");
		}
}