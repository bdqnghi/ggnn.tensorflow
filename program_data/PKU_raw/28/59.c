void main()
{
	char str[10000];
	int i,j=0,len[300],add=0,flag;
	for(i=0;i<300;i++)
		len[i]=0;
	gets(str);
	if(str[0]!=32)
	{
		flag=1;
		add++;
		for(i=1;i<strlen(str);i++)
		{
			if(str[i]!=32&&i<strlen(str)-1)
			{
				add++;
				flag=1;
			}
			else if(str[i]!=32&&i==strlen(str)-1)
			{
				add++;
				len[j]=add;
				flag=0;
				add=0;
			}

			
			else if((str[i]==32)&&flag)
			{
				len[j]=add;
				flag=0;
				add=0;
				j++;
			}
			
		}
	}
	else
	{
		flag=0;
		for(i=1;i<strlen(str);i++)
		{
			if((str[i]!=' ')&&flag)
				add++;
			else if((str[i]!=' ')&&(flag==0))
			{
				flag=1;
				add++;
			}
			else if((str[i]==' ')&&flag)
			{
				len[j]=add;
				flag=0;
				add=0;
				j++;
			}
			else {}
		}
	}
	
	printf("%d",len[0]);
	for(i=1;len[i];i++)
		printf(",%d",len[i]);

}


